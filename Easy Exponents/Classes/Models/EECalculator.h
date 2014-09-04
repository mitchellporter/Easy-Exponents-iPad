


@interface EECalculator : NSObject

/*How much you should pay yourself (50%)
- How much you should set aside for expenses (30%)
- How much you should set aside for profit distribution: (10%)
- How much you should set aside for taxes: (10%) */

@property (readonly) CGFloat firstPower;
@property (readonly) CGFloat secondPower;
@property (readonly) CGFloat thirdPower;
@property (readonly) CGFloat fourthPower;
@property (readonly) CGFloat fifthPower;
@property (readonly) CGFloat sixthPower;
@property (readonly) CGFloat seventhPower;
@property (readonly) CGFloat eighthPower;
@property (readonly) CGFloat ninthPower;
@property (readonly) CGFloat tenthPower;



- (void)calculateValuesForNumber:(CGFloat)number;


@end
