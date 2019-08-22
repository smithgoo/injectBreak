//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLUPnPResponseDelegate.h"
#import "CLUPnPServerDelegate.h"

@class CLUPnPDevice, CLUPnPRenderer, CLUPnPServer, NSMutableArray, NSString;

@interface MRDLNA : NSObject <CLUPnPServerDelegate, CLUPnPResponseDelegate>
{
    _Bool _willPlayOver;
    id <DLNADelegate> _delegate;
    CLUPnPDevice *_device;
    NSString *_playUrl;
    long long _searchTime;
    unsigned long long _duration;
    CLUPnPServer *_upd;
    NSMutableArray *_dataArray;
    CLUPnPRenderer *_render;
    NSString *_volume;
    long long _seekTime;
    CDUnknownBlockType _getCurrentTimeBlock;
}

+ (id)sharedMRDLNAManager;
@property(copy, nonatomic) CDUnknownBlockType getCurrentTimeBlock; // @synthesize getCurrentTimeBlock=_getCurrentTimeBlock;
@property(nonatomic) _Bool willPlayOver; // @synthesize willPlayOver=_willPlayOver;
@property(nonatomic) long long seekTime; // @synthesize seekTime=_seekTime;
@property(copy, nonatomic) NSString *volume; // @synthesize volume=_volume;
@property(retain, nonatomic) CLUPnPRenderer *render; // @synthesize render=_render;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) CLUPnPServer *upd; // @synthesize upd=_upd;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long searchTime; // @synthesize searchTime=_searchTime;
@property(copy, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(retain, nonatomic) CLUPnPDevice *device; // @synthesize device=_device;
@property(nonatomic) __weak id <DLNADelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)upnpUndefinedResponse:(id)arg1 postXML:(id)arg2;
- (void)upnpPlayResponse;
- (void)upnpGetPositionInfoResponse:(id)arg1;
- (void)upnpGetTransportInfoResponse:(id)arg1;
- (void)upnpSetAVTransportURIResponse;
- (void)upnpSearchErrorWithError:(id)arg1;
- (void)upnpSearchChangeWithResults:(id)arg1;
- (void)playTheURL:(id)arg1;
- (id)timeFormatted:(long long)arg1;
- (void)seekChanged:(long long)arg1;
- (void)volumeChanged:(id)arg1;
- (void)startSearch;
- (void)dlnaPause;
- (void)dlnaPlay;
- (void)endDLNA;
- (void)initCLUPnPRendererAndDlnaPlay;
- (void)startDLNAAfterStop;
- (void)getCurrentPlayTime:(CDUnknownBlockType)arg1;
- (void)startDLNA;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

