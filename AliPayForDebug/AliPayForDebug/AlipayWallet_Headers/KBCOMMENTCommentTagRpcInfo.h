//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KBCOMMENTCommentTagRpcInfo : NSObject
{
    int _count;
    int _emotion;
    NSString *_tagId;
    NSString *_content;
    NSString *_countStr;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) int emotion; // @synthesize emotion=_emotion;
@property(retain, nonatomic) NSString *countStr; // @synthesize countStr=_countStr;
@property(nonatomic) int count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (void).cxx_destruct;

@end

