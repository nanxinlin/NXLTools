//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//
//
//  PrefixHeader.pch
//  NXLTools
//
//  Created by 南鑫林 on 2017/7/22.
//  Copyright © 2017年 nanxinlin. All rights reserved.
//


// Include any system framework and library headers here that should be included in all compilation units.
// You will also need to set the Prefix Header build setting of one or more of your targets to reference this file.
#import "AppMacro.h"
#import "ColorMacro.h"
#import "Notification.h"
#import "NetWorkMacro.h"

//define this constant if you want to use Masonry without the 'mas_' prefix
#define MAS_SHORTHAND
//define this constant if you want to enable auto-boxing for default syntax
#define MAS_SHORTHAND_GLOBALS
#import <Masonry/Masonry.h> //关于布局
#import <AFNetworking/AFNetworking.h> //网络请求
#import <MJExtension/MJExtension.h> //关键明杰解析
#import <MJRefresh/MJRefresh.h> //明杰刷新
#import <IQKeyboardManager/IQKeyboardManager.h> //键盘回收
#import <SDCycleScrollView/SDCycleScrollView.h> //轮播图
#import <SVProgressHUD/SVProgressHUD.h> //关于提示
#import <Toast/UIView+Toast.h> //仿照Android的提示框
#import <MBProgressHUD/MBProgressHUD.h> //关于
#import <SDWebImage/UIImageView+WebCache.h> //关于图片转换
#import <SDWebImage/UIButton+WebCache.h> //button图片
#import <SDWebImage/FLAnimatedImageView+WebCache.h> //加载gif图
#import <XHLaunchAd/XHLaunchAd.h> //启动广告图
#import <WebViewJavascriptBridge/WebViewJavascriptBridge.h> //加载H5页面使用的
#import <JLRoutes/JLRoutes.h> //分享跳转到对应的页面
#import <YYKit/YYKit.h>
#import <pop/POP.h>
/*YYKit YYModel — 高性能的 iOS JSON 模型框架。
 YYCache — 高性能的 iOS 缓存框架。
 YYImage — 功能强大的 iOS 图像框架。
 YYWebImage — 高性能的 iOS 异步图像加载框架。
 YYText — 功能强大的 iOS 富文本框架。
 YYKeyboardManager — iOS 键盘监听管理工具。
 YYDispatchQueuePool — iOS 全局并发队列管理工具。
 YYAsyncLayer — iOS 异步绘制与显示的工具。
 YYCategories — 功能丰富的 Category 类型工具库。*/
#import "YBHttpTool.h"
#import "MTVersionHelper.h"
#import "DWScrollPictures.h"
#import "TTAlertView.h"
#import "TTHUDMessage.h"
#import "TTStarView.h"
