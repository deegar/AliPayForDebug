//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BEEAssetData : NSObject
{
    unsigned long long _dataType;
    id _data;
}

@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) unsigned long long dataType; // @synthesize dataType=_dataType;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 data:(id)arg2;

@end

