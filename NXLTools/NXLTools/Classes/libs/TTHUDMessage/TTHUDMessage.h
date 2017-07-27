//
//  TTHUDMessage.h
//  TT
//
//  Created by 张福润 on 2017/3/3.
//  Copyright © 2017年 张福润. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, HUDShowTextType) {
    HUDShowTextTypeNone,
    HUDShowTextTypeText,
    HUDShowTextTypeDetailsText,
    HUDShowTextTypeRequestText,
    HUDShowTextTypeUploadText,
    HUDShowTextTypeDeleteText,
    HUDShowTextTypeSendText
};

typedef enum : NSUInteger {
    /// UIActivityIndicatorView.
    HUDShowProgressTypeIndeterminate,
    /// A round, pie-chart like, progress view.
    HUDShowProgressTypeDeterminate,
    /// Horizontal progress bar.
    HUDShowProgressTypeDeterminateHorizontalBar,
    /// Ring-shaped progress view.
    HUDShowProgressTypeAnnularDeterminate,
    /// Shows a custom view.
    HUDShowProgressTypeCustomView,
    /// Shows only labels.
    HUDShowProgressTypeText
} HUDShowProgressType;

typedef enum : NSUInteger {
    HUDShowCompletedTypeInfo,
    HUDShowCompletedTypeCompleted,
    HUDShowCompletedTypeError,
} HUDShowCompletedType;


@interface TTHUDMessage : NSObject

/**
 显示在哪个View

 @param view 显示在哪个View
 */
+ (void)showInView:(UIView *)view;

/**
 显示自定义View

 @param view 显示自定义View
 @param text 显示自定义text
 */
+ (void)showInView:(UIView *)view showText:(NSString *)text;

/**
 显示在哪个View

 @param view 显示在哪个View
 @param detailsText 详情字体
 */
+ (void)showInView:(UIView *)view showDetailsText:(NSString *)detailsText;

/**
 请求数据的提示

 @param view 显示在哪个View
 @param text 进度
 */
+ (void)showInView:(UIView *)view showRequestText:(NSString *)text;

/**
 上传数据的提示
 
 @param view 显示在哪个View
 @param text 上传进度
 */
+ (void)showInView:(UIView *)view showUploadText:(NSString *)text;

/**
 删除数据的提示
 
 @param view 显示在哪个View
 @param text 删除进度
 */
+ (void)showInView:(UIView *)view showDeleteText:(NSString *)text;

/**
 发送数据的提示
 
 @param view 显示在哪个View
 @param text 发送进度
 */
+ (void)showInView:(UIView *)view showSendText:(NSString *)text;

/**
 显示主标题跟副标题

 @param view 显示在哪个View
 @param text 主标题
 @param detailsText 副标题
 */
+ (void)showInView:(UIView *)view showText:(NSString *)text detailsText:(NSString *)detailsText;

/**
 只显示字体

 @param view 显示在哪个View
 @param text 字体
 */
+ (void)showInView:(UIView *)view showTextOnly:(NSString *)text;

/**
 只显示字体

 @param view 显示在哪个View
 @param text 字体
 @param completed 完成的回调
 */
+ (void)showInView:(UIView *)view showTextOnly:(NSString *)text completedBlock:(void(^)())completed;

/**
 显示主标题跟副标题

 @param view 显示在哪个View
 @param text 主标题
 @param detailText 副标题
 @param margin 自间距
 */
+ (void)showInView:(UIView *)view showTextOnly:(NSString *)text detailText:(NSString *)detailText textMargin:(float)margin;

/**
 显示主标题跟副标题
 
 @param view 显示在哪个View
 @param text 主标题
 @param detailText 副标题
 @param margin 自间距
 @param completed 完成的回调
 */
+ (void)showInView:(UIView *)view showTextOnly:(NSString *)text detailText:(NSString *)detailText textMargin:(float)margin completedBlock:(void(^)())completed;


/**
 类型

 @param text 字体
 @param completedType 完成的类型
 */
+ (void)showCompletedText:(NSString *)text withCompletedType:(HUDShowCompletedType)completedType;

/**
 完成的类型

 @param view 显示在哪个View
 @param text 字体
 @param completedType 完成的类型
 */
+ (void)showInView:(UIView *)view showCompletedText:(NSString *)text withCompletedType:(HUDShowCompletedType)completedType;

/**
 完成的类型回调

 @param view 显示在哪个View
 @param text 字体
 @param completedType 完成的类型
 @param completed 完成的回到
 */
+ (void)showInView:(UIView *)view showCompletedText:(NSString *)text withCompletedType:(HUDShowCompletedType)completedType completedBlock:(void(^)())completed;

/**
 显示进度条

 @param view 显示在哪个View
 @param text 字体
 @param progress 显示进度
 */
+ (void)showInView:(UIView *)view showText:(NSString *)text progress:(float)progress;

/**
 显示的进度条的类型

 @param view 显示在哪个View
 @param text 字体
 @param progress 显示进度
 @param progressType 进度条的条理性
 */
+ (void)showInView:(UIView *)view showText:(NSString *)text progress:(float)progress withProgressType:(HUDShowProgressType)progressType;


/**
 <#Description#>

 @param view 显示在哪个View
 @param text 字体
 @param currentCount 当前的数字
 @param totalCount 总共的数字
 */
+ (void)showInView:(UIView *)view showText:(NSString *)text currentCount:(NSString *)currentCount totalCount:(NSString *)totalCount;

/**
 更新显示的字体

 @param text 字体
 @param detailsText 详情的字体
 @param view 显示在哪个View
 @param hudTextType 显示的类型
 */
+ (void)updateShowText:(NSString *)text andDetailsText:(NSString *)detailsText inView:(UIView *)view withHUDTextType:(HUDShowTextType)hudTextType;

/**
 隐藏
 */
+ (void)hide;

/**
 在哪个上面的view全部隐藏

 @param view <#view description#>
 */
+ (void)hideAllHUDInView:(UIView *)view;
@end

//@interface TTHUDMessage : NSObject
//
//@end
