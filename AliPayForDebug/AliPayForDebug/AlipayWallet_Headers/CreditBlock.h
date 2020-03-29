//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ALPInputCardBlockDelegate-Protocol.h"

@class APWealthTextFieldTitleCell, NSString, UIView;
@protocol ALPAddBankClickCVV2Delegate, ALPAddBankClickExpiredDateDelegate;

@interface CreditBlock : NSObject <ALPInputCardBlockDelegate>
{
    _Bool _expiredShow;
    _Bool _cvv2Show;
    UIView *_headerView;
    NSString *_sectionHeaderText;
    APWealthTextFieldTitleCell *_effectiveDateCell;
    APWealthTextFieldTitleCell *_cvv2Cell;
    id <ALPAddBankClickCVV2Delegate> _clickDelegate;
    id <ALPAddBankClickExpiredDateDelegate> _clickExpiredDateDelegate;
}

@property(nonatomic) __weak id <ALPAddBankClickExpiredDateDelegate> clickExpiredDateDelegate; // @synthesize clickExpiredDateDelegate=_clickExpiredDateDelegate;
@property(nonatomic) __weak id <ALPAddBankClickCVV2Delegate> clickDelegate; // @synthesize clickDelegate=_clickDelegate;
@property(retain, nonatomic) APWealthTextFieldTitleCell *cvv2Cell; // @synthesize cvv2Cell=_cvv2Cell;
@property(retain, nonatomic) APWealthTextFieldTitleCell *effectiveDateCell; // @synthesize effectiveDateCell=_effectiveDateCell;
- (void).cxx_destruct;
- (double)cellHeight:(long long)arg1;
- (void)resignFirstResponse;
- (void)fillValue:(id)arg1;
- (id)blockCell:(id)arg1 atIndex:(long long)arg2;
- (void)didClickExpiredDateDesc:(id)arg1;
- (long long)cellCount;
- (_Bool)hasText;
- (id)isValid;
- (void)updateExpireDate:(id)arg1;
- (void)clickCVV2:(id)arg1;
- (id)headerForBlock;
- (void)buildUI;
- (id)initWithExpired:(_Bool)arg1 ccv2:(_Bool)arg2 sectionHeaderText:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

