//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol RVDDebugProtocol, RVDDebugStorageProtocol, RVDDebugUIProtocol;

@interface RVDDebugConfigration : NSObject
{
    id <RVDDebugProtocol> _debugDelegate;
    id <RVDDebugStorageProtocol> _storageDelegate;
    id <RVDDebugUIProtocol> _UIDelegate;
}

+ (id)shareInstance;
@property(nonatomic) __weak id <RVDDebugUIProtocol> UIDelegate; // @synthesize UIDelegate=_UIDelegate;
@property(nonatomic) __weak id <RVDDebugStorageProtocol> storageDelegate; // @synthesize storageDelegate=_storageDelegate;
@property(nonatomic) __weak id <RVDDebugProtocol> debugDelegate; // @synthesize debugDelegate=_debugDelegate;
- (void).cxx_destruct;
- (id)init;

@end

