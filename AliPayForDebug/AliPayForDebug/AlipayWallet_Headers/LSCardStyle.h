//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LSCardStyle : NSObject
{
    _Bool _sticky;
    _Bool _scrollEnable;
    _Bool _bizEmpty;
    int _showSize;
    double _topMargin;
    double _bottomMargin;
}

@property(nonatomic) _Bool bizEmpty; // @synthesize bizEmpty=_bizEmpty;
@property(nonatomic) _Bool scrollEnable; // @synthesize scrollEnable=_scrollEnable;
@property(nonatomic) _Bool sticky; // @synthesize sticky=_sticky;
@property(nonatomic) int showSize; // @synthesize showSize=_showSize;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
- (id)initWithData:(id)arg1;

@end

