//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TEXFunctor;

@interface Ant3DFunctor : NSObject
{
    NSString *_name;
    TEXFunctor *_functor;
}

@property(retain, nonatomic) TEXFunctor *functor; // @synthesize functor=_functor;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithConfig:(struct Properties *)arg1;

@end

