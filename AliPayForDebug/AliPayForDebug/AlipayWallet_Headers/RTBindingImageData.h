//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RTBinding.h"

@class RTImageData;

@interface RTBindingImageData : RTBinding
{
    struct OpaqueJSValue *_jsDataArray;
    RTImageData *_imageData;
}

+ (struct OpaqueJSClass *)createJSClassWithPropertyAndFunctions;
@property(readonly, nonatomic) RTImageData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (struct OpaqueJSValue *)prop_get_data:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)prop_get_height:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)prop_get_width:(struct OpaqueJSContext *)arg1;
- (void)dealloc;
- (void)setUpWithObject:(struct OpaqueJSValue *)arg1 runtime:(id)arg2 data:(id)arg3;

@end

