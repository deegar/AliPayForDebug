//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SWQueryChangeCodeDetailReq : NSObject
{
    NSString *_changeCodeId;
    long long _pageNumber;
    long long _pageSize;
}

@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) NSString *changeCodeId; // @synthesize changeCodeId=_changeCodeId;
- (void).cxx_destruct;

@end

