//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ARGroupDownload : NSObject
{
    NSMutableDictionary *_map;
}

@property(retain, nonatomic) NSMutableDictionary *map; // @synthesize map=_map;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel:(id)arg1;
- (id)download:(id)arg1 progress:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;

@end

