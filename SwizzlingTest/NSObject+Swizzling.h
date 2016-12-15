//
//  NSObject+Swizzling.h
//  SwizzlingTest
//
//  Created by YueHui on 16/12/15.
//  Copyright © 2016年 LeapDing. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

@interface NSObject (Swizzling)

+ (void)methodSwizzlingWithOriginalSelector:(SEL)originalSelector
                         swizzledSelector:(SEL)swizzledSelector;

@end
