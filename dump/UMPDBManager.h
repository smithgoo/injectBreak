//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UMPDBManager : NSObject
{
}

+ (id)shareDataBaseHandle;
- (id)selectMessagesWithSQL:(id)arg1;
- (id)selectLabelsWithTableName:(id)arg1 Label:(id)arg2;
- (id)selectAllWithTableName:(id)arg1;
- (id)selectNewlyWithTableName:(id)arg1;
- (id)selectObjectWithTableName:(id)arg1 MsgID:(id)arg2;
- (void)updateSQL:(id)arg1;
- (void)closeDB;
- (void)open:(id)arg1;

@end

