//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol APRiskConfigObserverProtocol;

@protocol APRiskConfigServiceDelegate <NSObject>
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 key:(NSString *)arg2;
- (_Bool)addConfigChangedObserver:(id <APRiskConfigObserverProtocol>)arg1 key:(NSString *)arg2;
- (NSString *)stringValueForKey:(NSString *)arg1;
@end

