//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MahuaHistoryModel : NSObject
{
    NSString *_addTime;
    long long _ID;
    NSString *_playTime;
    NSString *_videoDuration;
    long long _videoInfoId;
    NSString *_videoPreviewUrl;
    NSString *_videoTitle;
    long long _sortNum;
    long long _type;
    long long _playCount;
    long long _videoId;
    NSString *_period;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *period; // @synthesize period=_period;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
@property(nonatomic) long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long sortNum; // @synthesize sortNum=_sortNum;
@property(retain, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(retain, nonatomic) NSString *videoPreviewUrl; // @synthesize videoPreviewUrl=_videoPreviewUrl;
@property(nonatomic) long long videoInfoId; // @synthesize videoInfoId=_videoInfoId;
@property(retain, nonatomic) NSString *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSString *playTime; // @synthesize playTime=_playTime;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
@property(retain, nonatomic) NSString *addTime; // @synthesize addTime=_addTime;
- (void).cxx_destruct;

@end
