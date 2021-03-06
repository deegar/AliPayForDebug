//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WPTaskUnitBase.h"

#import "WPTaskUnitCheckBoxElementProtocol-Protocol.h"

@class NSMutableArray, NSString, UIView, WPTaskUnitCheckBoxElement;

@interface WPTaskUnitCheckBox : WPTaskUnitBase <WPTaskUnitCheckBoxElementProtocol>
{
    _Bool _selectionPerLine;
    UIView *_checkBoxContentView;
    NSMutableArray *_checkBoxElements;
    WPTaskUnitCheckBoxElement *_currentCheckBox;
}

@property(retain, nonatomic) WPTaskUnitCheckBoxElement *currentCheckBox; // @synthesize currentCheckBox=_currentCheckBox;
@property(retain, nonatomic) NSMutableArray *checkBoxElements; // @synthesize checkBoxElements=_checkBoxElements;
@property(retain, nonatomic) UIView *checkBoxContentView; // @synthesize checkBoxContentView=_checkBoxContentView;
@property(nonatomic) _Bool selectionPerLine; // @synthesize selectionPerLine=_selectionPerLine;
- (void).cxx_destruct;
- (void)setCacheData:(id)arg1;
- (id)getCacheData;
- (id)getInputData;
- (_Bool)hasInputData:(id *)arg1;
- (id)constructCheckBoxElementWithData:(id)arg1;
- (void)checkBoxStatusChanged:(id)arg1;
- (void)layoutCheckBoxItems;
- (id)contentView;
- (id)initWithData:(id)arg1 width:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

