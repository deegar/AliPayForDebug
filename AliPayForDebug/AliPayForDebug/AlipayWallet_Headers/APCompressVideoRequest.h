//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APiCloudRequest.h"

@interface APCompressVideoRequest : APiCloudRequest
{
    CDUnknownBlockType _compressHandler;
    CDUnknownBlockType _progressHandler;
    double _startPoint;
    double _endPoint;
    unsigned long long _compressLevel;
}

@property(nonatomic) unsigned long long compressLevel; // @synthesize compressLevel=_compressLevel;
@property(nonatomic) double endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) double startPoint; // @synthesize startPoint=_startPoint;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(copy, nonatomic) CDUnknownBlockType compressHandler; // @synthesize compressHandler=_compressHandler;
- (void).cxx_destruct;
- (id)init;

@end

