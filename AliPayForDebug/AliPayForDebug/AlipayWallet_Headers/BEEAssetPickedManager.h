//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface BEEAssetPickedManager : NSObject
{
    _Bool _pickedOriginImage;
    unsigned long long _maxCountOfPickImage;
    unsigned long long _maxCountOfPickVideo;
    NSMutableArray *_quickPickedKeys;
    NSMutableArray *_gridPickedKeys;
}

@property(retain, nonatomic) NSMutableArray *gridPickedKeys; // @synthesize gridPickedKeys=_gridPickedKeys;
@property(retain, nonatomic) NSMutableArray *quickPickedKeys; // @synthesize quickPickedKeys=_quickPickedKeys;
@property(nonatomic) unsigned long long maxCountOfPickVideo; // @synthesize maxCountOfPickVideo=_maxCountOfPickVideo;
@property(nonatomic) unsigned long long maxCountOfPickImage; // @synthesize maxCountOfPickImage=_maxCountOfPickImage;
@property(nonatomic) _Bool pickedOriginImage; // @synthesize pickedOriginImage=_pickedOriginImage;
- (void).cxx_destruct;
- (id)assetDict;
- (void)resetPickedManager;
- (void)updatePickedAssetAfterLibraryNotification;
- (_Bool)videoIsPickedWithIsQuickPick:(_Bool)arg1;
- (id)alertTextForConflict:(unsigned long long)arg1;
- (void)showPickAssetConflictAlertViewWithType:(unsigned long long)arg1 andAlertFinishedBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldPreviewAssetWithKey:(id)arg1;
- (unsigned long long)shouldPickKey:(id)arg1 isQuickPick:(_Bool)arg2;
- (void)preloadAssetSize:(id)arg1;
- (void)setAssetWithKey:(id)arg1 picked:(_Bool)arg2 isQuickPick:(_Bool)arg3;
- (_Bool)assetIsPickedWithKey:(id)arg1 isQuickPick:(_Bool)arg2;
- (id)allPickedAssetWithIsQuickPick:(_Bool)arg1;
- (id)init;

@end

