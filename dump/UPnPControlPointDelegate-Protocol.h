//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GetPositionInfoResponse, GetTransportInfoResponse, NSError, NSString, UPnPActionResponse, UPnPManager;

@protocol UPnPControlPointDelegate <NSObject>

@optional
- (void)uPnpManager:(UPnPManager *)arg1 didSetVolume:(NSString *)arg2 response:(UPnPActionResponse *)arg3;
- (void)uPnpManager:(UPnPManager *)arg1 didGetCurrentTransportActionsResponse:(UPnPActionResponse *)arg2;
- (void)uPnpManager:(UPnPManager *)arg1 didSetNextAVTransportURI:(NSString *)arg2 response:(UPnPActionResponse *)arg3;
- (void)uPnpManager:(UPnPManager *)arg1 didSetAVTransportURI:(NSString *)arg2 response:(UPnPActionResponse *)arg3;
- (void)uPnpManager:(UPnPManager *)arg1 didSeekTo:(NSString *)arg2 response:(UPnPActionResponse *)arg3;
- (void)uPnpManager:(UPnPManager *)arg1 didStopResponse:(UPnPActionResponse *)arg2;
- (void)uPnpManager:(UPnPManager *)arg1 didPauseResponse:(UPnPActionResponse *)arg2;
- (void)uPnpManager:(UPnPManager *)arg1 didPlayResponse:(UPnPActionResponse *)arg2 error:(NSError *)arg3;
- (void)uPnpManager:(UPnPManager *)arg1 didGetPositionInfoResponse:(GetPositionInfoResponse *)arg2 errror:(NSError *)arg3;
- (void)uPnpManager:(UPnPManager *)arg1 didGetTransportInfoResponse:(GetTransportInfoResponse *)arg2 error:(NSError *)arg3;
@end

