//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ALTTemplate : NSObject
{
    NSString *_templateName;
    NSString *_displayName;
    NSString *_type;
    id _ext;
}

@property(retain, nonatomic) id ext; // @synthesize ext=_ext;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
- (void).cxx_destruct;
- (id)description;

@end

