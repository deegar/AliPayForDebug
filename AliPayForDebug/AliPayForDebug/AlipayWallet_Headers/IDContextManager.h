//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDContextManager : NSObject
{
    NSMutableDictionary *_contextsDict;
}

+ (id)defaultManager;
@property(retain, nonatomic) NSMutableDictionary *contextsDict; // @synthesize contextsDict=_contextsDict;
- (void).cxx_destruct;
- (id)generateDefaultContextWithId:(id)arg1;
- (void)removeContextById:(id)arg1;
- (id)contextWithId:(id)arg1;
- (id)init;

@end

