//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MBMessageInfoDAOProxy;

@interface MBPaymentAssistDBManager : NSObject
{
    id <MBMessageInfoDAOProxy> _daoProxy;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <MBMessageInfoDAOProxy> daoProxy; // @synthesize daoProxy=_daoProxy;
- (void).cxx_destruct;
- (void)vacuumDatabase;
- (long long)clearAllMessageWithTimeDate:(long long)arg1;
- (_Bool)deleteMessage:(id)arg1;
- (id)getMessageList:(id)arg1 limit:(id)arg2;
- (_Bool)setAllMessageRead;
- (_Bool)clearAllMessages;
- (long long)allMessageCount;
- (_Bool)saveMessage:(id)arg1;
- (void)initDataBase;

@end

