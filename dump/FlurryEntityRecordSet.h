//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSMutableDictionary;

@interface FlurryEntityRecordSet : NSObject
{
    _Bool _eventLogComplete;
    int _totalErrorCount;
    NSDate *_startTime;
    NSMutableDictionary *_eventCounts;
    NSMutableArray *_eventLog;
    NSMutableArray *_errors;
}

@property(nonatomic) int totalErrorCount; // @synthesize totalErrorCount=_totalErrorCount;
@property(retain, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;
@property(nonatomic) _Bool eventLogComplete; // @synthesize eventLogComplete=_eventLogComplete;
@property(retain, nonatomic) NSMutableArray *eventLog; // @synthesize eventLog=_eventLog;
@property(retain, nonatomic) NSMutableDictionary *eventCounts; // @synthesize eventCounts=_eventCounts;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
