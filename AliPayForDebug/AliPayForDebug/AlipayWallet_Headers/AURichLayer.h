//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CATextLayer.h>

@interface AURichLayer : CATextLayer
{
    struct __CTParagraphStyle *paragraphStyle;
    unsigned long long _breakMode;
}

@property(nonatomic) unsigned long long breakMode; // @synthesize breakMode=_breakMode;
- (id)description;
- (void)sizeToFits;
- (void)clearString;
- (struct CGSize)boundingSizeOfAtrributedString:(id)arg1 withWidth:(double)arg2;
- (struct CGSize)boundingSizeOfAtrributedString:(id)arg1;
- (struct CGSize)boundingSizeWithWidth:(double)arg1;
- (struct CGSize)boundingSize;
- (id)appendString:(id)arg1 withStyle:(id)arg2;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)init;

@end

