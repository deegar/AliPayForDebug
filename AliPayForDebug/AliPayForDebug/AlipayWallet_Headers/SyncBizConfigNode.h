//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SyncBizConfigNode : NSObject
{
    _Bool _upSkey;
    _Bool _persistence;
    _Bool _isBucket;
    int _bizEnum;
    NSString *_biz;
    long long _type;
}

@property(nonatomic) _Bool isBucket; // @synthesize isBucket=_isBucket;
@property(nonatomic) _Bool persistence; // @synthesize persistence=_persistence;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool upSkey; // @synthesize upSkey=_upSkey;
@property(nonatomic) int bizEnum; // @synthesize bizEnum=_bizEnum;
@property(retain, nonatomic) NSString *biz; // @synthesize biz=_biz;
- (void).cxx_destruct;
- (id)description;

@end

