//
//  NSDate+Method.m
//  NXLTools
//
//  Created by 南鑫林 on 2017/7/23.
//  Copyright © 2017年 nanxinlin. All rights reserved.
//

#import "NSDate+Method.h"

@implementation NSDate (Method)
#pragma mark - NSString转NSDate
/**
 *  NSString转NSDate
 *
 *  @param dateString 日期字符串
 *
 *  @return 日期
 */
- (NSDate *)dateFromString:(NSString *)dateString
{
    
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    
    //    [dateFormatter setDateFormat: @"yyyy-MM-dd HH:mm:ss"];
    [dateFormatter setDateFormat: @"yyyy-MM-dd"];
    
    NSDate *destDate= [dateFormatter dateFromString:dateString];
    
    return destDate;
    
}


#pragma mark - NSDate转NSString
/**
 *  NSDate转NSString
 *
 *  @param date 日期
 *
 *  @return 日期字符串
 */
- (NSString *)stringFromDate:(NSDate *)date
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    
    //zzz表示时区，zzz可以删除，这样返回的日期字符将不包含时区信息。
    
    //    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss zzz"];
    [dateFormatter setDateFormat:@"yyyy-MM-dd"];
    
    NSString *destDateString = [dateFormatter stringFromDate:date];
    
    return destDateString;
}

#pragma mark - 分钟转换(默认是显示小时)
/**
 分钟转换(默认是显示小时)
 
 @param totalSecond 总时间
 */
+ (NSString *)secondFormatTime:(NSInteger)totalSecond {
    return [self secondFormatTime:totalSecond hasHour:YES];
}

#pragma mark - 分钟时间转换
/**
 分钟时间转换
 
 @param totalSecond 总时间
 @param hasHour 是不是显示小时 e.g. 100:10   or  1:40:10
 */
+ (NSString *)secondFormatTime:(NSInteger)totalSecond hasHour:(BOOL)hasHour {
    NSInteger seconds = totalSecond % 60;
    NSInteger minutes = (totalSecond / 60) % 60;
    NSInteger hours = totalSecond / 3600;
    NSString *result;
    if (hasHour) {
        result = [NSString stringWithFormat:@"%02ld:%02ld:%02ld",(long)hours,(long)minutes,(long)seconds];
    } else {
        result = [NSString stringWithFormat:@"%02ld:%02ld",(long)minutes,(long)seconds];
    }
    return result;
}

#pragma mark - 时间格式转换
/**
 时间合适转换
 
 @param dateStr 当前时间
 @param dateFormat 原格式
 @param targetFormat 转换格式
 */
+ (NSString *)date:(NSString *)dateStr dateFormat:(NSString *)dateFormat withFormat:(NSString *)targetFormat {
    if (!dateStr) {
        return @"";
    }
    NSDateFormatter *formater = [[NSDateFormatter alloc] init];
    [formater setDateFormat:dateFormat];
    NSDate *date = [formater dateFromString:dateStr];
    if (!date) {
        return @"";
    }
    return [date dateWithFormat:targetFormat];
}

#pragma mark - 通过时间戳格式化时间
/**
 通过时间戳格式化时间
 
 @param timeStamp 时间戳
 @param format 时间格式
 */
+ (NSString *)dateWithTimeStamp:(NSString *)timeStamp format:(NSString *)format {
    return [self getTimeFormatWithTimestamp:timeStamp format:format];
}

+ (NSString *)getTimeFormatWithTimestamp:(NSString *)timestamp format:(NSString *)format {
    if (!timestamp || !format ) {
        return @"";
    }
    NSDateFormatter* formatter = [[NSDateFormatter alloc] init];
    formatter.timeZone = [NSTimeZone timeZoneWithName:@"beijing"];
    [formatter setDateStyle:NSDateFormatterMediumStyle];
    [formatter setTimeStyle:NSDateFormatterShortStyle];
    [formatter setDateFormat:format];
    NSDate *date = [NSDate dateWithTimeIntervalSince1970:([timestamp doubleValue]/ 1000.0)];
    NSString *dateString = [formatter stringFromDate:date];
    return dateString;
}

#pragma mark - 时间字符串的格式化
/**
 时间字符串的格式化
 
 @param format 时间格式
 e.g. yyyy-MM-dd  ->   2017-2-28
 */
- (NSString *)dateWithFormat:(NSString *)format {
    NSDateFormatter *formater = [[NSDateFormatter alloc] init];
    [formater setDateFormat:format];
    return [formater stringFromDate:self];
}

#pragma mark - 时间字符串的格式化
/**
 获取当前时间的信息,年,月,日,时,分,秒,星期,类型,等
 
 */
+ (NSInteger)getCurrentYear {
    return [self getCurrentDateDetail].year;
}

+ (NSInteger)getCurrentMounth {
    return [self getCurrentDateDetail].month;
}

+ (NSInteger)getCurrentDay {
    return [self getCurrentDateDetail].day;
}

+ (NSInteger)getCurrentHour {
    return [self getCurrentDateDetail].hour;
}

+ (NSInteger)getCurrentMinute {
    return [self getCurrentDateDetail].minute;
}

+ (NSInteger)getCurrentSecond {
    return [self getCurrentDateDetail].second;
}

+ (NSInteger)getCurrentWeekday {
    return [self getCurrentDateDetail].weekday;
}

+ (NSDateComponents *)getCurrentDateDetail {
    NSCalendar *gregorian = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];
    NSDate* dt = [NSDate date];
    
    unsigned unitFlags = NSCalendarUnitYear |
    NSCalendarUnitMonth |  NSCalendarUnitDay |
    NSCalendarUnitHour |  NSCalendarUnitMinute |
    NSCalendarUnitSecond | NSCalendarUnitWeekday;
    NSDateComponents* comp = [gregorian components: unitFlags fromDate:dt];
    return comp;
}

- (NSString *)compareCurrentTime:(NSString *)str dateFormat:(NSString *)dataFormat withTurnFormat:(NSString *)turnFormat {
    
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:dataFormat];
    NSDate *timeDate = [dateFormatter dateFromString:str];
    NSDate *currentDate = [NSDate date];
    NSTimeInterval timeInterval = [currentDate timeIntervalSinceDate:timeDate];
    long temp = 0;
    NSString *result;
    if (timeInterval/60 < 1)
    {
        result = [NSString stringWithFormat:@"刚刚"];
    }
    else if((temp = timeInterval/60) <60){
        result = [NSString stringWithFormat:@"%ld分钟前",temp];
    }
    else if((temp = temp/60) <24){
        result = [NSString stringWithFormat:@"%ld小时前",temp];
    }else {
        result = [NSDate date:str dateFormat:dataFormat withFormat:turnFormat];
    }
//    else if((temp = temp/24) <30){
//        result = [NSString stringWithFormat:@"%ld天前",temp];
//    }
//    else if((temp = temp/30) <12){
//        result = [NSString stringWithFormat:@"%ld月前",temp];
//    }
//    else{
//        temp = temp/12;
//        result = [NSString stringWithFormat:@"%ld年前",temp];
//    }
    return  result;
}

#pragma mark - Other
#pragma mark - 计算这个月有多少天
/**
 计算这个月有多少天
 
 @return 天数
 */
- (NSUInteger)numberOfDaysInCurrentMonth
{
    // 频繁调用 [NSCalendar currentCalendar] 可能存在性能问题
    return [[NSCalendar currentCalendar] rangeOfUnit:NSCalendarUnitDay inUnit:NSCalendarUnitMonth forDate:self].length;
}

#pragma mark - 获取这个月有多少周
/**
 获取这个月有多少周
 
 @return 周数
 */
- (NSUInteger)numberOfWeeksInCurrentMonth
{
    NSUInteger weekday = [[self firstDayOfCurrentMonth] weeklyOrdinality];
    NSUInteger days = [self numberOfDaysInCurrentMonth];
    NSUInteger weeks = 0;
    
    if (weekday > 1) {
        weeks += 1, days -= (7 - weekday + 1);
    }
    
    weeks += days / 7;
    weeks += (days % 7 > 0) ? 1 : 0;
    
    return weeks;
}

#pragma mark - 计算这个月的第一天是礼拜几
/**
 计算这个月的第一天是礼拜几
 
 @return 礼拜几
 */
- (NSUInteger)weeklyOrdinality
{
    return [[NSCalendar currentCalendar] ordinalityOfUnit:NSCalendarUnitDay inUnit:NSCalendarUnitWeekday forDate:self];
}

#pragma mark - 计算这个月最开始的一天
/**
 计算这个月最开始的一天
 
 @return 最开始的一天
 */
- (NSDate *)firstDayOfCurrentMonth
{
    NSDate *startDate = nil;
    BOOL ok = [[NSCalendar currentCalendar] rangeOfUnit:NSCalendarUnitMonth startDate:&startDate interval:NULL forDate:self];
    NSAssert1(ok, @"Failed to calculate the first day of the month based on %@", self);
    return startDate;
}

#pragma mark - 计算这个月最后的一天
/**
 计算这个月最后的一天
 
 @return 最后的一天
 */
- (NSDate *)lastDayOfCurrentMonth
{
    NSCalendarUnit calendarUnit = NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay;
    NSDateComponents *dateComponents = [[NSCalendar currentCalendar] components:calendarUnit fromDate:self];
    dateComponents.day = [self numberOfDaysInCurrentMonth];
    return [[NSCalendar currentCalendar] dateFromComponents:dateComponents];
}

#pragma mark - 上一个月
/**
 上一个月
 
 @return 上一个月
 */
- (NSDate *)dayInThePreviousMonth
{
    NSDateComponents *dateComponents = [[NSDateComponents alloc] init];
    dateComponents.month = -1;
    return [[NSCalendar currentCalendar] dateByAddingComponents:dateComponents toDate:self options:0];
}

#pragma mark - 下一个月
/**
 下一个月
 
 @return 下一个月
 */
- (NSDate *)dayInTheFollowingMonth
{
    NSDateComponents *dateComponents = [[NSDateComponents alloc] init];
    dateComponents.month = 1;
    return [[NSCalendar currentCalendar] dateByAddingComponents:dateComponents toDate:self options:0];
}

#pragma mark - 获取当前日期之后的几个月
/**
 获取当前日期之后的几个月
 
 @param month 当前月
 @return 当前日期之后的几个月
 */
- (NSDate *)dayInTheFollowingMonth:(int)month
{
    NSDateComponents *dateComponents = [[NSDateComponents alloc] init];
    dateComponents.month = month;
    return [[NSCalendar currentCalendar] dateByAddingComponents:dateComponents toDate:self options:0];
}

#pragma mark - 获取当前日期之后的几天
/**
 获取当前日期之后的几天
 
 @param day 当前天
 @return 当前日期之后的几天
 */
- (NSDate *)dayInTheFollowingDay:(int)day
{
    NSDateComponents *dateComponents = [[NSDateComponents alloc] init];
    dateComponents.day = day;
    return [[NSCalendar currentCalendar] dateByAddingComponents:dateComponents toDate:self options:0];
}

#pragma mark - 获取年月日对象
/**
 获取年月日对象
 
 @return 年月日对象
 */
- (NSDateComponents *)YMDComponents
{
    return [[NSCalendar currentCalendar] components:
            NSCalendarUnitYear|
            NSCalendarUnitMonth|
            NSCalendarUnitDay|
            NSCalendarUnitWeekday fromDate:self];
}

#pragma mark - 两个日期之间相差多少月
/**
 两个日期之间相差多少月
 
 @param today 第一个日期
 @param beforday 第二个日期
 @return 两个日期之间相差多少月
 */
+ (int)getDayNumbertoDay:(NSDate *)today beforDay:(NSDate *)beforday
{
    
    NSCalendar *calendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierGregorian];//日历控件对象
    NSDateComponents *components = [calendar components:NSCalendarUnitDay fromDate:today toDate:beforday options:0];
    //    NSDateComponents *components = [calendar components:NSMonthCalendarUnit|NSDayCalendarUnit fromDate:today toDate:beforday options:0];
    int day = (int)[components day];//两个日历之间相差多少月//    NSInteger days = [components day];//两个之间相差几天
    return day;
}

#pragma mark - 周日是“1”，周一是“2”...
/**
 周日是“1”，周一是“2”...
 */
- (int)getWeekIntValueWithDate
{
    int weekIntValue;
    
    NSCalendar *calendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierChinese];
    NSDateComponents *comps= [calendar components:(NSCalendarUnitYear |
                                                   NSCalendarUnitMonth |
                                                   NSCalendarUnitDay |
                                                   NSCalendarUnitWeekday) fromDate:self];
    return weekIntValue = (int)[comps weekday];
}

#pragma mark - 判断日期是今天,明天,后天,周几
/**
 判断日期是今天,明天,后天,周几
 */
-(NSString *)compareIfTodayWithDate
{
    NSDate *todate = [NSDate date];//今天
    NSCalendar *calendar = [[NSCalendar alloc] initWithCalendarIdentifier:NSCalendarIdentifierChinese];
    NSDateComponents *comps_today= [calendar components:(NSCalendarUnitYear |
                                                         NSCalendarUnitMonth |
                                                         NSCalendarUnitDay |
                                                         NSCalendarUnitWeekday) fromDate:todate];
    
    
    NSDateComponents *comps_other= [calendar components:(NSCalendarUnitYear |
                                                         NSCalendarUnitMonth |
                                                         NSCalendarUnitDay |
                                                         NSCalendarUnitWeekday) fromDate:self];
    
    
    //获取星期对应的数字
    int weekIntValue = [self getWeekIntValueWithDate];
    
    if (comps_today.year == comps_other.year &&
        comps_today.month == comps_other.month &&
        comps_today.day == comps_other.day) {
        return @"今天";
        
    }else if (comps_today.year == comps_other.year &&
              comps_today.month == comps_other.month &&
              (comps_today.day - comps_other.day) == -1){
        return @"明天";
        
    }else if (comps_today.year == comps_other.year &&
              comps_today.month == comps_other.month &&
              (comps_today.day - comps_other.day) == -2){
        return @"后天";
        
    }else{
        //直接返回当时日期的字符串(这里让它返回空)
        return [NSDate getWeekStringFromInteger:weekIntValue];//周几
    }
}

#pragma mark - 通过数字返回星期几
/**
 通过数字返回星期几
 
 @param week 周日是“1”，周一是“2”...
 */
+(NSString *)getWeekStringFromInteger:(int)week
{
    NSString *str_week;
    
    switch (week) {
        case 1:
            str_week = @"周日";
            break;
        case 2:
            str_week = @"周一";
            break;
        case 3:
            str_week = @"周二";
            break;
        case 4:
            str_week = @"周三";
            break;
        case 5:
            str_week = @"周四";
            break;
        case 6:
            str_week = @"周五";
            break;
        case 7:
            str_week = @"周六";
            break;
    }
    return str_week;
}
@end
