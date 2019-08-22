//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UMPBaseModel.h"

@class NSNumber, NSString;

@interface UMPPolicyModel : UMPBaseModel
{
    NSNumber *_show_type;
    NSNumber *_show_times;
    NSString *_start_time;
    NSString *_expire_time;
}

@property(copy, nonatomic) NSString *expire_time; // @synthesize expire_time=_expire_time;
@property(copy, nonatomic) NSString *start_time; // @synthesize start_time=_start_time;
@property(retain, nonatomic) NSNumber *show_times; // @synthesize show_times=_show_times;
@property(retain, nonatomic) NSNumber *show_type; // @synthesize show_type=_show_type;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

