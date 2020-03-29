//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBDocumentDelegate-Protocol.h"
#import "MFWidgetPluginProtocol-Protocol.h"

@class FBDocument, NSString;
@protocol LifeHomeCustomCellViewDelegate, MFWidgetPluginProtocol;

@interface LifeHomeCustomCellView : UIView <FBDocumentDelegate, MFWidgetPluginProtocol>
{
    id <MFWidgetPluginProtocol> _delegate;
    id <LifeHomeCustomCellViewDelegate> _adelegate;
    FBDocument *_doc;
    NSString *_templateId;
    NSString *_tmpCacheCellExposeData;
}

+ (id)subType;
+ (id)tagType;
+ (struct CGSize)sizeOfWidgetWithData:(id)arg1 cssItem:(id)arg2 superFrame:(struct CGRect)arg3 extendInfo:(id)arg4;
@property(retain, nonatomic) NSString *tmpCacheCellExposeData; // @synthesize tmpCacheCellExposeData=_tmpCacheCellExposeData;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) FBDocument *doc; // @synthesize doc=_doc;
@property(nonatomic) __weak id <LifeHomeCustomCellViewDelegate> adelegate; // @synthesize adelegate=_adelegate;
@property(nonatomic) __weak id <MFWidgetPluginProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)onEventNotify:(id)arg1 andDocument:(id)arg2;
- (void)setMFDelegate:(id)arg1;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;
- (_Bool)handleMFWidgetEvent:(id)arg1 target:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

