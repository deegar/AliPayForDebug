//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray;

@interface AUFileCacheModel : NSObject <NSCoding>
{
    NSMutableArray *_rsInfos;
    NSMutableArray *_fpInfos;
    NSMutableArray *_rsReportedInfos;
}

@property(retain, nonatomic) NSMutableArray *rsReportedInfos; // @synthesize rsReportedInfos=_rsReportedInfos;
@property(retain, nonatomic) NSMutableArray *fpInfos; // @synthesize fpInfos=_fpInfos;
@property(retain, nonatomic) NSMutableArray *rsInfos; // @synthesize rsInfos=_rsInfos;
- (void).cxx_destruct;
- (id)infosArrayByType:(int)arg1;
- (void)clearInfosWithType:(int)arg1;
- (void)deleteInfo:(id)arg1 withType:(int)arg2;
- (_Bool)addInfo:(id)arg1 withType:(int)arg2;
- (void)storeInfos;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

