//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLLWLayout.h"

@interface BLLWSectionLayout : BLLWLayout
{
    BLLWLayout *_line;
    BLLWLayout *_centerText;
}

+ (id)layoutWithData:(id)arg1 Style:(id)arg2;
@property(retain, nonatomic) BLLWLayout *centerText; // @synthesize centerText=_centerText;
@property(retain, nonatomic) BLLWLayout *line; // @synthesize line=_line;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg1;

@end

