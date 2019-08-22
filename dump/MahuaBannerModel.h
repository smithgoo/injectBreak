//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface MahuaBannerModel : NSObject <NSCoding>
{
    NSString *_linkUrl;
    NSString *_thumbnailUrl;
    NSString *_title;
    NSString *_onlineTime;
    long long _ID;
    long long _entry;
    long long _state;
    long long _orderNum;
    long long _videoInfoId;
    NSString *_colour;
    long long _targetType;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(nonatomic) long long targetType; // @synthesize targetType=_targetType;
@property(retain, nonatomic) NSString *colour; // @synthesize colour=_colour;
@property(nonatomic) long long videoInfoId; // @synthesize videoInfoId=_videoInfoId;
@property(nonatomic) long long orderNum; // @synthesize orderNum=_orderNum;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long entry; // @synthesize entry=_entry;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
@property(retain, nonatomic) NSString *onlineTime; // @synthesize onlineTime=_onlineTime;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
