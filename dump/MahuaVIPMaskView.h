//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface MahuaVIPMaskView : UIView
{
    NSString *_openNum;
    NSString *_experienceNum;
    CDUnknownBlockType _routerBlock;
    UILabel *_openLab;
    UILabel *_expLab;
}

@property(nonatomic) __weak UILabel *expLab; // @synthesize expLab=_expLab;
@property(nonatomic) __weak UILabel *openLab; // @synthesize openLab=_openLab;
@property(copy, nonatomic) CDUnknownBlockType routerBlock; // @synthesize routerBlock=_routerBlock;
@property(copy, nonatomic) NSString *experienceNum; // @synthesize experienceNum=_experienceNum;
@property(copy, nonatomic) NSString *openNum; // @synthesize openNum=_openNum;
- (void).cxx_destruct;
- (void)buyExperienceVip:(id)arg1;
- (void)buyOpenVip:(id)arg1;
- (void)expirenceVIP:(id)arg1;
- (void)openVIP:(id)arg1;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end
