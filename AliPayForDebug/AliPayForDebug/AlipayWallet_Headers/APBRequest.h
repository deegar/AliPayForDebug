//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIViewController;

@interface APBRequest : NSObject
{
    UIViewController *_vc;
    NSString *_protocol;
    NSDictionary *_extInfo;
}

@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(nonatomic) __weak UIViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1 protocolInfo:(id)arg2 extInfo:(id)arg3;

@end

