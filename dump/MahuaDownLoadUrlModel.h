//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MahuaDownLoadUrlModel : NSObject
{
    long long _movieId;
    NSString *_m3u8PlayUrl;
    NSString *_m3u8Format;
    NSString *_m3u8DownLoadUrl;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *m3u8DownLoadUrl; // @synthesize m3u8DownLoadUrl=_m3u8DownLoadUrl;
@property(copy, nonatomic) NSString *m3u8Format; // @synthesize m3u8Format=_m3u8Format;
@property(copy, nonatomic) NSString *m3u8PlayUrl; // @synthesize m3u8PlayUrl=_m3u8PlayUrl;
@property(nonatomic) long long movieId; // @synthesize movieId=_movieId;
- (void).cxx_destruct;

@end

