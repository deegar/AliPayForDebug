//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APEmotionManager : NSObject
{
}

+ (struct CGSize)sizeWithEmotion:(id)arg1;
+ (id)emotionPreview:(id)arg1;
+ (void)downloadDefaultPackage;
+ (void)collectFavoriteEmotion:(id)arg1 emotionFid:(id)arg2 hasGif:(_Bool)arg3;
+ (_Bool)isCollectableEmotion:(id)arg1 packageId:(id)arg2;
+ (_Bool)isFavoriteEmotion:(id)arg1;
+ (_Bool)isLocalGifPackage:(id)arg1;
+ (_Bool)isFavoritePackage:(id)arg1;
+ (_Bool)isBasePackage:(id)arg1;
+ (_Bool)isLocalEmotion:(id)arg1 packageId:(id)arg2;
+ (_Bool)isLocalPackage:(id)arg1;
+ (double)emotionBoardHeight;

@end

