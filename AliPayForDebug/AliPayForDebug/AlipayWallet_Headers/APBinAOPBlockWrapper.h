//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APBinAOPWrapper-Protocol.h"

@class APCallStackMainThreadInfo, NSArray, NSString;

@interface APBinAOPBlockWrapper : NSObject <APBinAOPWrapper>
{
    _Bool _canExcute;
    NSArray *_callStack;
    NSArray *_allStack;
    APCallStackMainThreadInfo *_mainThreadInfo_binaop;
    NSArray *_exAllStack;
    APCallStackMainThreadInfo *_exMainThreadInfo_binaop;
}

@property(retain, nonatomic) APCallStackMainThreadInfo *exMainThreadInfo_binaop; // @synthesize exMainThreadInfo_binaop=_exMainThreadInfo_binaop;
@property(retain, nonatomic) NSArray *exAllStack; // @synthesize exAllStack=_exAllStack;
@property(retain, nonatomic) APCallStackMainThreadInfo *mainThreadInfo_binaop; // @synthesize mainThreadInfo_binaop=_mainThreadInfo_binaop;
@property(copy, nonatomic) NSArray *allStack; // @synthesize allStack=_allStack;
@property(copy, nonatomic) NSArray *callStack; // @synthesize callStack=_callStack;
@property(nonatomic) _Bool canExcute; // @synthesize canExcute=_canExcute;
- (void).cxx_destruct;
- (id)initWithCallStack:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

