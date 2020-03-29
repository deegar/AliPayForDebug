//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface Ahp3DecoderImp : NSObject
{
    int init;
    struct Ahp3Decoder *instance;
    long long _width;
    long long _height;
    long long _frame_count;
    long long _loop_count;
    NSMutableDictionary *_delayTimeDictionary;
}

@property(readonly, nonatomic) NSMutableDictionary *delayTimeDictionary; // @synthesize delayTimeDictionary=_delayTimeDictionary;
@property(nonatomic) long long loop_count; // @synthesize loop_count=_loop_count;
@property(nonatomic) long long frame_count; // @synthesize frame_count=_frame_count;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
- (void).cxx_destruct;
- (id)imageWithRGBAData:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (struct Ahp3Decoder *)getInstance;
- (int)reset;
@property(readonly, nonatomic) int currentIndex;
- (char *)decodeToYUV420P:(int *)arg1;
- (int)decodeFromIndex:(id *)arg1 index:(int)arg2 delay:(unsigned long long *)arg3;
- (int)decode:(id *)arg1 loop:(int)arg2 delay:(int *)arg3;
- (void)dealloc;
- (int)init:(id)arg1 loopCount:(int)arg2;

@end

