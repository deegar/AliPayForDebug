//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MOBILEBILLContactElement : NSObject
{
    NSString *_type;
    NSString *_text;
    NSArray *_behavior;
    NSString *_actionParam;
    NSString *_seedId;
    NSString *_viewId;
}

+ (Class)behaviorElementClass;
@property(retain, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
@property(retain, nonatomic) NSString *seedId; // @synthesize seedId=_seedId;
@property(retain, nonatomic) NSString *actionParam; // @synthesize actionParam=_actionParam;
@property(retain, nonatomic) NSArray *behavior; // @synthesize behavior=_behavior;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
