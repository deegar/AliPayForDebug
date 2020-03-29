//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFSectionInternalProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class MFVirtualNode, NSMutableArray, NSMutableDictionary;
@protocol MFObjectProtocol;

@interface MFSectionModel : NSObject <MFSectionInternalProtocol, NSCopying>
{
    NSMutableDictionary *_sItem;
    NSMutableDictionary *_fItem;
    NSMutableArray *_items;
    MFVirtualNode *_vSNode;
    MFVirtualNode *_vFNode;
    NSMutableArray *_vNodes;
    NSObject<MFObjectProtocol> *_sObj;
    NSObject<MFObjectProtocol> *_fObj;
    NSMutableArray *_objs;
}

@property(retain) NSMutableArray *objs; // @synthesize objs=_objs;
@property(retain) NSObject<MFObjectProtocol> *fObj; // @synthesize fObj=_fObj;
@property(retain) NSObject<MFObjectProtocol> *sObj; // @synthesize sObj=_sObj;
@property(retain) NSMutableArray *vNodes; // @synthesize vNodes=_vNodes;
@property(retain) MFVirtualNode *vFNode; // @synthesize vFNode=_vFNode;
@property(retain) MFVirtualNode *vSNode; // @synthesize vSNode=_vSNode;
@property(retain) NSMutableArray *items; // @synthesize items=_items;
@property(retain) NSMutableDictionary *fItem; // @synthesize fItem=_fItem;
@property(retain) NSMutableDictionary *sItem; // @synthesize sItem=_sItem;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

