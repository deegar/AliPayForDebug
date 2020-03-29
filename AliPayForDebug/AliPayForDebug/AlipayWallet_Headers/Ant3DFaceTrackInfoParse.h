//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol Ant3DFaceTrackInfoParseDelegate;

@interface Ant3DFaceTrackInfoParse : NSObject
{
    unsigned long long _faceCount;
    unsigned long long _trackedCount;
    NSMutableDictionary *_faceNodeMap;
    NSMutableDictionary *_faceInfoDic;
    id <Ant3DFaceTrackInfoParseDelegate> _delegate;
}

@property(nonatomic) __weak id <Ant3DFaceTrackInfoParseDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)process:(unsigned long long)arg1 poses:(id)arg2 needMirror:(_Bool)arg3;
- (void)updateFaceInfos:(id)arg1 needMirror:(_Bool)arg2;
- (id)init;

@end

