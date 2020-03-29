//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ARTVCRoomStats, NSString;

@interface ARTVCSubscribeStats : NSObject
{
    ARTVCRoomStats *_roomStats;
    long long _receiveAudio;
    long long _receiveVideo;
    NSString *_s_feed_id;
    long long _s_signal_result;
    long long _s_pc_result;
    long long _r_recv_feed;
    long long _subscribe;
    long long _s_response;
    long long _s_recv_offer;
    long long _s_recv_candidate;
    long long _s_send_answer;
    long long _s_send_candidate;
    long long _s_send_removecandidate;
    long long _s_pc_complete;
    long long _s_first_frame;
    long long _s_close;
    long long _s_close_code;
}

@property(nonatomic) long long s_close_code; // @synthesize s_close_code=_s_close_code;
@property(nonatomic) long long s_close; // @synthesize s_close=_s_close;
@property(nonatomic) long long s_first_frame; // @synthesize s_first_frame=_s_first_frame;
@property(nonatomic) long long s_pc_complete; // @synthesize s_pc_complete=_s_pc_complete;
@property(nonatomic) long long s_send_removecandidate; // @synthesize s_send_removecandidate=_s_send_removecandidate;
@property(nonatomic) long long s_send_candidate; // @synthesize s_send_candidate=_s_send_candidate;
@property(nonatomic) long long s_send_answer; // @synthesize s_send_answer=_s_send_answer;
@property(nonatomic) long long s_recv_candidate; // @synthesize s_recv_candidate=_s_recv_candidate;
@property(nonatomic) long long s_recv_offer; // @synthesize s_recv_offer=_s_recv_offer;
@property(nonatomic) long long s_response; // @synthesize s_response=_s_response;
@property(nonatomic) long long subscribe; // @synthesize subscribe=_subscribe;
@property(nonatomic) long long r_recv_feed; // @synthesize r_recv_feed=_r_recv_feed;
@property(nonatomic) long long s_pc_result; // @synthesize s_pc_result=_s_pc_result;
@property(nonatomic) long long s_signal_result; // @synthesize s_signal_result=_s_signal_result;
@property(copy, nonatomic) NSString *s_feed_id; // @synthesize s_feed_id=_s_feed_id;
@property(nonatomic) long long receiveVideo; // @synthesize receiveVideo=_receiveVideo;
@property(nonatomic) long long receiveAudio; // @synthesize receiveAudio=_receiveAudio;
@property(retain, nonatomic) ARTVCRoomStats *roomStats; // @synthesize roomStats=_roomStats;
- (void).cxx_destruct;
- (id)description;
- (id)dictionary;
- (id)init;

@end

