//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber, UIColor;

@interface WPDrawLine : NSObject
{
    NSMutableArray *_linePoints;
    UIColor *_lineColor;
    NSNumber *_lineWidth;
}

@property(retain, nonatomic) NSNumber *lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(retain, nonatomic) NSMutableArray *linePoints; // @synthesize linePoints=_linePoints;
- (void).cxx_destruct;
- (id)init;

@end

