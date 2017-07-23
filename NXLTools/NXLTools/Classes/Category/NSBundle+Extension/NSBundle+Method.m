//
//  NSBundle+Method.m
//  NXLTools
//
//  Created by 南鑫林 on 2017/7/23.
//  Copyright © 2017年 nanxinlin. All rights reserved.
//

#import "NSBundle+Method.h"

@implementation NSBundle (Method)

#pragma mark -  获取APP的Version信息(获取APP版本号)
/**
 获取APP的Version信息(获取APP版本号)
 */
+ (NSString *)appVersion {
    NSString *version = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"];
    return version;
}

#pragma mark -  获取APP的Build的信息
/**
 获取APP的Build的信息
 */
+ (NSString *)appBuild {
    NSString *version = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleVersion"];
    return version;
}

@end
