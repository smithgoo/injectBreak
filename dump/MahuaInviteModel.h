//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MahuaInviteModel : NSObject
{
    _Bool _hasBottomLine;
    NSString *_nickName;
    NSString *_registerTime;
    unsigned long long _level;
    unsigned long long _reward;
}

@property(nonatomic) _Bool hasBottomLine; // @synthesize hasBottomLine=_hasBottomLine;
@property(nonatomic) unsigned long long reward; // @synthesize reward=_reward;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *registerTime; // @synthesize registerTime=_registerTime;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;

@end

