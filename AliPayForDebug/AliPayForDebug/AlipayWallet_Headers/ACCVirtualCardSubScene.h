//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ACCVirtualCardSubScene : NSObject
{
    NSString *_sceneCode;
    NSString *_subSceneCode;
    NSString *_category;
    NSString *_subCodeName;
    NSDictionary *_extInfo;
}

+ (Class)extInfoElementClass;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *subCodeName; // @synthesize subCodeName=_subCodeName;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *subSceneCode; // @synthesize subSceneCode=_subSceneCode;
@property(retain, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
- (void).cxx_destruct;

@end

