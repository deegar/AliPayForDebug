//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface APGGroupConfig : NSObject
{
    NSString *_indexName;
    NSString *_groupName;
    NSString *_groupKey;
    NSArray *_launchSources;
    NSNumber *_order;
    NSString *_searchEngine;
    NSString *_templateId;
    long long _displayCount;
    NSString *_highlightField;
    NSDictionary *_context;
}

+ (id)readAllConfigs;
+ (id)pathForConfig;
@property(retain, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *highlightField; // @synthesize highlightField=_highlightField;
@property(nonatomic) long long displayCount; // @synthesize displayCount=_displayCount;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(copy, nonatomic) NSString *searchEngine; // @synthesize searchEngine=_searchEngine;
@property(retain, nonatomic) NSNumber *order; // @synthesize order=_order;
@property(copy, nonatomic) NSArray *launchSources; // @synthesize launchSources=_launchSources;
@property(copy, nonatomic) NSString *groupKey; // @synthesize groupKey=_groupKey;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *indexName; // @synthesize indexName=_indexName;
- (void).cxx_destruct;
- (void)addContextValue:(id)arg1 key:(id)arg2;

@end

