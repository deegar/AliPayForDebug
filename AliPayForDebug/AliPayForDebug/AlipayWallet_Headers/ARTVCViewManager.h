//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RTCVideoViewDelegate-Protocol.h"

@class ARTVCMutableDictionary, NSDictionary;
@protocol ARTVCViewManagerDelegate;

@interface ARTVCViewManager : NSObject <RTCVideoViewDelegate>
{
    NSDictionary *_views;
    id <ARTVCViewManagerDelegate> _delegate;
    ARTVCMutableDictionary *_innerViews;
}

@property(retain, nonatomic) ARTVCMutableDictionary *innerViews; // @synthesize innerViews=_innerViews;
@property(nonatomic) __weak id <ARTVCViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *views; // @synthesize views=_views;
- (void).cxx_destruct;
- (id)getViewID:(id)arg1;
- (id)createEaglVideoView;
- (void)didFirstFrameRendered:(id)arg1;
- (void)videoView:(id)arg1 didChangeVideoSize:(struct CGSize)arg2;
- (void)bindTrack:(id)arg1 toView:(id)arg2;
- (void)removeViewWithId:(id)arg1;
- (id)getViewWithId:(id)arg1;
- (id)createViewWithId:(id)arg1;
- (void)dealloc;
- (id)init;

@end

