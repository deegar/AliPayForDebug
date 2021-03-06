//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ALPInputCardBlockDelegate-Protocol.h"

@class APWealthTextFieldTitleCell, NSString;
@protocol ALPAddBankClickPhoneDelegate;

@interface PhoneBlock : NSObject <ALPInputCardBlockDelegate>
{
    APWealthTextFieldTitleCell *_phoneNumberCell;
    id <ALPAddBankClickPhoneDelegate> _clickPhoneDelegate;
}

@property(nonatomic) __weak id <ALPAddBankClickPhoneDelegate> clickPhoneDelegate; // @synthesize clickPhoneDelegate=_clickPhoneDelegate;
@property(retain, nonatomic) APWealthTextFieldTitleCell *phoneNumberCell; // @synthesize phoneNumberCell=_phoneNumberCell;
- (void).cxx_destruct;
- (void)fillValue:(id)arg1;
- (_Bool)hasText;
- (id)isValid;
- (void)resignFirstResponse;
- (double)cellHeight:(long long)arg1;
- (id)blockCell:(id)arg1 atIndex:(long long)arg2;
- (long long)cellCount;
- (void)clickPhoneDesc:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

