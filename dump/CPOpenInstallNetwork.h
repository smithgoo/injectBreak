//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, OpenInstallSDK;

@interface CPOpenInstallNetwork : NSObject
{
    OpenInstallSDK *_openInstallSDK;
    NSURL *_serverURL;
}

+ (id)arrayToString:(id)arg1;
+ (id)stringFromString;
+ (id)pathForEndpoint:(unsigned long long)arg1;
+ (id)stringfromAny:(id)arg1;
+ (id)buildDecideQueryForProperties:(id)arg1;
+ (id)sharedURLSession;
@property(retain, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(nonatomic) __weak OpenInstallSDK *openInstallSDK; // @synthesize openInstallSDK=_openInstallSDK;
- (void).cxx_destruct;
- (_Bool)isReportActivUsersEnabled;
- (void)flushEventsWithQueue:(id)arg1;
- (id)buildRequestForEndpoint:(id)arg1 byHTTPMethod:(id)arg2 withQueryItems:(id)arg3 andBody:(id)arg4;
- (id)buildPostRequestForEndpoint:(unsigned long long)arg1 andBody:(id)arg2;
- (id)buildGetRequestForEndpoint:(unsigned long long)arg1 withQueryItems:(id)arg2;
- (id)setBaseRequestInfowithEndpoint:(id)arg1 WithPostbody:(id)arg2;
- (id)initWithServerURL:(id)arg1 openInstallSDK:(id)arg2;

@end

