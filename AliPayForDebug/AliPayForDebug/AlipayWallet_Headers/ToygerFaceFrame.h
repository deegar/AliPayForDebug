//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ToygerFrame.h"

#import "NSCopying-Protocol.h"

@interface ToygerFaceFrame : ToygerFrame <NSCopying>
{
    _Bool _has_face;
    _Bool _face_in_center;
    _Bool _is_moving;
    _Bool _good_quality;
    _Bool _good_pitch;
    _Bool _good_yaw;
    _Bool _eyeBlink;
    int _brightness;
    int _distance;
    long long _message;
    long long _staticMessage;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool eyeBlink; // @synthesize eyeBlink=_eyeBlink;
@property(nonatomic) _Bool good_yaw; // @synthesize good_yaw=_good_yaw;
@property(nonatomic) _Bool good_pitch; // @synthesize good_pitch=_good_pitch;
@property(nonatomic) _Bool good_quality; // @synthesize good_quality=_good_quality;
@property(nonatomic) _Bool is_moving; // @synthesize is_moving=_is_moving;
@property(nonatomic) _Bool face_in_center; // @synthesize face_in_center=_face_in_center;
@property(nonatomic) int distance; // @synthesize distance=_distance;
@property(nonatomic) int brightness; // @synthesize brightness=_brightness;
@property(nonatomic) _Bool has_face; // @synthesize has_face=_has_face;
@property(nonatomic) long long staticMessage; // @synthesize staticMessage=_staticMessage;
@property(nonatomic) long long message; // @synthesize message=_message;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
