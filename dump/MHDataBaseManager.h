//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase;

@interface MHDataBaseManager : NSObject
{
    long long _gapTime;
    FMDatabase *_dataBase;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareDataBase;
@property(retain, nonatomic) FMDatabase *dataBase; // @synthesize dataBase=_dataBase;
@property(nonatomic) long long gapTime; // @synthesize gapTime=_gapTime;
- (void).cxx_destruct;
- (id)p_fetchNetProvider;
- (id)p_fetchNetwork;
- (id)p_pathForFMDBFolder;
- (void)p_initDataBase;
- (id)p_addGeneralDataWithEventDictionary:(id)arg1;
- (void)p_addTodayPlayTime:(long long)arg1;
- (void)p_pushNoSendingDataAfterOpenAPPAtTable:(id)arg1;
- (void)_saveWatchVideoEventOpenApp;
- (void)p_judgeDataBaseNoSendingAtTable:(id)arg1;
- (void)p_postRequestToServerEventArray:(id)arg1;
- (void)sendWatchVideoEventDictionary:(id)arg1 endPlay:(_Bool)arg2;
- (void)sendEventsInfoArray:(id)arg1;
- (void)sendEventDictionary:(id)arg1;
- (id)selectPlayTimeWithConditions:(id)arg1;
- (long long)fetchEventCountAtTable:(id)arg1;
- (id)fetchAllEventAtTable:(id)arg1;
- (id)selectEventInfoWithConditions:(id)arg1 atTable:(id)arg2;
- (_Bool)updatePlayTimeWithModel:(id)arg1;
- (_Bool)updateEventsInfoWithArray:(id)arg1 atTableName:(id)arg2;
- (_Bool)updateEventInfoModel:(id)arg1 atTable:(id)arg2;
- (_Bool)deleteEventInfoAtTable:(id)arg1;
- (_Bool)deletePlayTimeDataWithConditions:(id)arg1;
- (_Bool)deleteEventInfoWithConditions:(id)arg1 atTable:(id)arg2;
- (_Bool)deleteEventInfoAtTable:(id)arg1 deleteId:(id)arg2;
- (_Bool)insertPlayTime:(id)arg1;
- (_Bool)insertEventsInfoWithArray:(id)arg1 atTableName:(id)arg2;
- (_Bool)insertEventInfoWithModel:(id)arg1 atTable:(id)arg2;
- (_Bool)creatPlayTimeTableWithName:(id)arg1;
- (_Bool)creatTableWithName:(id)arg1;
- (id)init;

@end
