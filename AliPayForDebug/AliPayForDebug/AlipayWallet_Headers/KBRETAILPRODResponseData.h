//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBRETAILPRODToString.h"

@class NSString;

@interface KBRETAILPRODResponseData : KBRETAILPRODToString
{
    _Bool _success;
    NSString *_errorCode;
    NSString *_errorMsg;
    NSString *_errorName;
    NSString *_tip;
}

@property(retain, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) NSString *errorName; // @synthesize errorName=_errorName;
@property(retain, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;

@end

