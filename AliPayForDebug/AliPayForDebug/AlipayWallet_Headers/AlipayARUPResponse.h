//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface AlipayARUPResponse : NSObject
{
    NSDictionary *_headers;
    NSDictionary *_returnJson;
}

@property(retain, nonatomic) NSDictionary *returnJson; // @synthesize returnJson=_returnJson;
@property(retain, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
- (void).cxx_destruct;

@end

