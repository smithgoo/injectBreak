//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableURLRequest, NSURLSession, NSURLSessionDataTask;

@interface MahuaM3U8DecodeTool : NSObject
{
    NSURLSession *_session;
    NSURLSessionDataTask *_downTask;
    NSMutableURLRequest *_mutableRequest;
}

+ (id)downloadM3U8WithUrl:(id)arg1;
+ (id)praseUrl:(id)arg1;
@property(retain, nonatomic) NSMutableURLRequest *mutableRequest; // @synthesize mutableRequest=_mutableRequest;
@property(retain, nonatomic) NSURLSessionDataTask *downTask; // @synthesize downTask=_downTask;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;

@end

