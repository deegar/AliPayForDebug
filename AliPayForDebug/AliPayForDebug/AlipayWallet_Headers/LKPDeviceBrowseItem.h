//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class LKRouterInfo, NSString;

@interface LKPDeviceBrowseItem : TBJSONModel
{
    _Bool _isAlreadyBinded;
    _Bool _blocked;
    _Bool _isTemplateModel;
    NSString *_mac;
    NSString *_model;
    NSString *_sn;
    NSString *_serviceName;
    NSString *_version;
    LKRouterInfo *_routerInfo;
    NSString *_hostName;
    NSString *_tmplateModel;
    NSString *_reuseCellIdentifier;
}

+ (id)buildFromTextData:(id)arg1 service:(id)arg2;
+ (id)buildFromRouterInfo:(id)arg1;
+ (id)deepCopy:(id)arg1;
@property(copy, nonatomic) NSString *reuseCellIdentifier; // @synthesize reuseCellIdentifier=_reuseCellIdentifier;
@property(retain, nonatomic) NSString *tmplateModel; // @synthesize tmplateModel=_tmplateModel;
@property(nonatomic) _Bool isTemplateModel; // @synthesize isTemplateModel=_isTemplateModel;
@property(nonatomic) _Bool blocked; // @synthesize blocked=_blocked;
@property(copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(nonatomic) _Bool isAlreadyBinded; // @synthesize isAlreadyBinded=_isAlreadyBinded;
@property(retain, nonatomic) LKRouterInfo *routerInfo; // @synthesize routerInfo=_routerInfo;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *sn; // @synthesize sn=_sn;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
- (void).cxx_destruct;
- (_Bool)isVersionGreaterOrEqual1_1;

@end
