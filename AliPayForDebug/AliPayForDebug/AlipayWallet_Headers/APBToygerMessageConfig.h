//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APBToygerMessageConfig : NSObject
{
    NSString *_enable;
    NSString *_message;
    long long _returnCode;
}

@property(nonatomic) long long returnCode; // @synthesize returnCode=_returnCode;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *enable; // @synthesize enable=_enable;
- (void).cxx_destruct;

@end

