//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface YTEnginePlayerQualityVideoItem : NSObject
{
    _Bool _rtmpe;
    _Bool _audio;
    NSString *_quality;
    long long _totalSize;
    long long _totalHeadSeconds;
    long long _totalTailSeconds;
    NSMutableArray *_videoItem;
    NSMutableArray *_audioItem;
    NSMutableArray *_airplayItem;
}

@property(retain, nonatomic) NSMutableArray *airplayItem; // @synthesize airplayItem=_airplayItem;
@property(retain, nonatomic) NSMutableArray *audioItem; // @synthesize audioItem=_audioItem;
@property(retain, nonatomic) NSMutableArray *videoItem; // @synthesize videoItem=_videoItem;
@property(nonatomic) long long totalTailSeconds; // @synthesize totalTailSeconds=_totalTailSeconds;
@property(nonatomic) long long totalHeadSeconds; // @synthesize totalHeadSeconds=_totalHeadSeconds;
@property(nonatomic) long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) _Bool audio; // @synthesize audio=_audio;
@property(nonatomic) _Bool rtmpe; // @synthesize rtmpe=_rtmpe;
@property(copy, nonatomic) NSString *quality; // @synthesize quality=_quality;
- (void).cxx_destruct;

@end

