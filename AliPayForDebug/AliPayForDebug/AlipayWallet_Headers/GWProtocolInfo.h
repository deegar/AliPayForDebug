//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GWProtocolInfo : NSObject
{
    NSString *_formProtocolFormat;
    NSString *_formToastMessage;
    NSString *_openProtocolFormat;
    NSString *_openToastMessage;
    NSString *_message;
}

@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *openToastMessage; // @synthesize openToastMessage=_openToastMessage;
@property(copy, nonatomic) NSString *openProtocolFormat; // @synthesize openProtocolFormat=_openProtocolFormat;
@property(copy, nonatomic) NSString *formToastMessage; // @synthesize formToastMessage=_formToastMessage;
@property(copy, nonatomic) NSString *formProtocolFormat; // @synthesize formProtocolFormat=_formProtocolFormat;
- (void).cxx_destruct;

@end

