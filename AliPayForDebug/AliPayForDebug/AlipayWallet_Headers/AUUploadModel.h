//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface AUUploadModel : NSObject <NSCoding>
{
    int _type;
    double _timestamp;
    NSString *_audid;
    NSString *_utdid;
    NSString *_appkey;
    NSString *_appName;
    NSDictionary *_fpInfo;
    AUUploadModel *_targetModel;
}

+ (id)modelOfRSTypeWithTargetUtdid:(id)arg1 targetAudid:(id)arg2 targetAppkey:(id)arg3 targetAppName:(id)arg4;
+ (id)modelOfFPTypeWithFPInfo:(id)arg1;
+ (id)modelOfAudidType;
@property(retain, nonatomic) AUUploadModel *targetModel; // @synthesize targetModel=_targetModel;
@property(copy, nonatomic) NSDictionary *fpInfo; // @synthesize fpInfo=_fpInfo;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(copy, nonatomic) NSString *audid; // @synthesize audid=_audid;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)md5Value;
- (id)dictValue;
- (_Bool)checkValid;
- (void)basicInit;
- (id)initRSTypeWithTargetInfoDict:(id)arg1;
- (id)initAudidType;
- (id)initFPTypeWithFPInfo:(id)arg1;

@end

