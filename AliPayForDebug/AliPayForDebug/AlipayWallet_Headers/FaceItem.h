//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface FaceItem : NSObject
{
    unsigned long long _faceId;
    NSData *_facePose;
    NSData *_smallFace;
    NSArray *_rotAngle;
    struct CGSize _smallSize;
    struct CGPoint _smallPos;
    struct CGRect _faceRect;
    struct CGRect _faceRectSmall;
}

@property(nonatomic) struct CGPoint smallPos; // @synthesize smallPos=_smallPos;
@property(retain, nonatomic) NSArray *rotAngle; // @synthesize rotAngle=_rotAngle;
@property(nonatomic) struct CGSize smallSize; // @synthesize smallSize=_smallSize;
@property(retain, nonatomic) NSData *smallFace; // @synthesize smallFace=_smallFace;
@property(nonatomic) struct CGRect faceRectSmall; // @synthesize faceRectSmall=_faceRectSmall;
@property(nonatomic) struct CGRect faceRect; // @synthesize faceRect=_faceRect;
@property(retain, nonatomic) NSData *facePose; // @synthesize facePose=_facePose;
@property(nonatomic) unsigned long long faceId; // @synthesize faceId=_faceId;
- (void).cxx_destruct;

@end

