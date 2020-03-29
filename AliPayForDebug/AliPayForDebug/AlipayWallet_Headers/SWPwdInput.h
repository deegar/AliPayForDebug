//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ImmPayPwd.h"

#import "ImmPayPwdDelegate-Protocol.h"

@class NSString;
@protocol SWPwdInputDelegate;

@interface SWPwdInput : ImmPayPwd <ImmPayPwdDelegate>
{
    long long _maxLength;
    id <SWPwdInputDelegate> _inputDelegate;
}

@property(nonatomic) __weak id <SWPwdInputDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
- (void).cxx_destruct;
- (void)onPwdUpdated:(long long)arg1;
- (id)initWithPwdType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

