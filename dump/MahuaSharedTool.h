//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MahuaSharedTool : NSObject
{
}

+ (_Bool)isSameDayWithTimeOne:(id)arg1 timeTwo:(id)arg2;
+ (id)getCurrentTimes;
+ (id)sharePath;
+ (void)saveSharedTodayWithID:(long long)arg1;
+ (_Bool)isSharedTodayWithID:(long long)arg1;
+ (void)clearAllRecords;
+ (_Bool)saveAllRecords:(id)arg1;
+ (id)readAllRecords;

@end
