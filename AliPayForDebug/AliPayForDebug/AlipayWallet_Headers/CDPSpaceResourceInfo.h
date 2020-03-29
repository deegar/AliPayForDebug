//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CDPSpaceResourceInfo : NSObject
{
    int _picWidth;
    int _picHigh;
    NSString *_systemType;
    NSString *_picUrl;
    NSString *_resourceUrl;
    NSString *_template;
    NSString *_picType;
    long long _spaceObjectId;
    NSString *_type;
    NSString *_md5;
}

@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long spaceObjectId; // @synthesize spaceObjectId=_spaceObjectId;
@property(retain, nonatomic) NSString *picType; // @synthesize picType=_picType;
@property(retain, nonatomic) NSString *template; // @synthesize template=_template;
@property(retain, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(nonatomic) int picHigh; // @synthesize picHigh=_picHigh;
@property(nonatomic) int picWidth; // @synthesize picWidth=_picWidth;
@property(retain, nonatomic) NSString *systemType; // @synthesize systemType=_systemType;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSString *description;

@end

