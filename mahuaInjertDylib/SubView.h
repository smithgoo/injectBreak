//
//  SubView.h
//  mahuaInjertDylib
//
//  Created by 王朋 on 2019/8/22.
//  Copyright © 2019 王朋. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JKCountDownButton/JKCountDownButton.h>
#import <FLAnimatedImage/FLAnimatedImage.h>
#import <FLAnimatedImageView.h>
NS_ASSUME_NONNULL_BEGIN

@interface SubView : UIView
@property (nonatomic,strong) FLAnimatedImageView *coverImg;

@property (nonatomic,strong) JKCountDownButton *countDownCode;
@property (nonatomic,copy) void(^adClickCallBack)(void);
@end

NS_ASSUME_NONNULL_END
