//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIImageViewAligned.h"

#import "VZFNetworkImageDownloadProtocol-Protocol.h"

@class NSString;

@interface ALPMistImageView : UIImageViewAligned <VZFNetworkImageDownloadProtocol>
{
}

- (id)grayImage:(id)arg1 transparent:(_Bool)arg2;
- (void)vz_setImageWithURL:(id)arg1 size:(struct CGSize)arg2 placeholderImage:(id)arg3 errorImage:(id)arg4 context:(id)arg5 completionBlock:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

