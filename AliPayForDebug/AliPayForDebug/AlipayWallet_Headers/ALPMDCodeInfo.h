//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ALPMDCodeInfo : NSObject
{
    NSString *_code;
    NSString *_status;
    NSString *_statusView;
    double _interval;
}

@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) NSString *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)description;

@end

