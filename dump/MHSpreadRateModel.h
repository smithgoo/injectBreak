//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface MHSpreadRateModel : NSObject
{
    NSNumber *_id;
    NSNumber *_systemId;
    NSString *_systemName;
    NSNumber *_taxMax;
    NSNumber *_taxMin;
    NSNumber *_taxRate;
}

@property(copy, nonatomic) NSNumber *taxRate; // @synthesize taxRate=_taxRate;
@property(copy, nonatomic) NSNumber *taxMin; // @synthesize taxMin=_taxMin;
@property(copy, nonatomic) NSNumber *taxMax; // @synthesize taxMax=_taxMax;
@property(copy, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(copy, nonatomic) NSNumber *systemId; // @synthesize systemId=_systemId;
@property(copy, nonatomic) NSNumber *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end

