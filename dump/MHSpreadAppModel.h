//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface MHSpreadAppModel : NSObject
{
    _Bool _canAnimated;
    NSNumber *_id;
    NSString *_openInstallUrl;
    NSString *_proIdPrefix;
    NSString *_systemName;
    NSNumber *_proMark;
    NSString *_proDescription;
    NSString *_shareDescription;
}

@property(nonatomic) _Bool canAnimated; // @synthesize canAnimated=_canAnimated;
@property(copy, nonatomic) NSString *shareDescription; // @synthesize shareDescription=_shareDescription;
@property(copy, nonatomic) NSString *proDescription; // @synthesize proDescription=_proDescription;
@property(copy, nonatomic) NSNumber *proMark; // @synthesize proMark=_proMark;
@property(copy, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(copy, nonatomic) NSString *proIdPrefix; // @synthesize proIdPrefix=_proIdPrefix;
@property(copy, nonatomic) NSString *openInstallUrl; // @synthesize openInstallUrl=_openInstallUrl;
@property(copy, nonatomic) NSNumber *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end
