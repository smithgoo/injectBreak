//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface MHSpreadRecordModel : NSObject
{
    NSString *_date;
    NSNumber *_person;
    NSNumber *_money;
    NSNumber *_totalMoney;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(copy, nonatomic) NSNumber *totalMoney; // @synthesize totalMoney=_totalMoney;
@property(copy, nonatomic) NSNumber *money; // @synthesize money=_money;
@property(copy, nonatomic) NSNumber *person; // @synthesize person=_person;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
- (void).cxx_destruct;

@end

