//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPassDetailBaseData.h"

#import "UIActionSheetDelegate-Protocol.h"

@class NSString;

@interface APPassDetailTelephone : APPassDetailBaseData <UIActionSheetDelegate>
{
    NSString *_cellActionInfoTelNum;
}

@property(copy, nonatomic) NSString *cellActionInfoTelNum; // @synthesize cellActionInfoTelNum=_cellActionInfoTelNum;
- (void).cxx_destruct;
- (void)callWithTel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

