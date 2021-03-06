//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface MahuaHotItemDetailModel : NSObject
{
    NSString *_title;
    NSString *_gmtModifiedStr;
    NSString *_content;
    long long _reviewNum;
    long long _likeNum;
    long long _noLikeNum;
    long long _ID;
    NSString *_bgColor;
    NSString *_bgImg;
    NSString *_coverImg;
    NSString *_shareHtmlAddr;
    long long _topStatus;
    NSMutableArray *_relationList;
}

+ (id)mj_replacedKeyFromPropertyName;
+ (id)mj_objectClassInArray;
@property(retain, nonatomic) NSMutableArray *relationList; // @synthesize relationList=_relationList;
@property(nonatomic) long long topStatus; // @synthesize topStatus=_topStatus;
@property(copy, nonatomic) NSString *shareHtmlAddr; // @synthesize shareHtmlAddr=_shareHtmlAddr;
@property(copy, nonatomic) NSString *coverImg; // @synthesize coverImg=_coverImg;
@property(copy, nonatomic) NSString *bgImg; // @synthesize bgImg=_bgImg;
@property(copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
@property(nonatomic) long long noLikeNum; // @synthesize noLikeNum=_noLikeNum;
@property(nonatomic) long long likeNum; // @synthesize likeNum=_likeNum;
@property(nonatomic) long long reviewNum; // @synthesize reviewNum=_reviewNum;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *gmtModifiedStr; // @synthesize gmtModifiedStr=_gmtModifiedStr;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

