//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MahuaRecommandCache : NSObject
{
}

+ (id)shareInstance;
- (id)selecteRankDataWithRandId:(id)arg1;
- (_Bool)selectedRankDataWithRankId:(id)arg1;
- (void)upDataRankWithData:(id)arg1 RankId:(id)arg2;
- (void)insertRankWithData:(id)arg1 RankId:(id)arg2;
- (id)selecteHotItemDataWithItem:(id)arg1;
- (_Bool)selectedHotItemDataWithItem:(id)arg1;
- (void)upDataHotItemWithData:(id)arg1 Item:(id)arg2;
- (void)insertHotItemWithData:(id)arg1 Item:(id)arg2;
- (id)selecteLunchDataWithItem:(id)arg1;
- (_Bool)selectedLunchDataWithItem:(id)arg1;
- (void)upDataLunchWithData:(id)arg1 Item:(id)arg2;
- (void)insertLunchNSData:(id)arg1 Item:(id)arg2;
- (_Bool)selectedDataWithItemId:(id)arg1 Item:(id)arg2;
- (id)selecteDataWithItemId:(id)arg1 Item:(id)arg2;
- (void)upDataWithItem:(id)arg1 NSData:(id)arg2 ItemId:(id)arg3;
- (void)insertWithItem:(id)arg1 NSData:(id)arg2 ItemId:(id)arg3;
- (_Bool)selectedDataWithItem:(id)arg1;
- (id)selecteDataWithItem:(id)arg1;
- (void)upDataWithItem:(id)arg1 NSData:(id)arg2;
- (void)insertWithItem:(id)arg1 NSData:(id)arg2;
- (id)init;

@end

