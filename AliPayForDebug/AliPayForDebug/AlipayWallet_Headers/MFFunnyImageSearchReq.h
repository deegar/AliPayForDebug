//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MFFunnyImageSearchReq : NSObject
{
    int _pageIndex;
    int _pageSize;
    NSString *_query;
    NSString *_seed;
    NSString *_isvId;
}

@property(retain, nonatomic) NSString *isvId; // @synthesize isvId=_isvId;
@property(retain, nonatomic) NSString *seed; // @synthesize seed=_seed;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;

@end

