//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface kbscprodAddressFilterPage : NSObject
{
    NSDictionary *_expandInfo;
    NSDictionary *_templates;
    NSArray *_blocks;
    NSString *_pageType;
}

+ (Class)blocksElementClass;
+ (Class)templatesElementClass;
+ (Class)expandInfoElementClass;
@property(retain, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(retain, nonatomic) NSArray *blocks; // @synthesize blocks=_blocks;
@property(retain, nonatomic) NSDictionary *templates; // @synthesize templates=_templates;
@property(retain, nonatomic) NSDictionary *expandInfo; // @synthesize expandInfo=_expandInfo;
- (void).cxx_destruct;

@end

