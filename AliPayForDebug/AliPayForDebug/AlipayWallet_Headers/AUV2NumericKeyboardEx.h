//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AUNumericKeyboardEx.h"

@interface AUV2NumericKeyboardEx : AUNumericKeyboardEx
{
}

- (id)keyPosArrayDefs;
- (long long)positionAfterFlex;
- (double)buttonOriginX;
- (CDStruct_eaf340f0)getButtonInfoWithKeyIndex:(int)arg1 keyPos:(long long)arg2;
- (void)updateButtonStyle:(id)arg1;
- (id)createButtonWithType:(CDStruct_eaf340f0)arg1;
- (void)setDismissHidden:(_Bool)arg1;
- (double)numericButtonLayoutWidth;
- (double)numericButtonLayoutHeight;
- (id)createToolBarView;
- (void)configurerMembers;
- (id)init;

@end

