//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BEECityReqResult : NSObject
{
    _Bool _isSuccess;
    _Bool _isLocal;
    NSString *_memo;
}

@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
- (void).cxx_destruct;
- (id)init;

@end

