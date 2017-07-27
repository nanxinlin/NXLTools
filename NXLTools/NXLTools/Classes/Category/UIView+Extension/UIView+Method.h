//
//  UIView+Method.h
//  NXLTools
//
//  Created by 南鑫林 on 2017/7/27.
//  Copyright © 2017年 nanxinlin. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger,LQQSideType) {
    kLQQSideTypeTop    = 0,
    kLQQSideTypeLeft   = 1,
    kLQQSideTypeBottom = 2,
    kLQQSideTypeRight  = 3,
    kLQQSideTypeLeftTop = 4,
    kLQQSideTypeLeftBottom = 5,
    kLQQSideTypeRightTop = 6,
    kLQQSideTypeRightBottom = 7,
    kLQQSideTypeLeftTopAndRightBottom = 8,
    kLQQSideTypeRightTopAndLeftBottom = 9,
    kLQQSideTypeAll = 10,
    
};
@interface UIView (Method)
/**
 *  16-02-20 22:02:52
 *
 *  设置不同边的圆角
 *
 *  @param sideType 圆角类型
 *  @param cornerRadius 圆角半径
 */
- (void)cornerSideType:(LQQSideType)sideType withCornerRadius:(CGFloat)cornerRadius;
@end
