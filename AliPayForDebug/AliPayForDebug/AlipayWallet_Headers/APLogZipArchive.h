//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol APLogZipInterface;

@interface APLogZipArchive : NSObject
{
    id <APLogZipInterface> _logZipObj;
}

- (void).cxx_destruct;
- (_Bool)closeZipFile;
- (_Bool)addFileToZip:(id)arg1 newname:(id)arg2;
- (_Bool)createZipFile:(id)arg1;
- (id)init;

@end

