//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface UMPInstallation : NSObject
{
    _Bool _badgeClear;
    _Bool _autoAlert;
    NSString *_appKey;
    NSString *_channel;
    NSMutableArray *_tags;
    NSMutableDictionary *_alias;
    unsigned long long _registerRemoteNotificationTypes;
    long long _badge;
    NSString *_deviceToken;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)currentInstallation;
@property(retain, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(nonatomic) _Bool autoAlert; // @synthesize autoAlert=_autoAlert;
@property(nonatomic) _Bool badgeClear; // @synthesize badgeClear=_badgeClear;
@property(nonatomic) long long badge; // @synthesize badge=_badge;
@property(nonatomic) unsigned long long registerRemoteNotificationTypes; // @synthesize registerRemoteNotificationTypes=_registerRemoteNotificationTypes;
@property(retain, nonatomic) NSMutableDictionary *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (id)headerDictionary;
- (id)ComponseHeaderDictionaryWithTs:(unsigned long long)arg1;
- (id)headerDictionaryWithTs:(id)arg1;
- (void)clearDeviceTokenData;
- (void)setDeviceTokenData:(id)arg1;
- (id)utdid;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

