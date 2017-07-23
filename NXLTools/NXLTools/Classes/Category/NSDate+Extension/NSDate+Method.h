//
//  NSDate+Method.h
//  NXLTools
//
//  Created by 南鑫林 on 2017/7/23.
//  Copyright © 2017年 nanxinlin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Method)

#pragma mark - NSString转NSDate
/**
 *  NSString转NSDate
 *
 *  @param dateString 日期字符串
 *
 *  @return 日期
 */
- (NSDate *)dateFromString:(NSString *)dateString;

#pragma mark - NSDate转NSString
/**
 *  NSDate转NSString
 *
 *  @param date 日期
 *
 *  @return 日期字符串
 */
- (NSString *)stringFromDate:(NSDate *)date;

#pragma mark - 分钟转换(默认是显示小时)
/**
 分钟转换(默认是显示小时)
 
 @param totalSecond 总时间
 */
+ (NSString *)secondFormatTime:(NSInteger)totalSecond;

#pragma mark - 分钟时间转换
/**
 分钟时间转换
 
 @param totalSecond 总时间
 @param hasHour 是不是显示小时 e.g. 100:10   or  1:40:10
 */
+ (NSString *)secondFormatTime:(NSInteger)totalSecond hasHour:(BOOL)hasHour;

#pragma mark - 时间格式转换
/**
 时间合适转换
 
 @param dateStr 当前时间
 @param dateFormat 原格式
 @param targetFormat 转换格式
 */
+ (NSString *)date:(NSString *)dateStr dateFormat:(NSString *)dateFormat withFormat:(NSString *)targetFormat;

#pragma mark - 通过时间戳格式化时间
/**
 通过时间戳格式化时间
 
 @param timeStamp 时间戳
 @param format 时间格式
 */
+ (NSString *)dateWithTimeStamp:(NSString *)timeStamp format:(NSString *)format;

#pragma mark - 时间字符串的格式化
/**
 时间字符串的格式化
 
 @param format 时间格式
 e.g. yyyy-MM-dd  ->   2017-2-28
 */
- (NSString *)dateWithFormat:(NSString *)format;

#pragma mark - 时间字符串的格式化
/**
 获取当前时间的信息,年,月,日,时,分,秒,星期,类型,等
 
 */
+ (NSInteger)getCurrentYear;    // 年
+ (NSInteger)getCurrentMounth;  // 月
+ (NSInteger)getCurrentDay;     // 日
+ (NSInteger)getCurrentHour;    // 小时
+ (NSInteger)getCurrentMinute;  // 分钟
+ (NSInteger)getCurrentSecond;  // 秒
+ (NSInteger)getCurrentWeekday; //星期
+ (NSDateComponents *)getCurrentDateDetail; //当前时间的类型
#pragma mark - 时间字符串的格式化
/**
 获取当前时间跟指定的时间做比较
 return
 */
- (NSString *)compareCurrentTime:(NSString *)str dateFormat:(NSString *)dataFormat withTurnFormat:(NSString *)turnFormat;

#pragma mark - Other
#pragma mark - 计算这个月有多少天
/**
 计算这个月有多少天
 
 @return 天数
 */
- (NSUInteger)numberOfDaysInCurrentMonth;

#pragma mark - 获取这个月有多少周
/**
 获取这个月有多少周
 
 @return 周数
 */
- (NSUInteger)numberOfWeeksInCurrentMonth;

#pragma mark - 计算这个月的第一天是礼拜几
/**
 计算这个月的第一天是礼拜几
 
 @return 礼拜几
 */
- (NSUInteger)weeklyOrdinality;

#pragma mark - 计算这个月最开始的一天
/**
 计算这个月最开始的一天
 
 @return 最开始的一天
 */
- (NSDate *)firstDayOfCurrentMonth;

#pragma mark - 计算这个月最后的一天
/**
 计算这个月最后的一天
 
 @return 最后的一天
 */
- (NSDate *)lastDayOfCurrentMonth;

#pragma mark - 上一个月
/**
 上一个月
 
 @return 上一个月
 */
- (NSDate *)dayInThePreviousMonth;

#pragma mark - 下一个月
/**
 下一个月
 
 @return 下一个月
 */
- (NSDate *)dayInTheFollowingMonth;

#pragma mark - 获取当前日期之后的几个月
/**
 获取当前日期之后的几个月
 
 @param month 当前月
 @return 当前日期之后的几个月
 */
- (NSDate *)dayInTheFollowingMonth:(int)month;

#pragma mark - 获取当前日期之后的几天
/**
 获取当前日期之后的几天
 
 @param day 当前天
 @return 当前日期之后的几天
 */
- (NSDate *)dayInTheFollowingDay:(int)day;

#pragma mark - 获取年月日对象
/**
 获取年月日对象
 
 @return 年月日对象
 */
- (NSDateComponents *)YMDComponents;

#pragma mark - 两个日期之间相差多少月
/**
 两个日期之间相差多少月
 
 @param today 第一个日期
 @param beforday 第二个日期
 @return 两个日期之间相差多少月
 */
+ (int)getDayNumbertoDay:(NSDate *)today beforDay:(NSDate *)beforday;

#pragma mark - 周日是“1”，周一是“2”...
/**
 周日是“1”，周一是“2”...
 */
-(int)getWeekIntValueWithDate;

#pragma mark - 判断日期是今天,明天,后天,周几
/**
 判断日期是今天,明天,后天,周几
 */
-(NSString *)compareIfTodayWithDate;

#pragma mark - 通过数字返回星期几
/**
 通过数字返回星期几
 
 @param week 周日是“1”，周一是“2”...
 */
+(NSString *)getWeekStringFromInteger:(int)week;
@end
