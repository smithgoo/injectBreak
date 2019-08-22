//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class MahuaADVModel, NSArray, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface MahuaQueryListModel : NSObject <NSCoding>
{
    MahuaADVModel *_advModel;
    NSString *_coverHUrl;
    NSString *_coverUrl;
    NSNumber *_doubanScore;
    long long _episodeState;
    long long _episodeTotalCount;
    long long _episodeUploadCount;
    NSString *_highCoverHUrl;
    NSString *_highCoverUrl;
    long long _hotPlayNum;
    NSString *_lastPeriod;
    NSString *_picUrl;
    NSString *_coverGifHUrl;
    NSString *_coverGifUrl;
    long long _playCount;
    long long _playTimeLength;
    long long _tag;
    NSDictionary *_tagDTO;
    NSString *_tagName;
    NSString *_targetUrl;
    NSString *_title;
    NSString *_focus;
    long long _videoInfoId;
    long long _type;
    long long _basePalyNum;
    long long _ID;
    NSString *_intro;
    NSString *_director;
    long long _playScore;
    NSString *_staring;
    NSString *_code;
    long long _coverTime;
    NSString *_titleH;
    NSString *_focusH;
    long long _downloadScore;
    NSArray *_videoClassifyList;
    NSString *_imdbScore;
    NSString *_playUrl;
    NSArray *_videoList;
    NSArray *_classifyTypeList;
    NSString *_gmtCreateStr;
    NSString *_createUser;
    long long _isLike;
    NSMutableArray *_infoBootads;
}

+ (id)mj_objectClassInArray;
+ (id)mj_replacedKeyFromPropertyName;
@property(retain, nonatomic) NSMutableArray *infoBootads; // @synthesize infoBootads=_infoBootads;
@property(nonatomic) long long isLike; // @synthesize isLike=_isLike;
@property(retain, nonatomic) NSString *createUser; // @synthesize createUser=_createUser;
@property(retain, nonatomic) NSString *gmtCreateStr; // @synthesize gmtCreateStr=_gmtCreateStr;
@property(retain, nonatomic) NSArray *classifyTypeList; // @synthesize classifyTypeList=_classifyTypeList;
@property(retain, nonatomic) NSArray *videoList; // @synthesize videoList=_videoList;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(retain, nonatomic) NSString *imdbScore; // @synthesize imdbScore=_imdbScore;
@property(retain, nonatomic) NSArray *videoClassifyList; // @synthesize videoClassifyList=_videoClassifyList;
@property(nonatomic) long long downloadScore; // @synthesize downloadScore=_downloadScore;
@property(copy, nonatomic) NSString *focusH; // @synthesize focusH=_focusH;
@property(copy, nonatomic) NSString *titleH; // @synthesize titleH=_titleH;
@property(nonatomic) long long coverTime; // @synthesize coverTime=_coverTime;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *staring; // @synthesize staring=_staring;
@property(nonatomic) long long playScore; // @synthesize playScore=_playScore;
@property(retain, nonatomic) NSString *director; // @synthesize director=_director;
@property(retain, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
@property(nonatomic) long long basePalyNum; // @synthesize basePalyNum=_basePalyNum;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long videoInfoId; // @synthesize videoInfoId=_videoInfoId;
@property(copy, nonatomic) NSString *focus; // @synthesize focus=_focus;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(retain, nonatomic) NSDictionary *tagDTO; // @synthesize tagDTO=_tagDTO;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(nonatomic) long long playTimeLength; // @synthesize playTimeLength=_playTimeLength;
@property(nonatomic) long long playCount; // @synthesize playCount=_playCount;
@property(copy, nonatomic) NSString *coverGifUrl; // @synthesize coverGifUrl=_coverGifUrl;
@property(copy, nonatomic) NSString *coverGifHUrl; // @synthesize coverGifHUrl=_coverGifHUrl;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *lastPeriod; // @synthesize lastPeriod=_lastPeriod;
@property(nonatomic) long long hotPlayNum; // @synthesize hotPlayNum=_hotPlayNum;
@property(copy, nonatomic) NSString *highCoverUrl; // @synthesize highCoverUrl=_highCoverUrl;
@property(copy, nonatomic) NSString *highCoverHUrl; // @synthesize highCoverHUrl=_highCoverHUrl;
@property(nonatomic) long long episodeUploadCount; // @synthesize episodeUploadCount=_episodeUploadCount;
@property(nonatomic) long long episodeTotalCount; // @synthesize episodeTotalCount=_episodeTotalCount;
@property(nonatomic) long long episodeState; // @synthesize episodeState=_episodeState;
@property(retain, nonatomic) NSNumber *doubanScore; // @synthesize doubanScore=_doubanScore;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *coverHUrl; // @synthesize coverHUrl=_coverHUrl;
@property(retain, nonatomic) MahuaADVModel *advModel; // @synthesize advModel=_advModel;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

