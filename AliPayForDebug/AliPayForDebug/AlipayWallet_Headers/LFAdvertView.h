//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LFInfoSubviewProtocol-Protocol.h"

@class CDPSpaceView, NSString;

@interface LFAdvertView : UIView <LFInfoSubviewProtocol>
{
    CDPSpaceView *_spaceView;
}

@property(retain, nonatomic) CDPSpaceView *spaceView; // @synthesize spaceView=_spaceView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)promotionCenterCallBack:(id)arg1;
- (void)refreshLifeInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 lifeInfo:(id)arg2 infoView:(id)arg3 controller:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

