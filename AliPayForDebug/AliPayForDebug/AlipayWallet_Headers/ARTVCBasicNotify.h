//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ARTVCBasicNotify : NSObject
{
    int _opcmd;
    long long _requestId;
    NSString *_roomId;
}

@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) long long requestId; // @synthesize requestId=_requestId;
@property(nonatomic) int opcmd; // @synthesize opcmd=_opcmd;
- (void).cxx_destruct;
- (id)initWithJsonDictionary:(id)arg1;

@end
