//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, RVKScene;

@interface RVPSceneCreateResult : NSObject
{
    _Bool _transparent;
    _Bool _isNormalPush;
    _Bool _isHit;
    _Bool _stopAndRunInDelayBlock;
    RVKScene *_sceneCreated;
    NSMutableArray *_viewControllers;
    NSDictionary *_errorInfo;
}

@property(nonatomic) _Bool stopAndRunInDelayBlock; // @synthesize stopAndRunInDelayBlock=_stopAndRunInDelayBlock;
@property(retain, nonatomic) NSDictionary *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(retain, nonatomic) NSMutableArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) _Bool isHit; // @synthesize isHit=_isHit;
@property(nonatomic) _Bool isNormalPush; // @synthesize isNormalPush=_isNormalPush;
@property(nonatomic) _Bool transparent; // @synthesize transparent=_transparent;
@property(retain, nonatomic) RVKScene *sceneCreated; // @synthesize sceneCreated=_sceneCreated;
- (void).cxx_destruct;
- (id)init;

@end

