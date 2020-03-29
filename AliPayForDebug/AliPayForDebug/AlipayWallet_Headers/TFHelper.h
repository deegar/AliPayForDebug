//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TFHelper : NSObject
{
}

+ (_Bool)enableKeyboardAUV2;
+ (id)transferToAccountPageMemoPlaceholder;
+ (_Bool)enableShowToAccountAmountUnit;
+ (_Bool)enableGoToNewCreateToAccount;
+ (_Bool)enableAccountInputShowBatchTransfer;
+ (id)genHomeAssistantCardReuseIdentifier:(id)arg1;
+ (_Bool)homeCardSDKEnable;
+ (long long)getHomeRecentListMaxCount;
+ (_Bool)homeHeaderNewStyleEnable;
+ (id)getHomeHeaderConfig;
+ (id)getHomeHeaderIconsConfig;
+ (_Bool)homeCBRemittanceAvailable;
+ (_Bool)homeFundAssistantCardLottieAvailable;
+ (_Bool)enableShowFundAssistant;
+ (_Bool)enableGetRecommendFriends;
+ (id)transferToCardRemark;
+ (id)transferToAccountRemark;
+ (id)transferCardRouteUrl;
+ (id)unifyMoneyString:(id)arg1;
+ (void)discoveryLogWithSeed:(id)arg1 success:(_Bool)arg2 response:(id)arg3 responseCode:(id)arg4;
+ (id)token;
+ (id)since1970TimeString;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2 forWidth:(double)arg3;
+ (struct CGSize)sizeForString:(id)arg1 font:(id)arg2;
+ (void)addTFMonitorPointWithActionId:(id)arg1 lastView:(id)arg2 actionSeed:(id)arg3 currentView:(id)arg4 extArg1:(id)arg5 promotionalChannel:(id)arg6;
+ (id)getAppWithDelegate:(id)arg1;
+ (void)showToastView:(id)arg1 inView:(id)arg2;
+ (id)showAlert:(id)arg1;
+ (id)currentUserID;
+ (id)fomatBankCard:(id)arg1;
+ (id)formatedMoney:(id)arg1;
+ (_Bool)isIPad;
+ (id)bankIconWithMark:(id)arg1;
+ (id)tfNewTransferImageWithNamed:(id)arg1;
+ (id)tfBizImageWithNamed:(id)arg1;
+ (id)supportedColorString:(id)arg1;
+ (id)colorWithRGBAString:(id)arg1;
+ (id)colorFromHexRGB:(id)arg1;
+ (id)colorWithRGBString:(id)arg1;
+ (_Bool)isNumberOrDecimalWithString:(id)arg1;
+ (_Bool)isEmptyString:(id)arg1;
+ (double)getRandomNumber;
+ (id)numberStringTrimingBy:(id)arg1;
+ (id)string:(id)arg1 withMaxLen:(unsigned long long)arg2;
+ (id)hasErrorInRpcResponse:(id)arg1 rpcException:(id)arg2;
+ (void)removeContentInsetAdjustmentBehavior:(id)arg1;
+ (void)gotoTransferReminderAddWithUserId:(id)arg1;
+ (id)transferReminderAddUrl;

@end

