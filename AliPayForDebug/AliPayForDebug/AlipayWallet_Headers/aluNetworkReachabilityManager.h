//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface aluNetworkReachabilityManager : NSObject
{
    NSMutableArray *_arrayBlocks;
}

+ (void)addReachableAction:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *arrayBlocks; // @synthesize arrayBlocks=_arrayBlocks;
- (void).cxx_destruct;
- (void)netChangeReachable;
- (id)init;

@end

