//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AsyncReceivePacket, AsyncSendPacket, NSArray, NSMutableArray, NSString, NSTimer;

@interface AsyncUdpSocket : NSObject
{
    struct __CFSocket *theSocket4;
    struct __CFSocket *theSocket6;
    struct __CFRunLoopSource *theSource4;
    struct __CFRunLoopSource *theSource6;
    struct __CFRunLoop *theRunLoop;
    CDStruct_4210025a theContext;
    NSArray *theRunLoopModes;
    NSMutableArray *theSendQueue;
    AsyncSendPacket *theCurrentSend;
    NSTimer *theSendTimer;
    NSMutableArray *theReceiveQueue;
    AsyncReceivePacket *theCurrentReceive;
    NSTimer *theReceiveTimer;
    id theDelegate;
    unsigned short theFlags;
    long long theUserData;
    NSString *cachedLocalHost;
    unsigned short cachedLocalPort;
    NSString *cachedConnectedHost;
    unsigned short cachedConnectedPort;
    unsigned int maxReceiveBufferSize;
}

- (void).cxx_destruct;
- (void)doCFSocketCallback:(unsigned long long)arg1 forSocket:(struct __CFSocket *)arg2 withAddress:(id)arg3 withData:(const void *)arg4;
- (void)doReceiveTimeout:(id)arg1;
- (void)endCurrentReceive;
- (void)failCurrentReceive:(id)arg1;
- (_Bool)maybeCompleteCurrentReceive;
- (void)doReceive:(struct __CFSocket *)arg1;
- (void)doReceive6;
- (void)doReceive4;
- (void)maybeDequeueReceive;
- (void)scheduleDequeueReceive;
- (_Bool)hasBytesAvailable:(struct __CFSocket *)arg1;
- (void)receiveWithTimeout:(double)arg1 tag:(long long)arg2;
- (void)doSendTimeout:(id)arg1;
- (void)endCurrentSend;
- (void)failCurrentSend:(id)arg1;
- (void)completeCurrentSend;
- (void)doSend:(struct __CFSocket *)arg1;
- (void)maybeDequeueSend;
- (void)scheduleDequeueSend;
- (struct __CFSocket *)socketForPacket:(id)arg1;
- (_Bool)canAcceptBytes:(struct __CFSocket *)arg1;
- (_Bool)sendData:(id)arg1 toAddress:(id)arg2 withTimeout:(double)arg3 tag:(long long)arg4;
- (_Bool)sendData:(id)arg1 toHost:(id)arg2 port:(unsigned short)arg3 withTimeout:(double)arg4 tag:(long long)arg5;
- (_Bool)sendData:(id)arg1 withTimeout:(double)arg2 tag:(long long)arg3;
- (unsigned int)maximumTransmissionUnit;
- (_Bool)isIPv6;
- (_Bool)isIPv4;
- (_Bool)isClosed;
- (_Bool)isConnectedToHost:(id)arg1 port:(unsigned short)arg2;
- (_Bool)isConnected;
- (unsigned short)connectedPort:(struct __CFSocket *)arg1;
- (id)connectedHost:(struct __CFSocket *)arg1;
- (unsigned short)localPort:(struct __CFSocket *)arg1;
- (id)localHost:(struct __CFSocket *)arg1;
- (unsigned short)connectedPort;
- (id)connectedHost;
- (unsigned short)localPort;
- (id)localHost;
- (id)getReceiveTimeoutError;
- (id)getSendTimeoutError;
- (id)getIPv6UnavailableError;
- (id)getIPv4UnavailableError;
- (id)getSocketError;
- (id)getErrnoError;
- (void)maybeScheduleClose;
- (void)closeAfterSendingAndReceiving;
- (void)closeAfterReceiving;
- (void)closeAfterSending;
- (void)close;
- (void)closeSocket6;
- (void)closeSocket4;
- (void)emptyQueues;
- (_Bool)enableBroadcast:(_Bool)arg1 error:(id *)arg2;
- (_Bool)joinMulticastGroup:(id)arg1 withAddress:(id)arg2 error:(id *)arg3;
- (_Bool)joinMulticastGroup:(id)arg1 error:(id *)arg2;
- (_Bool)connectToAddress:(id)arg1 error:(id *)arg2;
- (_Bool)connectToHost:(id)arg1 onPort:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)bindToAddress:(id)arg1 port:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)bindToPort:(unsigned short)arg1 error:(id *)arg2;
- (id)addressHost:(struct sockaddr *)arg1;
- (id)addressHost6:(struct sockaddr_in6 *)arg1;
- (id)addressHost4:(struct sockaddr_in *)arg1;
- (int)convertForSendHost:(id)arg1 port:(unsigned short)arg2 intoAddress4:(id *)arg3 address6:(id *)arg4;
- (int)convertForBindHost:(id)arg1 port:(unsigned short)arg2 intoAddress4:(id *)arg3 address6:(id *)arg4;
- (id)runLoopModes;
- (_Bool)setRunLoopModes:(id)arg1;
- (_Bool)moveToRunLoop:(id)arg1;
- (void)setMaxReceiveBufferSize:(unsigned int)arg1;
- (unsigned int)maxReceiveBufferSize;
- (void)runLoopRemoveTimer:(id)arg1;
- (void)runLoopAddTimer:(id)arg1;
- (void)runLoopRemoveSource:(struct __CFRunLoopSource *)arg1;
- (void)runLoopAddSource:(struct __CFRunLoopSource *)arg1;
- (void)setUserData:(long long)arg1;
- (long long)userData;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)initIPv6;
- (id)initIPv4;
- (id)initWithDelegate:(id)arg1 userData:(long long)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 userData:(long long)arg2 enableIPv4:(_Bool)arg3 enableIPv6:(_Bool)arg4;

@end

