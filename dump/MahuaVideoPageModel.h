//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MahuaVideoPageModel : NSObject
{
    _Bool _isRequest;
    _Bool _fold;
    NSString *_tabName;
    long long _currentPage;
    long long _pageSize;
    long long _isShowTag;
    NSArray *_videoList;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(nonatomic, getter=isFold) _Bool fold; // @synthesize fold=_fold;
@property(nonatomic) _Bool isRequest; // @synthesize isRequest=_isRequest;
@property(retain, nonatomic) NSArray *videoList; // @synthesize videoList=_videoList;
@property(nonatomic) long long isShowTag; // @synthesize isShowTag=_isShowTag;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
- (void).cxx_destruct;

@end

