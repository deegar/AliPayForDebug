//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol VIOModuleDelegate;

@interface VIOModule : NSObject
{
    NSDictionary *_params;
    id <VIOModuleDelegate> _delegate;
}

@property(nonatomic) __weak id <VIOModuleDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (void)quitWithResult:(id)arg1;
- (void)start;

@end
