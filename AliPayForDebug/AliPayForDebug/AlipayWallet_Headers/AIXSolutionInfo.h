//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AIXSolutionInfo : NSObject
{
    NSString *_version;
    long long _strategy;
    NSDictionary *_user;
    NSDictionary *_item;
}

@property(retain, nonatomic) NSDictionary *item; // @synthesize item=_item;
@property(retain, nonatomic) NSDictionary *user; // @synthesize user=_user;
@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (_Bool)isValid;

@end

