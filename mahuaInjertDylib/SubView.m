//
//  SubView.m
//  mahuaInjertDylib
//
//  Created by 王朋 on 2019/8/22.
//  Copyright © 2019 王朋. All rights reserved.
//

#import "SubView.h"
#import <UIImageView+WebCache.h>
#import <JKCountDownButton/JKCountDownButton.h>
#import <AFNetworking.h>


@implementation SubView

- (instancetype)initWithFrame:(CGRect)frame {
    self =[super initWithFrame:frame];
    [self setupUI];
    return self;
   
}

- (void)setupUI {
    _coverImg =[[FLAnimatedImageView alloc] initWithFrame:self.frame];
    [self addSubview:_coverImg];
    _coverImg.userInteractionEnabled =YES;
    
    UITapGestureRecognizer *tap =[[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(adClickAction)];
    [_coverImg addGestureRecognizer:tap];
    
    [_coverImg sd_setImageWithURL:[NSURL URLWithString:@"https://www.baidu.com/img/bd_logo1.png"]];
    _countDownCode = [JKCountDownButton buttonWithType:UIButtonTypeCustom];
    _countDownCode.frame = CGRectMake(self.frame.size.width-120, 30 , 100, 32);
    [_countDownCode setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
    [_countDownCode setTitle:@"s" forState:UIControlStateNormal];
    _countDownCode.layer.cornerRadius =16;
    _countDownCode.layer.borderColor =[UIColor redColor].CGColor;
    _countDownCode.backgroundColor =[UIColor whiteColor];
    [self addSubview:_countDownCode];
    
    [_countDownCode countDownButtonHandler:^(JKCountDownButton*sender, NSInteger tag) {
        sender.enabled = NO;
        
        [sender startCountDownWithSecond:5];
        
        [sender countDownChanging:^NSString *(JKCountDownButton *countDownButton,NSUInteger second) {
            NSString *title;
            if (second<=0) {
                if (self.adClickCallBack) {
                    self.adClickCallBack();
                }
            } else {
                title = [NSString stringWithFormat:@"%zds",second];
            }
            return title;
        }];
        [sender countDownFinished:^NSString *(JKCountDownButton *countDownButton, NSUInteger second) {
            countDownButton.enabled = NO;
            return @"进入";
            
        }];
        
    }];
    
    [_countDownCode startCountDownWithSecond:5];
   
}

- (void)adClickAction {
    NSLog(@"________________________");
}


// 启动广告逻辑 预留接口
- (void)netLoadRequest {
    AFHTTPSessionManager *manage =[AFHTTPSessionManager manager];
    [manage GET:nil parameters:nil progress:^(NSProgress * _Nonnull downloadProgress) {
        
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        
    }];
}


@end
