//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface MahuaQuastionModel : NSObject
{
    long long _numb;
    long long _type;
    NSString *_question;
    NSMutableArray *_answerArr;
    long long _cellH;
}

+ (id)mj_objectClassInArray;
@property(nonatomic) long long cellH; // @synthesize cellH=_cellH;
@property(retain, nonatomic) NSMutableArray *answerArr; // @synthesize answerArr=_answerArr;
@property(retain, nonatomic) NSString *question; // @synthesize question=_question;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long numb; // @synthesize numb=_numb;
- (void).cxx_destruct;

@end

