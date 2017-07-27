//
//  UIView+Method.m
//  NXLTools
//
//  Created by 南鑫林 on 2017/7/27.
//  Copyright © 2017年 nanxinlin. All rights reserved.
//

#import "UIView+Method.h"

@implementation UIView (Method)
- (void)cornerSideType:(LQQSideType)sideType withCornerRadius:(CGFloat)cornerRadius
{
    
    CGSize cornerSize = CGSizeMake(cornerRadius, cornerRadius);
    UIBezierPath *maskPath;
    
    switch (sideType) {
        case kLQQSideTypeTop: //上
        {
            maskPath = [UIBezierPath bezierPathWithRoundedRect:self.bounds
                                             byRoundingCorners:(UIRectCornerTopLeft|UIRectCornerTopRight)
                                                   cornerRadii:cornerSize];
        }
            break;
        case kLQQSideTypeLeft: //左
        {
            maskPath = [UIBezierPath bezierPathWithRoundedRect:self.bounds
                                             byRoundingCorners:(UIRectCornerTopLeft|UIRectCornerBottomLeft)
                                                   cornerRadii:cornerSize];
        }
            break;
        case kLQQSideTypeBottom: //下
        {
            maskPath = [UIBezierPath bezierPathWithRoundedRect:self.bounds
                                             byRoundingCorners:(UIRectCornerBottomLeft|UIRectCornerBottomRight)
                                                   cornerRadii:cornerSize];
        }
            break;
        case kLQQSideTypeRight: //右
        {
            maskPath = [UIBezierPath bezierPathWithRoundedRect:self.bounds
                                             byRoundingCorners:(UIRectCornerTopRight|UIRectCornerBottomRight)
                                                   cornerRadii:cornerSize];
        }
            break;
        case kLQQSideTypeLeftTop: //上左
        {
            maskPath = [UIBezierPath bezierPathWithRoundedRect:self.bounds
                                             byRoundingCorners:UIRectCornerTopLeft
                                                   cornerRadii:cornerSize];
        }
            break;
        case kLQQSideTypeLeftBottom: //下左
        {
            maskPath = [UIBezierPath bezierPathWithRoundedRect:self.bounds
                                             byRoundingCorners:UIRectCornerBottomLeft
                                                   cornerRadii:cornerSize];
        }
            break;
        case kLQQSideTypeRightTop: //上右
        {
            maskPath = [UIBezierPath bezierPathWithRoundedRect:self.bounds
                                             byRoundingCorners:UIRectCornerTopRight
                                                   cornerRadii:cornerSize];
        }
            break;
        case kLQQSideTypeRightBottom: //下右
        {
            maskPath = [UIBezierPath bezierPathWithRoundedRect:self.bounds
                                             byRoundingCorners:UIRectCornerBottomRight
                                                   cornerRadii:cornerSize];
        }
            break;
        case kLQQSideTypeLeftTopAndRightBottom: //上左下右
        {
            maskPath = [UIBezierPath bezierPathWithRoundedRect:self.bounds
                                             byRoundingCorners:UIRectCornerBottomRight|UIRectCornerTopLeft
                                                   cornerRadii:cornerSize];
        }
            break;
        case kLQQSideTypeRightTopAndLeftBottom: //上右下左
        {
            maskPath = [UIBezierPath bezierPathWithRoundedRect:self.bounds
                                             byRoundingCorners:UIRectCornerBottomLeft|UIRectCornerTopRight
                                                   cornerRadii:cornerSize];
        }
            break;
        default:
        {
            maskPath = [UIBezierPath bezierPathWithRoundedRect:self.bounds
                                             byRoundingCorners:UIRectCornerAllCorners
                                                   cornerRadii:cornerSize];
        }
            break;
    }
    
    // Create the shape layer and set its path
    CAShapeLayer *maskLayer = [CAShapeLayer layer];
    maskLayer.frame = self.bounds;
    maskLayer.path = maskPath.CGPath;
    
    // Set the newly created shape layer as the mask for the image view's layer
    self.layer.mask = maskLayer;
    
    [self.layer setMasksToBounds:YES];
}

@end
