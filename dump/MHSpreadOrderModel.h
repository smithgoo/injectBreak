//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface MHSpreadOrderModel : NSObject
{
    NSNumber *_status;
    NSString *_orderId;
    NSNumber *_createTime;
    NSNumber *_balance;
    NSNumber *_amount;
    NSNumber *_charge;
    NSString *_date;
    NSNumber *_realPay;
}

@property(copy, nonatomic) NSNumber *realPay; // @synthesize realPay=_realPay;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(copy, nonatomic) NSNumber *charge; // @synthesize charge=_charge;
@property(copy, nonatomic) NSNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSNumber *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSNumber *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)timestampSwitchTime:(long long)arg1 andFormatter:(id)arg2;

@end

