//
//  UIView+FrameExtension.h
//  解析字典
//
//  Created by 王朋 on 16/2/25.
//  Copyright © 2016年 李杨. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (FrameExtension)
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;

/** 控件最左边那根线的位置(minX的位置) */
@property (nonatomic, assign) CGFloat left;
/** 控件最右边那根线的位置(maxX的位置) */
@property (nonatomic, assign) CGFloat right;
/** 控件最顶部那根线的位置(minY的位置) */
@property (nonatomic, assign) CGFloat top;
/** 控件最底部那根线的位置(maxY的位置) */
@property (nonatomic, assign) CGFloat bottom;

@end
