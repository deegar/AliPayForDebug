//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SNTemplate : NSObject
{
    NSString *_templateID;
    NSString *_version;
    NSString *_cloudID;
    NSString *_localPath;
    NSDictionary *_data;
}

@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(copy, nonatomic) NSString *cloudID; // @synthesize cloudID=_cloudID;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
- (void).cxx_destruct;
- (id)description;
- (id)debugInfo;

@end

