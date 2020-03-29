//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MAAnnotation-Protocol.h"

@class NSString, UIImage;

@interface APShareAnnotation : NSObject <MAAnnotation>
{
    _Bool _isCurrentUser;
    UIImage *_portrait;
    struct CLLocationCoordinate2D _coordinate;
}

@property(retain, nonatomic) UIImage *portrait; // @synthesize portrait=_portrait;
@property(nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (id)initWithLongitude:(double)arg1 latitude:(double)arg2 portrait:(id)arg3;
- (id)initWithCoordinate2D:(struct CLLocationCoordinate2D)arg1 portrait:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end

