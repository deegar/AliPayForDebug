//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GIFTPRODToString.h"

@class NSDictionary, NSString;

@interface GIFTPRODShareInfoRequest : GIFTPRODToString
{
    NSString *_crowdNo;
    NSString *_nodeId;
    NSString *_prodCode;
    NSString *_queryType;
    NSString *_shortCode;
    NSDictionary *_extInfo;
}

@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *shortCode; // @synthesize shortCode=_shortCode;
@property(retain, nonatomic) NSString *queryType; // @synthesize queryType=_queryType;
@property(retain, nonatomic) NSString *prodCode; // @synthesize prodCode=_prodCode;
@property(retain, nonatomic) NSString *nodeId; // @synthesize nodeId=_nodeId;
@property(retain, nonatomic) NSString *crowdNo; // @synthesize crowdNo=_crowdNo;
- (void).cxx_destruct;

@end

