//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BHInputToolbar.h"

@class RECheckBox;

@interface REInputToolbar : BHInputToolbar
{
    int _maxLimitLength;
    RECheckBox *_checkBox;
}

@property(nonatomic) int maxLimitLength; // @synthesize maxLimitLength=_maxLimitLength;
@property(retain, nonatomic) RECheckBox *checkBox; // @synthesize checkBox=_checkBox;
- (void).cxx_destruct;
- (void)expandingTextViewDidChange:(id)arg1;
- (void)setCheckBoxText:(id)arg1;
- (_Bool)expandingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)initWithContainerView:(id)arg1 inputDelegate:(id)arg2 withCheckBox:(_Bool)arg3;

@end

