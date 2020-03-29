//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Photos/PHAsset.h>

#import "BEEAssetProtocol-Protocol.h"

@class NSString;

@interface PHAsset (BeeExtension) <BEEAssetProtocol>
+ (_Bool)isInBackgroundActivity;
+ (void)bee_assetForKey:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (int)bee_getAssetVideoWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bee_cancelGetAssetImage:(int)arg1;
- (int)bee_getAssetGifWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 synchronous:(_Bool)arg3;
- (id)bee_syncGetAssetGif;
- (int)bee_getAssetGifWithProgress:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (int)bee_getAssetImageWithSizeType:(unsigned long long)arg1 networkAccessAllowed:(_Bool)arg2 synchronous:(_Bool)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)bee_cleanImage;
- (_Bool)bee_hasAssetImageWithSizeType:(unsigned long long)arg1;
- (id)bee_syncGetAssetImageWithSizeType:(unsigned long long)arg1 networkAccessAllowed:(_Bool)arg2;
- (id)bee_syncGetAssetImageWithSizeType:(unsigned long long)arg1;
- (int)bee_getAssetImageWithSizeType:(unsigned long long)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateAssetPropertyWithInfo:(id)arg1;
- (void)bee_requestAssetLocal;
- (long long)bee_size;
- (_Bool)bee_isGif;
- (_Bool)bee_isAssetInCloud;
- (id)bee_creationDate;
- (double)bee_duration;
- (unsigned long long)bee_mediaType;
- (double)bee_aspectRatio;
- (unsigned long long)bee_pixelWidth;
- (unsigned long long)bee_pixelHeight;
- (id)bee_assetUrl;
- (id)bee_assetKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

