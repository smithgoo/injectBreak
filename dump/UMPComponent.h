//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UMLogDataProtocol.h"

@class NSString;

@interface UMPComponent : NSObject <UMLogDataProtocol>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void)sendClickMsgId:(id)arg1 actiontype:(id)arg2 ts:(unsigned long long)arg3;
- (void)sendDeviceToken:(id)arg1 url:(id)arg2;
- (_Bool)cacheDataReady;
- (void)removeCacheData:(id)arg1;
- (id)readCachedData;
- (id)readCachedDataWithSize:(long long)arg1 overSize:(long long)arg2;
- (id)setupReportData:(long long)arg1;
- (void)workEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

