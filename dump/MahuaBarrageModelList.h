//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface MahuaBarrageModelList : NSObject <NSCoding>
{
    NSMutableArray *_barrageModelList;
    NSString *_barrageID;
}

+ (id)mj_objectClassInArray;
@property(copy, nonatomic) NSString *barrageID; // @synthesize barrageID=_barrageID;
@property(copy, nonatomic) NSMutableArray *barrageModelList; // @synthesize barrageModelList=_barrageModelList;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

