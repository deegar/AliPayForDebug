//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APBirdNestSession, NSMutableDictionary;

@interface APBirdNestAppDataStore : NSObject
{
    NSMutableDictionary *_verifiedFiles;
    APBirdNestSession *_session;
}

@property(nonatomic) __weak APBirdNestSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSMutableDictionary *verifiedFiles; // @synthesize verifiedFiles=_verifiedFiles;
- (void).cxx_destruct;
- (id)getVerifiedFileData:(id)arg1;
- (id)convertFilePath:(id)arg1 basePath:(id)arg2;
- (_Bool)fileExists:(id)arg1;
- (void)readTarData:(id)arg1;
- (id)initWithSession:(id)arg1;

@end

