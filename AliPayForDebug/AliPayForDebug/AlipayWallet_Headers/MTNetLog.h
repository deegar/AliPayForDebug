//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MTNetLog : NSObject
{
    _Bool _isH5Log;
    NSString *_URL;
    NSString *_Host;
    NSString *_API;
    NSString *_Duration;
    NSString *_UploadSize;
    NSString *_DownloadSize;
    NSString *_ReqHdrSize;
    NSString *_ResHdrSize;
    NSString *_Stat;
    NSString *_Page;
    NSString *_NetType;
    NSString *_Owner;
    NSString *_MIMEType;
    NSString *_channel;
    struct CGSize _imageSize;
}

@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(nonatomic) _Bool isH5Log; // @synthesize isH5Log=_isH5Log;
@property(copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSString *Owner; // @synthesize Owner=_Owner;
@property(copy, nonatomic) NSString *NetType; // @synthesize NetType=_NetType;
@property(copy, nonatomic) NSString *Page; // @synthesize Page=_Page;
@property(copy, nonatomic) NSString *Stat; // @synthesize Stat=_Stat;
@property(copy, nonatomic) NSString *ResHdrSize; // @synthesize ResHdrSize=_ResHdrSize;
@property(copy, nonatomic) NSString *ReqHdrSize; // @synthesize ReqHdrSize=_ReqHdrSize;
@property(copy, nonatomic) NSString *DownloadSize; // @synthesize DownloadSize=_DownloadSize;
@property(copy, nonatomic) NSString *UploadSize; // @synthesize UploadSize=_UploadSize;
@property(copy, nonatomic) NSString *Duration; // @synthesize Duration=_Duration;
@property(copy, nonatomic) NSString *API; // @synthesize API=_API;
@property(copy, nonatomic) NSString *Host; // @synthesize Host=_Host;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (int)dataSize;
- (id)description;
- (id)descriptionForKeyPaths;
- (id)keyPaths;
- (id)dictionaryRepresentation;
- (id)init;

@end

