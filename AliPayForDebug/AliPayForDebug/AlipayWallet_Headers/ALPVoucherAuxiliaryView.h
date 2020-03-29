//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString;

@interface ALPVoucherAuxiliaryView : UIView
{
    NSArray *_itemList;
    CDUnknownBlockType _selectedBlock;
    NSString *_templateId;
    NSString *_passId;
}

@property(copy, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(readonly, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
- (void).cxx_destruct;
- (void)onSelectRowAtIndex:(unsigned long long)arg1;
- (void)updateWithVoucherInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

