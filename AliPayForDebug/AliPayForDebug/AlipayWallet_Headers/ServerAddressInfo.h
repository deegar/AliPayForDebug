//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ServerAddressInfo : NSObject
{
    NSString *_ip;
    long long _port;
}

@property(nonatomic) long long port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (void).cxx_destruct;

@end

