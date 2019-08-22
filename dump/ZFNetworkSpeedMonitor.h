//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTimer;

@interface ZFNetworkSpeedMonitor : NSObject
{
    unsigned int _iBytes;
    unsigned int _oBytes;
    unsigned int _allFlow;
    unsigned int _wifiIBytes;
    unsigned int _wifiOBytes;
    unsigned int _wifiFlow;
    unsigned int _wwanIBytes;
    unsigned int _wwanOBytes;
    unsigned int _wwanFlow;
    NSString *_downloadNetworkSpeed;
    NSString *_uploadNetworkSpeed;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(readonly, copy, nonatomic) NSString *uploadNetworkSpeed; // @synthesize uploadNetworkSpeed=_uploadNetworkSpeed;
@property(readonly, copy, nonatomic) NSString *downloadNetworkSpeed; // @synthesize downloadNetworkSpeed=_downloadNetworkSpeed;
- (void).cxx_destruct;
- (void)checkNetworkSpeed;
- (id)stringWithbytes:(int)arg1;
- (void)stopNetworkSpeedMonitor;
- (void)startNetworkSpeedMonitor;
- (id)init;

@end

