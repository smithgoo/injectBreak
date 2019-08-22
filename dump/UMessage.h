//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, UMPSession, UMPushMessage;

@interface UMessage : NSObject
{
    _Bool _tokenRegistering;
    _Bool _todayLaunch;
    UMPushMessage *_curMessage;
    UMPSession *_curSession;
    NSData *_curToken;
    NSData *_preToken;
    NSString *_lastClickMsgId;
}

+ (void)setWebViewController:(id)arg1;
+ (void)openDebugMode:(_Bool)arg1;
+ (void)addPlainTextCardMessageWithTitleFont:(id)arg1 ContentFont:(id)arg2 buttonFont:(id)arg3 Label:(id)arg4;
+ (void)addCustomCardMessageWithPortraitSize:(struct CGSize)arg1 LandscapeSize:(struct CGSize)arg2 CloseBtn:(id)arg3 Label:(id)arg4 umCustomCloseButtonDisplayMode:(_Bool)arg5;
+ (void)addCardMessageWithLabel:(id)arg1;
+ (void)addLaunchMessage;
+ (void)removeAlias:(id)arg1 type:(id)arg2 response:(CDUnknownBlockType)arg3;
+ (void)setAlias:(id)arg1 type:(id)arg2 response:(CDUnknownBlockType)arg3;
+ (void)addAlias:(id)arg1 type:(id)arg2 response:(CDUnknownBlockType)arg3;
+ (void)getWeightedTags:(CDUnknownBlockType)arg1;
+ (void)deleteWeightedTags:(id)arg1 response:(CDUnknownBlockType)arg2;
+ (void)addWeightedTags:(id)arg1 response:(CDUnknownBlockType)arg2;
+ (void)deleteTags:(id)arg1 response:(CDUnknownBlockType)arg2;
+ (void)addTags:(id)arg1 response:(CDUnknownBlockType)arg2;
+ (void)getTags:(CDUnknownBlockType)arg1;
+ (void)sendClickReportForRemoteNotification:(id)arg1;
+ (void)setAutoAlert:(_Bool)arg1;
+ (void)setBadgeClear:(_Bool)arg1;
+ (void)didReceiveRemoteNotification:(id)arg1;
+ (void)registerDeviceToken:(id)arg1;
+ (void)unregisterForRemoteNotifications;
+ (void)registerForRemoteNotificationsWithLaunchOptions:(id)arg1 Entity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)setLaunchOptions:(id)arg1;
+ (void)setLogEnabled:(_Bool)arg1;
+ (void)startWithAppkey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (void)load;
@property(retain, nonatomic) NSString *lastClickMsgId; // @synthesize lastClickMsgId=_lastClickMsgId;
@property(nonatomic) _Bool todayLaunch; // @synthesize todayLaunch=_todayLaunch;
@property(nonatomic) _Bool tokenRegistering; // @synthesize tokenRegistering=_tokenRegistering;
@property(retain, nonatomic) NSData *preToken; // @synthesize preToken=_preToken;
@property(retain, nonatomic) NSData *curToken; // @synthesize curToken=_curToken;
@property(retain, nonatomic) UMPSession *curSession; // @synthesize curSession=_curSession;
@property(retain, nonatomic) UMPushMessage *curMessage; // @synthesize curMessage=_curMessage;
- (void).cxx_destruct;
- (void)stopApp:(id)arg1;
- (void)startApp:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

