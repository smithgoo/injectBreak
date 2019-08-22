//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface MahuaUserDetailModel : NSObject
{
    NSString *_avatarUrl;
    NSString *_cellphone;
    NSString *_gender;
    NSString *_countryCode;
    NSString *_invitationCode;
    long long _invitation;
    long long _level;
    long long _levelScore;
    long long _login;
    NSString *_nickName;
    long long _score;
    NSString *_token;
    NSString *_loginToken;
    long long _userId;
    long long _userType;
    NSString *_email;
    long long _barrageNum;
    long long _begVideoNum;
    long long _cancelAdNum;
    long long _money;
    NSNumber *_sign;
    NSNumber *_findIsOpen;
    NSArray *_authIdList;
    NSNumber *_canCacheNum;
    NSNumber *_restCacheNum;
    NSNumber *_proMark;
}

@property(copy, nonatomic) NSNumber *proMark; // @synthesize proMark=_proMark;
@property(retain, nonatomic) NSNumber *restCacheNum; // @synthesize restCacheNum=_restCacheNum;
@property(retain, nonatomic) NSNumber *canCacheNum; // @synthesize canCacheNum=_canCacheNum;
@property(retain, nonatomic) NSArray *authIdList; // @synthesize authIdList=_authIdList;
@property(retain, nonatomic) NSNumber *findIsOpen; // @synthesize findIsOpen=_findIsOpen;
@property(retain, nonatomic) NSNumber *sign; // @synthesize sign=_sign;
@property(nonatomic) long long money; // @synthesize money=_money;
@property(nonatomic) long long cancelAdNum; // @synthesize cancelAdNum=_cancelAdNum;
@property(nonatomic) long long begVideoNum; // @synthesize begVideoNum=_begVideoNum;
@property(nonatomic) long long barrageNum; // @synthesize barrageNum=_barrageNum;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) long long userType; // @synthesize userType=_userType;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *loginToken; // @synthesize loginToken=_loginToken;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) long long login; // @synthesize login=_login;
@property(nonatomic) long long levelScore; // @synthesize levelScore=_levelScore;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) long long invitation; // @synthesize invitation=_invitation;
@property(retain, nonatomic) NSString *invitationCode; // @synthesize invitationCode=_invitationCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *cellphone; // @synthesize cellphone=_cellphone;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
- (void).cxx_destruct;

@end
