//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface AFCBizLineModel : NSObject
{
    _Bool _bold;
    int _tag;
    NSMutableArray *_linePointArray;
    NSString *_strokeColor;
    NSString *_fillColor;
}

@property(nonatomic) int tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool bold; // @synthesize bold=_bold;
@property(retain, nonatomic) NSString *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) NSString *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) NSMutableArray *linePointArray; // @synthesize linePointArray=_linePointArray;
- (void).cxx_destruct;

@end

