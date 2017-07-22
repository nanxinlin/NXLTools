//
//  NSString+Method.h
//  SalonAuction
//
//  Created by 李大卫 on 16/5/30.
//  Copyright © 2016年 hy_les. All rights reserved.
//

#import <UIKit/UIKit.h>
#define ALPHA	@"ABCDEFGHIJKLMNOPQRSTUVWXYZ#"
char pinyinFirstLetter(unsigned short hanzi);

@interface NSString (Method)

#pragma mark - 是否包含某个字符串
/**
 *  @author hy_les, 16-06-13 14:06:07
 *
 *   是否包含字符串
 *
 *  @param string 是否包含字符串
 *
 *  @return  yes：包含
 */
- (BOOL)containsString:(NSString *)string;

#pragma mark - 得到当前时间
/**
 *  @author hy_les, 16-06-13 14:06:07
 *
 *   得到当前时间
 *
 *  @return 得到当前时间
 */
+ (NSString *)currentDateString;

#pragma mark - 32位 小写
/**
 *  MD5加密, 32位 小写
 *
 *  @param str 传入要加密的字符串
 *
 *  @return 返回加密后的字符串
 */
+ (NSString *)MD5ForLower32Bate:(NSString *)str;

#pragma mark - 32位 大写
/**
 *  MD5加密, 32位 大写
 *
 *  @param str 传入要加密的字符串
 *
 *  @return 返回加密后的字符串
 */
+ (NSString *)MD5ForUpper32Bate:(NSString *)str;

#pragma mark - 16位 小写
/**
 *  MD5加密, 16位 小写
 *
 *  @param str 传入要加密的字符串
 *
 *  @return 返回加密后的字符串
 */
+ (NSString *)MD5ForLower16Bate:(NSString *)str;

#pragma mark - 16位 大写
/**
 *  MD5加密, 16位 大写
 *
 *  @param str 传入要加密的字符串
 *
 *  @return 返回加密后的字符串
 */
+ (NSString *)MD5ForUpper16Bate:(NSString *)str;

#pragma mark - 生成时间戳
/**
 *  生成时间戳
 *
 *  @return 时间戳字符串
 */
+(NSString *)timeSp;

#pragma mark - 升序
/**
 升序
 
 @return 首字母
 */
- (NSString *)uppercasePinYinFirstLetter;

#pragma mark - 降序
/**
 序
 
 @return 首字母
 */
- (NSString *)lowercasePinYinFirstLetter;
@end
