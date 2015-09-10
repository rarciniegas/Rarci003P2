//  PROGRAMMER: Roberto Arciniegas
//  PANTHERID: 1385020
//  CLASS:          COP 465501 TR 5:00
//  INSTRUCTOR:     Steve Luis  ECS 282
//  ASSIGNMENT:     #2 Calculator
//  DUE:            Thursday 09/10/15
//
//  ViewController.h
//  Rarci003P2
//
//  Created by Roberto Arciniegas on 9/8/15.
//  Copyright (c) 2015 Roberto Arciniegas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *display;

-(void) processDigit: (int) digit;
-(void) processOp: (char) theOp;
-(void) storeFracPart;

// Numeric keys

-(IBAction) clickDigit: (UIButton *) sender;

// Arithmetic Operation keys

-(IBAction) clickPlus;
-(IBAction) clickMinus;
-(IBAction) clickMultiply;
-(IBAction) clickDivide;

// Misc. Keys

-(IBAction) clickOver;
-(IBAction) clickEquals;
-(IBAction) clickConvert;
-(IBAction) clickClear;


@end

