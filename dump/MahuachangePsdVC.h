//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MahuaParentsViewController.h"

@class NSMutableArray, UILabel, UIView;

@interface MahuachangePsdVC : MahuaParentsViewController
{
    UILabel *_emailLabel;
    UILabel *_phoneLabel;
    UIView *_v1;
    NSMutableArray *_arrayM;
}

@property(retain, nonatomic) NSMutableArray *arrayM; // @synthesize arrayM=_arrayM;
@property(retain, nonatomic) UIView *v1; // @synthesize v1=_v1;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UILabel *emailLabel; // @synthesize emailLabel=_emailLabel;
- (void).cxx_destruct;
- (void)buttonClick:(id)arg1;
- (void)setUpUI;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
