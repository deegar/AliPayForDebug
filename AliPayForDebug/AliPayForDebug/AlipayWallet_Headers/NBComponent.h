//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NBComponentProtocol-Protocol.h"

@class NBComponentContext, NPJsApiHandler4DownloadFile, NSDictionary, NSString;
@protocol NBComponentMessageDelegate;

@interface NBComponent : NSObject <NBComponentProtocol>
{
    _Bool _nbComponentIsFullScreen;
    _Bool _shouldFullScreen;
    int _visibeState;
    id <NBComponentMessageDelegate> _nbComponentMessageDelegate;
    NSString *_type;
    NSDictionary *_data;
    NSString *_componentId;
    NBComponentContext *_context;
}

@property(nonatomic) _Bool shouldFullScreen; // @synthesize shouldFullScreen=_shouldFullScreen;
@property(nonatomic) int visibeState; // @synthesize visibeState=_visibeState;
@property(nonatomic) _Bool nbComponentIsFullScreen; // @synthesize nbComponentIsFullScreen=_nbComponentIsFullScreen;
@property(retain, nonatomic) NBComponentContext *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *componentId; // @synthesize componentId=_componentId;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) __weak id <NBComponentMessageDelegate> nbComponentMessageDelegate; // @synthesize nbComponentMessageDelegate=_nbComponentMessageDelegate;
- (void).cxx_destruct;
- (int)visibilityState;
- (_Bool)shouldObServerVisibilityStateChange;
- (_Bool)setVisibilityState:(int)arg1;
- (void)componentDidVisiblity;
- (void)componentDidHidden;
- (void)componentDidExitFullScreen;
- (void)componentWillExitFullScreen;
- (void)componentDidEnterFullScreen;
- (void)componentWillEnterFullScreen;
- (_Bool)shouldEnterFullScreen;
- (void)setContentViewFullScreen:(_Bool)arg1 shouldRotate:(_Bool)arg2;
- (_Bool)isFullScreen;
- (void)getComponentResourceDataWithUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)contentView;
- (void)componentReceiveMessage:(id)arg1 data:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)componentDataDidChangeWithData:(id)arg1;
- (void)componentDataWillChangeWithData:(id)arg1;
- (void)componentDidPause;
- (void)componentWillPause;
- (void)componentDidResume;
- (void)componentWillResume;
- (void)componentDidDestory;
- (void)componentWillDestory;
- (void)componentDidAppear;
- (void)componentWillAppear;
- (id)initWithConfig:(id)arg1 messageDelegate:(id)arg2;
- (void)getComponentResourceDataWithUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NPJsApiHandler4DownloadFile *downloadFactory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

