//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZTExpressionNode.h"

@class VZTKeyValueListNode;

@interface VZTObjectExpressionNode : VZTExpressionNode
{
    VZTKeyValueListNode *_keyValueList;
}

@property(retain, nonatomic) VZTKeyValueListNode *keyValueList; // @synthesize keyValueList=_keyValueList;
- (void).cxx_destruct;
- (id)compute:(id)arg1;
- (id)initWithKeyValueList:(id)arg1;

@end

