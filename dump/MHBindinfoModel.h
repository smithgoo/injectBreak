//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface MHBindinfoModel : NSObject
{
    _Bool _hasAli;
    _Bool _hasBank;
    NSNumber *_userId;
    NSString *_alipayAccount;
    NSString *_alipayName;
    NSString *_bankAccount;
    NSString *_bankCity;
    NSString *_bankCode;
    NSString *_bankName;
    NSString *_bankOpen;
    NSString *_bankProvince;
    NSString *_bankTel;
}

@property(nonatomic) _Bool hasBank; // @synthesize hasBank=_hasBank;
@property(nonatomic) _Bool hasAli; // @synthesize hasAli=_hasAli;
@property(copy, nonatomic) NSString *bankTel; // @synthesize bankTel=_bankTel;
@property(copy, nonatomic) NSString *bankProvince; // @synthesize bankProvince=_bankProvince;
@property(copy, nonatomic) NSString *bankOpen; // @synthesize bankOpen=_bankOpen;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *bankCode; // @synthesize bankCode=_bankCode;
@property(copy, nonatomic) NSString *bankCity; // @synthesize bankCity=_bankCity;
@property(copy, nonatomic) NSString *bankAccount; // @synthesize bankAccount=_bankAccount;
@property(copy, nonatomic) NSString *alipayName; // @synthesize alipayName=_alipayName;
@property(copy, nonatomic) NSString *alipayAccount; // @synthesize alipayAccount=_alipayAccount;
@property(copy, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end
