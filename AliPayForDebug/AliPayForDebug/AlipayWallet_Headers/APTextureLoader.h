//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLDevice;

@interface APTextureLoader : NSObject
{
    id <MTLDevice> _device;
}

@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)loadCGImageRef:(struct CGImage *)arg1;
- (id)loadUIImage:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end

