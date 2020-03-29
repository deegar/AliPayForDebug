//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CKView-Protocol.h"
#import "CKViewPrivate-Protocol.h"

@class CKFalconInstance, CKHandlerManager, CKWidgetManager, NSHashTable, NSString;
@protocol CKEngineProtocol;

@interface CubeViewImpl : UIView <CKViewPrivate, CKView>
{
    // Error parsing type: ^{CKScene=^^?{atomic<int>=Ai}i{ACKString=ii^v{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}}{ACKString=ii^v{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}}{ACKString=ii^v{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}}^{ICKBridgeManager}{CKStyleRect={CKStylePoint=dd}{CKStyleSize=dd}}i^{CKLayoutTree}^{CKRenderTree}^{CKAnimationControl}i^{CKWhiteScreenException}^{CKRenderProfiling}^{CKLogicTrace}}, name: _scene
    // Error parsing type: ^{CKPlatformObject=^^?{atomic<int>=Ai}^vBB{function<void (void *)>={__value_func<void (void *)>={type=[24C]}^{__base<void (void *)>}}}}, name: _platformView
    _Bool _careRootOffset;
    unsigned long long _state;
    NSString *_pageInstanceID;
    NSString *_containerID;
    CKHandlerManager *_handlerManager;
    CKWidgetManager *_widgetManager;
    NSHashTable *_subWidgets;
    id <CKEngineProtocol> _engine;
    CKFalconInstance *_falconInstance;
    unsigned long long _falconDataHash;
    unsigned long long _falconEnvHash;
    UIView *_placeHolderView;
    struct CGPoint _careRootOffsetMin;
    struct CGPoint _careRootOffsetMax;
}

+ (id)loadViewWithViewID:(id)arg1 option:(id)arg2;
@property(retain, nonatomic) UIView *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
@property(nonatomic) unsigned long long falconEnvHash; // @synthesize falconEnvHash=_falconEnvHash;
@property(nonatomic) unsigned long long falconDataHash; // @synthesize falconDataHash=_falconDataHash;
@property(nonatomic) __weak CKFalconInstance *falconInstance; // @synthesize falconInstance=_falconInstance;
@property(nonatomic) __weak id <CKEngineProtocol> engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSHashTable *subWidgets; // @synthesize subWidgets=_subWidgets;
@property(nonatomic) struct CGPoint careRootOffsetMax; // @synthesize careRootOffsetMax=_careRootOffsetMax;
@property(nonatomic) struct CGPoint careRootOffsetMin; // @synthesize careRootOffsetMin=_careRootOffsetMin;
@property(nonatomic) _Bool careRootOffset; // @synthesize careRootOffset=_careRootOffset;
@property(retain, nonatomic) CKWidgetManager *widgetManager; // @synthesize widgetManager=_widgetManager;
@property(retain, nonatomic) CKHandlerManager *handlerManager; // @synthesize handlerManager=_handlerManager;
@property(copy, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property(copy, nonatomic) NSString *pageInstanceID; // @synthesize pageInstanceID=_pageInstanceID;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)onVSync;
- (void)stopVSync;
- (void)startVSync;
- (void)viewDestroy:(id)arg1;
- (void)viewCreated:(id)arg1;
- (void)callLifecycle:(SEL)arg1 params:(id)arg2;
- (void)viewDidDisappear:(id)arg1;
- (void)viewWillDisappear:(id)arg1;
- (void)viewDidAppear:(id)arg1;
- (void)viewWillAppear:(id)arg1;
- (void)updateSafeAreaInset:(struct UIEdgeInsets)arg1;
- (void)updateFrame:(struct CGRect)arg1;
- (id)appInstanceID;
- (void)sendNativeEvent:(id)arg1 params:(id)arg2;
- (void)removeSubWidget:(id)arg1;
- (void)addSubWidget:(id)arg1;
- (void)setPlaceHoder:(id)arg1;
- (void)showPlaceHoder:(_Bool)arg1;
- (void)onPreUpdateUI;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)addSubview:(id)arg1;
- (id)getBindFalconInstance;
-     // Error parsing type: v24@0:8^{CKScene=^^?{atomic<int>=Ai}i{ACKString=ii^v{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}}{ACKString=ii^v{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}}{ACKString=ii^v{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}}^{ICKBridgeManager}{CKStyleRect={CKStylePoint=dd}{CKStyleSize=dd}}i^{CKLayoutTree}^{CKRenderTree}^{CKAnimationControl}i^{CKWhiteScreenException}^{CKRenderProfiling}^{CKLogicTrace}}16, name: renderTemplate:
- (void)loadAppPage:(id)arg1 option:(id)arg2 cubeApp:(void *)arg3;
- (void)dealloc;
- (id)initWithContainerID:(id)arg1 appID:(id)arg2 engine:(id)arg3 option:(id)arg4;
- (unsigned long long)falconGetEnvHash;
- (unsigned long long)falconGetDataHash;
- (void)falconSetEnvHash:(unsigned long long)arg1;
- (void)falconSetDataHash:(unsigned long long)arg1;
- (id)falconGetInstance;
- (void)falconSetInstance:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
