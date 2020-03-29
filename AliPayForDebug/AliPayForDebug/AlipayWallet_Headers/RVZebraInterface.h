//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RVZebraDataSource-Protocol.h"
#import "RVZebraParserDelegate-Protocol.h"
#import "RVZebraViewDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSString, RVZebraInterfaceModel, RVZebraView;
@protocol RVZebraDataSource;

@interface RVZebraInterface : NSObject <RVZebraParserDelegate, RVZebraViewDelegate, RVZebraDataSource>
{
    _Bool _hasRequestError;
    NSString *_appId;
    RVZebraInterfaceModel *_data;
    RVZebraView *_RVZebraView;
    NSMutableArray *_holdArray;
    id <RVZebraDataSource> _dataSource;
    CDUnknownBlockType _viewDidLoadBlock;
    NSDate *_parseStartDate;
    NSDate *_requestStartDate;
}

@property(nonatomic) _Bool hasRequestError; // @synthesize hasRequestError=_hasRequestError;
@property(retain, nonatomic) NSDate *requestStartDate; // @synthesize requestStartDate=_requestStartDate;
@property(retain, nonatomic) NSDate *parseStartDate; // @synthesize parseStartDate=_parseStartDate;
@property(copy, nonatomic) CDUnknownBlockType viewDidLoadBlock; // @synthesize viewDidLoadBlock=_viewDidLoadBlock;
@property(nonatomic) __weak id <RVZebraDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableArray *holdArray; // @synthesize holdArray=_holdArray;
@property(retain, nonatomic) RVZebraView *RVZebraView; // @synthesize RVZebraView=_RVZebraView;
@property(retain, nonatomic) RVZebraInterfaceModel *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)callbackWithErrorCode:(long long)arg1;
- (void)logCostWithStart:(id)arg1 type:(int)arg2;
- (void)dealloc;
- (void)zebraImageResourceOfUrl:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)zebraResourceOfUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)RVZebraViewLoading:(id)arg1;
- (void)RVZebraViewDidLoad:(id)arg1;
- (void)parserDidEnd:(id)arg1 result:(id)arg2;
- (void)getDSLViewWithLayoutString:(id)arg1 replaceConfig:(id)arg2;
- (void)handleDSLWithData:(id)arg1;
- (void)runWithConfig:(id)arg1 dataSource:(id)arg2 viewDidLoad:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

