//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKImageHandler-Protocol.h"

@class NSString;

@interface CardSDKImageDelegate : NSObject <CKImageHandler>
{
}

- (void)cancel:(id)arg1;
- (id)fetchImage:(id)arg1 size:(struct CGSize)arg2 option:(id)arg3 callback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

