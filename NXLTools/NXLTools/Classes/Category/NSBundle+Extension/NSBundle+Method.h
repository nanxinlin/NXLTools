//
//  NSBundle+Method.h
//  NXLTools
//
//  Created by 南鑫林 on 2017/7/23.
//  Copyright © 2017年 nanxinlin. All rights reserved.
//

#import <Foundation/Foundation.h>
// NSBoundle的信息设置可以点击项目->TARGETS->当前项目->General->Identity->Version or Build

@interface NSBundle (Method)

#pragma mark -  获取APP的Version信息(获取APP版本号)
/**
 获取APP的Version信息(获取APP版本号)
 */
+ (NSString *)appVersion;

#pragma mark -  获取APP的Build的信息
/**
 获取APP的Build的信息
 */
+ (NSString *)appBuild;
@end
