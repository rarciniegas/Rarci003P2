//  PROGRAMMER: Roberto Arciniegas
//  PANTHERID: 1385020
//  CLASS:          COP 465501 TR 5:00
//  INSTRUCTOR:     Steve Luis  ECS 282
//  ASSIGNMENT:     #2 Calculator
//  DUE:            Thursday 09/10/15
//
//  Fraction.h
//  Rarci003P2
//
//  Created by Roberto Arciniegas on 9/9/15.
//  Copyright (c) 2015 Roberto Arciniegas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Fraction : NSObject

@property int numerator, denominator;

-(void)         print;
-(void)         setTo: (int) n over: (int) d;
-(Fraction *)   add: (Fraction *) f;
-(Fraction *)   subtract: (Fraction *) f;
-(Fraction *)   multiply: (Fraction *) f;
-(Fraction *)   divide: (Fraction *) f;
-(void)         reduce;
-(double)       convertToNum;
-(NSString *)   convertToString;

@end



