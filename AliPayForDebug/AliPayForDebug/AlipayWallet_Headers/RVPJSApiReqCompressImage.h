//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RVKJSApiRequestBase.h"

@class NSArray, NSNumber;

@interface RVPJSApiReqCompressImage : RVKJSApiRequestBase
{
    NSNumber *_compressLevel;
    NSArray *_apFilePaths;
}

@property(copy, nonatomic) NSArray *apFilePaths; // @synthesize apFilePaths=_apFilePaths;
@property(copy, nonatomic) NSNumber *compressLevel; // @synthesize compressLevel=_compressLevel;
- (void).cxx_destruct;

@end

