//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface APMessagePushAps : NSObject
{
    NSString *_title;
    NSString *_body;
    NSString *_sound;
    NSNumber *_badge;
}

@property(retain, nonatomic) NSNumber *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) NSString *sound; // @synthesize sound=_sound;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

