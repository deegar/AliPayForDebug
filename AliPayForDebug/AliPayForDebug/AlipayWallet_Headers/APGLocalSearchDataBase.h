//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface APGLocalSearchDataBase : NSObject <NSCopying>
{
    NSString *_dataBasePath;
    NSString *_dbName;
}

@property(retain) NSString *dbName; // @synthesize dbName=_dbName;
@property(retain, nonatomic) NSString *dataBasePath; // @synthesize dataBasePath=_dataBasePath;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)tableNamesBySql:(id)arg1;
- (id)initWithDataBasePath:(id)arg1 dataBaseName:(id)arg2;

@end

