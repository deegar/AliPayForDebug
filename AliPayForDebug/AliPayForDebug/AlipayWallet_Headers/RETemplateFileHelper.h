//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RETemplateFileHelper : NSObject
{
}

+ (void)addFileToArray:(id)arg1 file:(id)arg2 byDate:(id)arg3;
+ (void)keepTemplatesToLimit;
+ (id)templateRootPath;
+ (void)createRootDirectoryIfNeeded;
+ (id)zipTempRootPath;
+ (id)templatePathByID:(id)arg1;
+ (void)removeTemplateByID:(id)arg1;
+ (id)getDefaultTemplatePath;
+ (_Bool)isTemplateExists:(id)arg1;

@end

