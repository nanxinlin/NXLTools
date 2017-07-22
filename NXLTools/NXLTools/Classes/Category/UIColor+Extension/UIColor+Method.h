//
//  UIColor+Method.h
//  SalonAuction
//
//  Created by 李大卫 on 16/5/30.
//  Copyright © 2016年 hy_les. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIColor (Method)


#pragma mark - 16进制转颜色
/**
 *  @author hy_les, 16-05-30 18:05:08
 *
 *  根据16进制字符串获取颜色,默认透明度为1
 *
 *  @param hexStr 16进制字符串
 *
 *  @return 颜色
 */
+ (UIColor *)colorWithHexString:(NSString *)hexStr;


/**
 *  @author hy_les, 16-05-30 18:05:05
 *
 *  根据16进制字符串获取颜色
 *
 *  @param hexStr 16进制字符串
 *  @param alpha  透明度
 *
 *  @return 颜色
 */
+ (UIColor *)colorWithHexString:(NSString *)hexStr alpha:(CGFloat)alpha;


@end
