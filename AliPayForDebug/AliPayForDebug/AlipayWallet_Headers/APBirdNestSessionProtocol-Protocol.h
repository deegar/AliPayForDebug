//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APBirdNestPageOptions, APBirdNestSession;

@protocol APBirdNestSessionProtocol <NSObject>
@property(retain, nonatomic) APBirdNestPageOptions *options;
@property(retain, nonatomic) APBirdNestSession *session;
- (void)refreshWithOptions:(APBirdNestPageOptions *)arg1;
- (id)initWithOptions:(APBirdNestPageOptions *)arg1 session:(APBirdNestSession *)arg2;
@end

