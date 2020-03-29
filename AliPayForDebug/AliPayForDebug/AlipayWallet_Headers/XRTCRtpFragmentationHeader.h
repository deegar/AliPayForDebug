//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface XRTCRtpFragmentationHeader : NSObject
{
    NSArray *_fragmentationOffset;
    NSArray *_fragmentationLength;
    NSArray *_fragmentationTimeDiff;
    NSArray *_fragmentationPlType;
}

@property(retain, nonatomic) NSArray *fragmentationPlType; // @synthesize fragmentationPlType=_fragmentationPlType;
@property(retain, nonatomic) NSArray *fragmentationTimeDiff; // @synthesize fragmentationTimeDiff=_fragmentationTimeDiff;
@property(retain, nonatomic) NSArray *fragmentationLength; // @synthesize fragmentationLength=_fragmentationLength;
@property(retain, nonatomic) NSArray *fragmentationOffset; // @synthesize fragmentationOffset=_fragmentationOffset;
- (void).cxx_destruct;
- (unique_ptr_d59eb9dc)createNativeFragmentationHeader;
- (id)initWithNativeFragmentationHeader:(const struct RTPFragmentationHeader *)arg1;

@end

