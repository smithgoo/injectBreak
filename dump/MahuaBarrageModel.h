//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface MahuaBarrageModel : NSObject <NSCoding>
{
    NSString *_content;
    long long _ID;
    double _nodeTime;
    long long _type;
}

+ (id)mj_replacedKeyFromPropertyName;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double nodeTime; // @synthesize nodeTime=_nodeTime;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

