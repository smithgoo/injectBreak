//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GetPositionInfoResponse : NSObject
{
    NSString *_absCount;
    NSString *_absTime;
    NSString *_relCount;
    NSString *_relTime;
    NSString *_track;
    NSString *_trackDuration;
    NSString *_trackMetaData;
}

@property(copy, nonatomic) NSString *trackMetaData; // @synthesize trackMetaData=_trackMetaData;
@property(copy, nonatomic) NSString *trackDuration; // @synthesize trackDuration=_trackDuration;
@property(copy, nonatomic) NSString *track; // @synthesize track=_track;
@property(copy, nonatomic) NSString *relTime; // @synthesize relTime=_relTime;
@property(copy, nonatomic) NSString *relCount; // @synthesize relCount=_relCount;
@property(copy, nonatomic) NSString *absTime; // @synthesize absTime=_absTime;
@property(copy, nonatomic) NSString *absCount; // @synthesize absCount=_absCount;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

