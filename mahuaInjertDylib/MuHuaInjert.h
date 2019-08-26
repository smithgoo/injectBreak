//
//  MuHuaInjert.h
//  mahuaInjert
//
//  Created by 王朋 on 2019/8/22.
//  Copyright © 2019 王朋. All rights reserved.
//

#ifndef MuHuaInjert_h
#define MuHuaInjert_h
#define MaHuaUserDefault [NSUserDefaults standardUserDefaults]


#define NODanMu @"NODanMu"

#define NOLaunchAD @"NOLaunchAD"

#define NOPlayAD @"NOPlayAD"

#import <UIKit/UIKit.h>
#import <FLAnimatedImageView.h>
#import <UIImageView+WebCache.h>
// 启动广告位
@interface MahuaADView : UIView
@property(retain, nonatomic) FLAnimatedImageView *lanchImageView; // @synthesize lanchImageView=_lanchImageView;
- (void)setupLanchImageV;

- (void)getLunchCache;

- (void)adClickWithID:(long long)arg1;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end



//去除注册弹窗
@interface MahuaAlertView : UIView
- (void)dismissAlertView;
- (void)showLXAlertView;
@end

// 去除播放器弹幕
@interface BarrageCanvas : UIView
- (void)layoutSubviews;
@end



// 去除播放器暂停广告
@interface MahuaPlayerAdvertisingView : UIView
@end
// 去除播放器暂停广告
@interface ZFPlayerControlView : UIView
@property(copy, nonatomic) MahuaPlayerAdvertisingView *adView;
// @synthesize adView=_adView;
- (void)zf_playAction:(_Bool)arg1 isShowAD:(_Bool)arg2;
@end

@interface CustomViewController
@property (nonatomic, copy) NSString* newProperty;
+ (void)classMethod;
- (NSString*)getMyName;
- (void)newMethod:(NSString*) output;
@end

@interface MahuaParentsViewController : UIViewController

@end

@interface MeViewController : MahuaParentsViewController
@property (nonatomic,copy) UITableView *tableView;


@property (nonatomic,readonly) NSMutableArray *allDataArray;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:
(UITableView *)tableView heightForRowAtIndexPath:(id)indexPath;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
//多少组
- (long long)numberOfSectionsInTableView:(id)arg1;
@end




#endif /* MuHuaInjert_h */
