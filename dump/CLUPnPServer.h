//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCDAsyncUdpSocketDelegate.h"

@class GCDAsyncUdpSocket, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CLUPnPServer : NSObject <GCDAsyncUdpSocketDelegate>
{
    _Bool _receiveDevice;
    id <CLUPnPServerDelegate> _delegate;
    NSMutableDictionary *_deviceDictionary;
    long long _searchTime;
    GCDAsyncUdpSocket *_udpSocket;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)shareServer;
@property(nonatomic) _Bool receiveDevice; // @synthesize receiveDevice=_receiveDevice;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) GCDAsyncUdpSocket *udpSocket; // @synthesize udpSocket=_udpSocket;
@property(nonatomic) long long searchTime; // @synthesize searchTime=_searchTime;
@property(retain, nonatomic) NSMutableDictionary *deviceDictionary; // @synthesize deviceDictionary=_deviceDictionary;
@property(nonatomic) __weak id <CLUPnPServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isNilString:(id)arg1;
- (id)getDeviceWithLocation:(id)arg1 withUSN:(id)arg2;
- (id)headerValueForKey:(id)arg1 inData:(id)arg2;
- (void)onError:(id)arg1;
- (void)onChange;
- (void)removeDeviceWithUSN:(id)arg1;
- (void)addDevice:(id)arg1 forUSN:(id)arg2;
- (void)JudgeDeviceWithData:(id)arg1;
- (void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
- (void)udpSocketDidClose:(id)arg1 withError:(id)arg2;
- (void)udpSocket:(id)arg1 didNotSendDataWithTag:(long long)arg2 dueToError:(id)arg3;
- (void)udpSocket:(id)arg1 didSendDataWithTag:(long long)arg2;
- (id)getDeviceList;
- (void)search;
- (void)stop;
- (void)start;
- (id)getSearchString;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
