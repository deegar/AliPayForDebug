//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APDAOEvaluator : NSObject
{
}

+ (_Bool)popWithOperator:(struct NSNumber *)arg1 operandStack:(id)arg2 operatorStack:(id)arg3;
+ (_Bool)compareOperator:(struct NSNumber *)arg1 operator2:(struct NSNumber *)arg2;
+ (_Bool)evaluateBooleanWithTokenList:(id)arg1 delegate:(id)arg2 error:(id *)arg3;
+ (id)buildTokenListWithExpression:(id)arg1;

@end

