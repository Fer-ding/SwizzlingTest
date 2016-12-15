//
//  UIButton+Swizzling.h
//  SwizzlingTest
//
//  Created by YueHui on 16/12/15.
//  Copyright © 2016年 LeapDing. All rights reserved.
//

/*
 *  防止按钮重复暴力点击
 */


#import <UIKit/UIKit.h>

//默认时间间隔
#define defaultInterval 1
@interface UIButton (Swizzling)
//点击间隔
@property (nonatomic, assign) NSTimeInterval timeInterval;
//用于设置单个按钮不需要被hook
@property (nonatomic, assign) BOOL isIgnore;

@end
