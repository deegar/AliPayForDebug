//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LATabBadgeRequest, NSDictionary, NSString;

@interface LATabBadgeInfo : NSObject
{
    NSString *_widgetId;
    NSString *_content;
    LATabBadgeRequest *_request;
    NSDictionary *_extInfo;
}

+ (id)laBadgeInfoForBadgeInfo:(id)arg1 tWidgetId:(id)arg2;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) LATabBadgeRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *widgetId; // @synthesize widgetId=_widgetId;
- (void).cxx_destruct;

@end
