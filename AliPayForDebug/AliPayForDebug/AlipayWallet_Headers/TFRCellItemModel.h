//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMLBaseModel.h"

@class NSArray, NSDictionary, NSString;

@interface TFRCellItemModel : FMLBaseModel
{
    _Bool _hasRedPoint;
    _Bool _autoRefresh;
    NSString *_cellId;
    NSString *_pid;
    NSString *_scm;
    NSString *_type;
    NSString *_clientResourceID;
    NSDictionary *_requestPara;
    NSString *_name;
    NSArray *_list;
}

@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(nonatomic) _Bool autoRefresh; // @synthesize autoRefresh=_autoRefresh;
@property(nonatomic) _Bool hasRedPoint; // @synthesize hasRedPoint=_hasRedPoint;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSDictionary *requestPara; // @synthesize requestPara=_requestPara;
@property(retain, nonatomic) NSString *clientResourceID; // @synthesize clientResourceID=_clientResourceID;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSString *cellId; // @synthesize cellId=_cellId;
- (void).cxx_destruct;
- (id)initWithfinscbffLegoCellItemModelPB:(id)arg1;
- (id)initWithSECU_LEGO_TEMPLATELegoCellItemModel:(id)arg1;

@end

