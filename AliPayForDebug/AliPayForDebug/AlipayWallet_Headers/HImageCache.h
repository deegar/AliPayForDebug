//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface HImageCache : NSObject
{
    NSMutableDictionary *_imageDic;
}

+ (id)existInDisk:(id)arg1;
+ (id)imageForFilePath:(id)arg1;
+ (id)sharInstance;
@property(retain, nonatomic) NSMutableDictionary *imageDic; // @synthesize imageDic=_imageDic;
- (void).cxx_destruct;
- (void)receiveMemoryWarningNotify:(id)arg1;
- (void)setImage:(id)arg1 url:(id)arg2 quickShow:(_Bool)arg3;
- (id)imageForUrl:(id)arg1 quickShow:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

