//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface APBResponse : NSObject
{
    int resultType;
    NSString *failReason;
    NSMutableDictionary *successResult;
    NSString *_token;
    NSString *_retCodeSub;
    NSString *_retMessageSub;
}

@property(copy, nonatomic) NSString *retMessageSub; // @synthesize retMessageSub=_retMessageSub;
@property(copy, nonatomic) NSString *retCodeSub; // @synthesize retCodeSub=_retCodeSub;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSMutableDictionary *successResult; // @synthesize successResult;
@property(copy, nonatomic) NSString *failReason; // @synthesize failReason;
@property(nonatomic) int resultType; // @synthesize resultType;
- (void).cxx_destruct;
- (id)initWithResultType:(int)arg1 failReason:(id)arg2 token:(id)arg3 retCodeSub:(id)arg4 retMessageSub:(id)arg5 successResult:(id)arg6;
- (id)initWithResultType:(int)arg1 failReason:(id)arg2 token:(id)arg3 successResult:(id)arg4;
- (id)init;

@end

