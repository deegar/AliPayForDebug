//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APChatFileTool : NSObject
{
}

+ (id)fullPathForLocalFile:(id)arg1;
+ (id)md5ForKey:(id)arg1;
+ (id)getMaxIntNameInFolder:(id)arg1;
+ (_Bool)deleteFileWithPath:(id)arg1;
+ (id)chatDirWithUID:(id)arg1 userDir:(id)arg2 folder:(id)arg3;
+ (id)documentDirectory;
+ (_Bool)createDirectoryAtPathIfNotExists:(id)arg1;
+ (id)currentUserId;

@end

