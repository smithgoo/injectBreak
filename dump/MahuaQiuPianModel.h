//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MahuaQiuPianModel : NSObject
{
    long long _state;
    long long _ID;
    long long _videoInfoId;
    long long _flag;
    long long _year;
    long long _type;
    NSString *_name;
    long long _approveNum;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(nonatomic) long long approveNum; // @synthesize approveNum=_approveNum;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
@property(nonatomic) long long videoInfoId; // @synthesize videoInfoId=_videoInfoId;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;

@end

