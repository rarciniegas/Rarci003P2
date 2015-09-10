//
//  Calculator.h
//  Rarci003P2
//
//  Created by Roberto Arciniegas on 9/9/15.
//  Copyright (c) 2015 Roberto Arciniegas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Fraction.h"

@interface Calculator : NSObject

@property (strong, nonatomic) Fraction *operand1;
@property (strong, nonatomic) Fraction *operand2;
@property (strong, nonatomic) Fraction *accumulator;

-(Fraction *) performOperation: (char) op;
-(void) clear;

@end
