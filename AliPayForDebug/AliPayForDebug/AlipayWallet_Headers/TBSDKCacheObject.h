//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface TBSDKCacheObject : NSObject <NSCoding>
{
    _Bool _offline;
    int _maxAge;
    int _responseStatusCode;
    NSString *_version;
    NSString *_lastModified;
    NSString *_eTag;
    NSString *_header;
    NSString *_body;
    NSString *_mtopXEtag;
}

@property(retain, nonatomic) NSString *mtopXEtag; // @synthesize mtopXEtag=_mtopXEtag;
@property(nonatomic) int responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *header; // @synthesize header=_header;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic) int maxAge; // @synthesize maxAge=_maxAge;
@property(retain, nonatomic) NSString *eTag; // @synthesize eTag=_eTag;
@property(retain, nonatomic) NSString *lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (_Bool)isExpired;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

