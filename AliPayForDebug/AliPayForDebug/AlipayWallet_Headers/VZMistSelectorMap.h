//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface VZMistSelectorMap : NSObject
{
    NSDictionary *_map;
    NSMutableDictionary *_buildingMap;
}

- (void).cxx_destruct;
- (id)nodesForSelector:(id)arg1;
- (void)addNode:(id)arg1 forSelector:(id)arg2;
- (void)endBuild;
- (void)startBuild:(id)arg1;

@end

