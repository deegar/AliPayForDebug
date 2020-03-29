//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MBListCellModel : NSObject
{
    _Bool _canSelected;
    NSString *_cellId;
    NSString *_templateId;
    NSMutableDictionary *_templateData;
    NSArray *_editTypes;
    NSString *_cellMonitorScm;
    NSDictionary *_cellMonitorParams;
    NSMutableDictionary *_userInfo;
}

@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDictionary *cellMonitorParams; // @synthesize cellMonitorParams=_cellMonitorParams;
@property(retain, nonatomic) NSString *cellMonitorScm; // @synthesize cellMonitorScm=_cellMonitorScm;
@property(retain, nonatomic) NSArray *editTypes; // @synthesize editTypes=_editTypes;
@property(nonatomic) _Bool canSelected; // @synthesize canSelected=_canSelected;
@property(retain, nonatomic) NSMutableDictionary *templateData; // @synthesize templateData=_templateData;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSString *cellId; // @synthesize cellId=_cellId;
- (void).cxx_destruct;
- (id)description;

@end

