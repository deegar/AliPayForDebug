//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APBResourceModel : NSObject
{
    NSString *_fileId;
    NSString *_savedFolder;
    NSString *_fileName;
    NSString *_hashName;
}

@property(retain, nonatomic) NSString *hashName; // @synthesize hashName=_hashName;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *savedFolder; // @synthesize savedFolder=_savedFolder;
@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
- (void).cxx_destruct;
- (id)initWithFileId:(id)arg1 saveFolder:(id)arg2 fileName:(id)arg3 hashName:(id)arg4;

@end

