//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FHLogModel : NSObject
{
    NSString *_exposureSPMId;
    NSString *_clickSPMId;
    NSString *_uniqSPMId;
    NSString *_chinfo;
    NSString *_scm;
    NSDictionary *_logDict;
}

@property(copy, nonatomic) NSDictionary *logDict; // @synthesize logDict=_logDict;
@property(copy, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(copy, nonatomic) NSString *chinfo; // @synthesize chinfo=_chinfo;
@property(copy, nonatomic) NSString *uniqSPMId; // @synthesize uniqSPMId=_uniqSPMId;
@property(copy, nonatomic) NSString *clickSPMId; // @synthesize clickSPMId=_clickSPMId;
@property(copy, nonatomic) NSString *exposureSPMId; // @synthesize exposureSPMId=_exposureSPMId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)appendingDefualtValueForLogDict:(id)arg1;
- (id)appendingValueForLogDict:(id)arg1;
- (id)initWithCard:(id)arg1 spmId:(id)arg2 dSpmId:(id)arg3 obId:(id)arg4 obType:(id)arg5 obFloor:(id)arg6 fagId:(id)arg7 newChinfo:(id)arg8 entityId:(id)arg9;
- (id)initWithCard:(id)arg1 spmId:(id)arg2 dSpmId:(id)arg3;

@end
