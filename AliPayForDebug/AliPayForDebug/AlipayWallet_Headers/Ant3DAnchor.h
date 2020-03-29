//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface Ant3DAnchor : NSObject
{
    _Bool _needDelay;
    _Bool _passthrough;
    NSString *_identifier;
    unsigned long long _cs;
    struct CGPoint _point;
    struct CGSize _dimension;
    struct CGPoint _originalPoint;
    union _GLKMatrix4 _transform;
    union _GLKMatrix4 _originalTransform;
}

@property(nonatomic) _Bool passthrough; // @synthesize passthrough=_passthrough;
@property(nonatomic) struct CGPoint originalPoint; // @synthesize originalPoint=_originalPoint;
@property(nonatomic) union _GLKMatrix4 originalTransform; // @synthesize originalTransform=_originalTransform;
@property(nonatomic) _Bool needDelay; // @synthesize needDelay=_needDelay;
@property(nonatomic) unsigned long long cs; // @synthesize cs=_cs;
@property(nonatomic) struct CGSize dimension; // @synthesize dimension=_dimension;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) union _GLKMatrix4 transform; // @synthesize transform=_transform;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 transform:(union _GLKMatrix4)arg2;

@end
