//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface NetCardInfoProvider : NSObject
{
    NSMutableDictionary *_localAddresses;
    NSMutableDictionary *_netCardV6Only;
    NSString *_defaultNetInterfaceIpV6Address;
    NSString *_defaultNetInterface;
    struct sockaddr_in6 _addressV6Default;
}

+ (id)shareInstance;
@property(nonatomic) struct sockaddr_in6 addressV6Default; // @synthesize addressV6Default=_addressV6Default;
@property(retain) NSString *defaultNetInterface; // @synthesize defaultNetInterface=_defaultNetInterface;
@property(retain) NSString *defaultNetInterfaceIpV6Address; // @synthesize defaultNetInterfaceIpV6Address=_defaultNetInterfaceIpV6Address;
@property(retain) NSMutableDictionary *netCardV6Only; // @synthesize netCardV6Only=_netCardV6Only;
@property(retain) NSMutableDictionary *localAddresses; // @synthesize localAddresses=_localAddresses;
- (void).cxx_destruct;
- (id)getDefaultInterfaceExperience;
- (id)getDefaultInterfaceThroughUdp;
- (_Bool)isInnerAddress:(struct sockaddr_in6 *)arg1;
- (_Bool)defaultNetInterfaceIpV6Only;
- (void)freshLocalAddress;
- (void)FreshNetAddressInfo;
- (void *)getDefaultLocalV6Address;
- (void)dealloc;
- (id)init;

@end

