//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface MahuaHotItemMovieModel : NSObject
{
    NSString *_coverHUrl;
    NSString *_coverUrl;
    NSString *_highCoverHUrl;
    NSString *_highCoverUrl;
    NSString *_title;
    NSString *_director;
    NSString *_staring;
    NSString *_intro;
    long long _favorited;
    long long _videoInfoId;
    NSArray *_classifyTypeList;
    NSMutableArray *_videoIdList;
}

+ (id)mj_objectClassInArray;
@property(retain, nonatomic) NSMutableArray *videoIdList; // @synthesize videoIdList=_videoIdList;
@property(copy, nonatomic) NSArray *classifyTypeList; // @synthesize classifyTypeList=_classifyTypeList;
@property(nonatomic) long long videoInfoId; // @synthesize videoInfoId=_videoInfoId;
@property(nonatomic) long long favorited; // @synthesize favorited=_favorited;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(copy, nonatomic) NSString *staring; // @synthesize staring=_staring;
@property(copy, nonatomic) NSString *director; // @synthesize director=_director;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *highCoverUrl; // @synthesize highCoverUrl=_highCoverUrl;
@property(copy, nonatomic) NSString *highCoverHUrl; // @synthesize highCoverHUrl=_highCoverHUrl;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *coverHUrl; // @synthesize coverHUrl=_coverHUrl;
- (void).cxx_destruct;

@end

