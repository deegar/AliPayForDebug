//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AntCubeFalconEventLog : NSObject
{
    NSString *_elementId;
    NSString *_elementRef;
    NSString *_eventName;
    NSString *_bindData;
    NSDictionary *_attributes;
    NSDictionary *_elementParams;
    NSDictionary *_extraParamer4;
    NSString *_spmId;
    NSString *_scmId;
    NSString *_xPath;
    NSString *_target;
}

@property(copy, nonatomic) NSString *target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *xPath; // @synthesize xPath=_xPath;
@property(copy, nonatomic) NSString *scmId; // @synthesize scmId=_scmId;
@property(copy, nonatomic) NSString *spmId; // @synthesize spmId=_spmId;
@property(copy, nonatomic) NSDictionary *extraParamer4; // @synthesize extraParamer4=_extraParamer4;
@property(retain, nonatomic) NSDictionary *elementParams; // @synthesize elementParams=_elementParams;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *bindData; // @synthesize bindData=_bindData;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) NSString *elementRef; // @synthesize elementRef=_elementRef;
@property(retain, nonatomic) NSString *elementId; // @synthesize elementId=_elementId;
- (void).cxx_destruct;

@end

