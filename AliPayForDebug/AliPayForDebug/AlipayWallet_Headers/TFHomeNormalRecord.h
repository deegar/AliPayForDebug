//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TFHomeRecord.h"

@class NSString;

@interface TFHomeNormalRecord : TFHomeRecord
{
    int _editType;
    NSString *_redirectUrl;
    NSString *_headImgpath;
    NSString *_rightHeadImgpath;
}

+ (id)recordWithTransferRecordVO:(id)arg1;
@property(nonatomic) int editType; // @synthesize editType=_editType;
@property(retain, nonatomic) NSString *rightHeadImgpath; // @synthesize rightHeadImgpath=_rightHeadImgpath;
@property(retain, nonatomic) NSString *headImgpath; // @synthesize headImgpath=_headImgpath;
@property(retain, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

