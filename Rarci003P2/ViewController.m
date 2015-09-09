//
//  ViewController.m
//  Rarci003P2
//
//  Created by Roberto Arciniegas on 9/8/15.
//  Copyright (c) 2015 Roberto Arciniegas. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController
{
    char op;
    int currentNumber;
    BOOL firstOperand, isNumerator;
    Calculator *myCalculator;
    NSMutableString *displayString;
}

@synthesize display;


- (void)viewDidLoad {
    // Override point for customization after application launch
    firstOperand = YES;
    isNumerator = YES;
    displayString = [NSMutableString stringWithCapacity: 40];
    myCalculator = [[Calculator alloc] init];
}

-(void) processDigit: (int) digit {
    currentNumber = currentNumber * 10 + digit;
    [displayString appendString:
     [NSString stringWithFormat: @"%i", digit]];
    display.text = displayString;
}

- (IBAction) clickDigit: (UIButton *) sender {
    int digit = sender.tag;
    [self processDigit: digit];
}

-(void) processOp: (char) theOp {
    NSString *opStr;
    op = theOp;
    switch (theOp) { case '+':
            opStr = @" + ";
            break; case '-':
            opStr = @" – ";
            break; case '*':
            opStr = @" × ";
            break; case '/':
            opStr = @" ÷ "; break;
    }
    [self storeFracPart];
    firstOperand = NO;
    isNumerator = YES;
    [displayString appendString: opStr];
    display.text = displayString;
}

-(void) storeFracPart {
    if (firstOperand) {
        if (isNumerator) {
            myCalculator.operand1.numerator = currentNumber;
            myCalculator.operand1.denominator = 1; // e.g. 3 * 4/5 = }
            else
                myCalculator.operand1.denominator = currentNumber;
        }
        else if (isNumerator) {
            myCalculator.operand2.numerator = currentNumber;
            myCalculator.operand2.denominator = 1; // e.g. 3/2 * 4 = }
            else {
                myCalculator.operand2.denominator = currentNumber; firstOperand = YES;
            }
            currentNumber = 0;
        }
    
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
