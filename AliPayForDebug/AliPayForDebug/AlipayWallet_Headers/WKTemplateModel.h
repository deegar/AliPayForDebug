//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WKTemplateModel : NSObject
{
    NSDictionary *_templateData;
    _Bool _needRes;
    NSString *_tplId;
    NSString *_time;
    NSString *_tag;
    NSString *_data;
    NSString *_version;
    NSString *_tplVersion;
    NSString *_uid;
    NSString *_rollBack;
    NSString *_tplUrl;
    NSString *_tplHash;
    NSDictionary *_resInfo;
    NSDictionary *_extInfo;
}

@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSDictionary *resInfo; // @synthesize resInfo=_resInfo;
@property(nonatomic) _Bool needRes; // @synthesize needRes=_needRes;
@property(retain, nonatomic) NSString *tplHash; // @synthesize tplHash=_tplHash;
@property(retain, nonatomic) NSString *tplUrl; // @synthesize tplUrl=_tplUrl;
@property(retain, nonatomic) NSString *rollBack; // @synthesize rollBack=_rollBack;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *tplVersion; // @synthesize tplVersion=_tplVersion;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *tplId; // @synthesize tplId=_tplId;
- (void).cxx_destruct;
- (id)description;

@end

