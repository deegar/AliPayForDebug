//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSAToString.h"

@class DTBoolean, DTInteger, NSObject, NSString;

@interface MOBILECSABlockDetailInfo : MOBILECSAToString
{
    NSString *_id;
    NSString *_blockId;
    NSString *_templateJson;
    NSString *_md5;
    NSString *_degradeInfo;
    NSObject *_data;
    DTInteger *_sortId;
    DTBoolean *_showFlag;
}

@property(retain, nonatomic) DTBoolean *showFlag; // @synthesize showFlag=_showFlag;
@property(retain, nonatomic) DTInteger *sortId; // @synthesize sortId=_sortId;
@property(retain, nonatomic) NSObject *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *degradeInfo; // @synthesize degradeInfo=_degradeInfo;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(retain, nonatomic) NSString *templateJson; // @synthesize templateJson=_templateJson;
@property(retain, nonatomic) NSString *blockId; // @synthesize blockId=_blockId;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

