//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface AIXCandidateItem : NSObject
{
    NSString *_itemId;
    NSDictionary *_itemFeatures;
    double _customScore;
    NSDictionary *_extra;
}

+ (id)createWithItemId:(id)arg1 features:(id)arg2 customScore:(double)arg3;
@property(retain, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(nonatomic) double customScore; // @synthesize customScore=_customScore;
@property(retain, nonatomic) NSDictionary *itemFeatures; // @synthesize itemFeatures=_itemFeatures;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)description;

@end

