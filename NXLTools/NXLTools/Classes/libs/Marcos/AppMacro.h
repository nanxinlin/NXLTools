//
//  AppMacro.h
//  Customer
//
//  Created by duanshenghui on 16/8/30.
//  Copyright © 2016年 南鑫林. All rights reserved.
//

#ifndef AppMacro_h
#define AppMacro_h

#define AppBundleId  @"" //根据项目来定

//------------------------------------获取屏幕------------------------------------------

//屏幕大小
#define kScreenFrame ([UIScreen mainScreen].applicationFrame)
//屏幕宽度
#define kScreenWidth ([UIScreen mainScreen].bounds.size.width)
//屏幕高度
#define kScreenheight ([UIScreen mainScreen].bounds.size.height)
//Window
#define key_Window  [[UIApplication sharedApplication].delegate window]
//UIDevice
#define ISIPAD ([UIDevice currentDevice].userInterfaceIdiom == UIUserInterfaceIdiomPad)
#define IS320Screen (MAIN_SCREEN.bounds.size.width == 320)
//横向比例
#define kWidthScale(number) (kScreenWidth/375.*(number/2))
//纵向比例
#define kHeightScale(number) (kScreenheight/667.*(number/2))
//------------------------------------手机版本------------------------------------------
//获取当前苹果系统
#define IOS8 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8)

#define SYSTEM_VERSION_GREATER_THAN(v) ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)

//------------------------------------仿安卓提示弹窗------------------------------------------
#define kToastCenter(name) [[UIApplication sharedApplication].keyWindow makeToast:name duration:1.0 position:CSToastPositionCenter]
#define kToastTop(name) [[UIApplication sharedApplication].keyWindow makeToast:name duration:1.0 position:CSToastPositionTop]
#define kToastBottom(name) [[UIApplication sharedApplication].keyWindow makeToast:name duration:1.0 position:CSToastPositionBottom]

//------------------------------------加载图片------------------------------------------
#define kImage(name) [UIImage imageNamed:name]
#define kImageUrl(imageViewname,name) [imageViewname sd_setImageWithURL:[NSURL URLWithString:name] placeholderImage:[UIImage imageNamed:@""]]
//------------------------------------钱数转换------------------------------------------
#define kMoney(name) [NSString stringWithFormat:@"%.2f",[name floatValue]]
//定义了一个__weak的self_weak_变量
#define kWeakSelf(weakSelf)   __weak __typeof(&*self) weakSelf = self;
//局域定义了一个__strong的self指针指向self_weak
#define kStrongSelf(strongSelf)  __strong __typeof(&*self) strongSelf = weakSelf;
// NSURL
#define kUrlWithString(url)  [NSURL URLWithString:url]
//NSString
#define kEmpty_str @""
#define kStr_IsNULL_OR_Empty(str)       (str == nil || [str isEqualToString:KEmpty_str] || [str isEqual:[NSNull null]])
#define kStr_IsNOT_NULL_OR_Empty(str)   (str != nil && ![str isEqualToString:KEmpty_str] && ![str isEqual:[NSNull null]])
//CacheFolder
#define kCachePath [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) lastObject]
#define kDocumentPath [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject]
#define kFolder_Path_With_FolderName(folder) [kCachesPath stringByAppendingPathComponent:folder]

//NSLog
#ifdef DEBUG
#define NXLLog(...) NSLog(__VA_ARGS__)
#else
#define NXLLog(...)
#endif

#endif /* AppMacro_h */
