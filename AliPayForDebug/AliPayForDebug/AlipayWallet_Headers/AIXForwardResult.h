//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface AIXForwardResult : NSObject
{
    NSString *_candidateId;
    NSArray *_output;
    NSDictionary *_extra;
}

@property(retain, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(retain, nonatomic) NSArray *output; // @synthesize output=_output;
@property(retain, nonatomic) NSString *candidateId; // @synthesize candidateId=_candidateId;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

