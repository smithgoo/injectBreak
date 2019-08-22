//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UMPBaseModel.h"

@class NSNumber, NSString, UMPMsgInfoModel, UMPPolicyModel;

@interface UMPADModel : UMPBaseModel
{
    NSString *_msg_id;
    NSNumber *_msg_type;
    UMPMsgInfoModel *_msg_info;
    UMPPolicyModel *_policy;
    NSString *_check_num;
}

@property(copy, nonatomic) NSString *check_num; // @synthesize check_num=_check_num;
@property(retain, nonatomic) UMPPolicyModel *policy; // @synthesize policy=_policy;
@property(retain, nonatomic) UMPMsgInfoModel *msg_info; // @synthesize msg_info=_msg_info;
@property(retain, nonatomic) NSNumber *msg_type; // @synthesize msg_type=_msg_type;
@property(copy, nonatomic) NSString *msg_id; // @synthesize msg_id=_msg_id;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end
