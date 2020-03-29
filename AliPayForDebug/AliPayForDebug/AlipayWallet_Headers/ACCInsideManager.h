//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ACCInsideManager : NSObject
{
    _Bool _isFromInside;
    NSString *_notificationName;
    NSString *_cardType;
}

+ (id)sharedManager;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(nonatomic) _Bool isFromInside; // @synthesize isFromInside=_isFromInside;
- (void).cxx_destruct;
- (void)reset;
- (void)showInsidePopWithClass:(Class)arg1;
- (_Bool)canShowInsidePopWithCardType:(id)arg1;
- (void)setupWithOptions:(id)arg1;

@end

