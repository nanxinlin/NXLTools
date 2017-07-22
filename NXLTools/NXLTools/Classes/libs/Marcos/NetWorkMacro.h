//
//  NetWorkMacro.h
//  Customer
//
//  Created by duanshenghui on 16/9/1.
//  Copyright © 2016年 南鑫林. All rights reserved.
//

#ifndef NetWorkMacro_h
#define NetWorkMacro_h

//------------------------------------------接口--------------------------------------------------

#pragma mark - key
//key
#define PrivateKey1 @"a3a665be98dc60e212365ee77979cdshbpj"
//----------------------------------------服务器地址-----------------------------------------------

#pragma mark - 服务器地址
//服务器地址开放
#define kApiUrl @"http://api.bopinwang.com/"
//服务器地址测试
//#define kApiUrl @"http://testapi.bopinwang.com/"
#define kMUrl @"http://m.bopinwang.com/"

//获取店铺地图信息 GET 获取启动图
#define kApiStartpageGetStartpageUrl @"api/Startpage/GetStartpage"
//--------------------------------------获取店铺地图信息--------------------------------------------

#pragma mark - 获取店铺地图信息
//获取店铺地图信息 GET 获取店铺地图信息
#define kApiStoreListUrl @"api/Store/List"
#pragma mark - 获取店铺地图信息
//获取店铺地图信息 GET 获得门店信息
#define kApiStoreInfoUrl @"api/Store/Info"
//自营商品分类 门店ID ：MID
#define kApiOwnProductBpwCategoryUrl @"api/OwnProduct/BpwCategory"
//通过分销商邀请码获取门店ID 和分销商ID
#define kApiStoreGetGDSUser_NumUrl @"api/Store/GetGDSUser_Num"
//获取门店现货区首页信息
#define kApiStoreInfoXhUrl @"api/Store/InfoXh"


//----------------------------------------登录控制器-----------------------------------------------

#pragma mark - 登录控制器
//登录控制器 POST
#define kApiLoginUrl @"api/Login"
#pragma mark - 登录控制器
//登录控制器 POST
#define kApiLoginUserLoginCodeUrl @"api/Login/UserLoginCode"
//扫码登陆写入 GET
#define kApiLoginUserMQRCodeLoginUrl @"api/Login/UserMQRCodeLogin"
//扫码验证 GET
#define kApiLoginUserMQRCodeLoginCheckUrl @"api/Login/UserMQRCodeLoginCheck"




//----------------------------------------快速控制器-----------------------------------------------
//登录控制器 get 开始登录验证
//#define kApiUserBindingQuickloginUrl @"api/UserBinding/Quicklogin"
#define kApiUserBindingQuickloginUrl @"api/UserBinding/Quicklogin_New"
//登录控制器 get 快速登录验证绑定账号
//#define kApiUserBindingPostQuickloginUrl @"api/UserBinding/PostQuicklogin"
#define kApiUserBindingPostQuickloginUrl @"api/UserBinding/PostQuicklogin_New"
//注册控制器 get 快速注册登录
//#define kApiUserBindingRegisterQuickloginUrl @"api/UserBinding/RegisterQuicklogin"
#define kApiUserBindingRegisterQuickloginUrl @"api/UserBinding/RegisterQuicklogin_New"

//注册控制器 get 快速验证
#define kApiUserBindingExitQuickloginUrl @"api/UserBinding/ExitQuicklogin"
//注册控制器 get 快速绑定
#define kApiUserBindingQuickloginUserUrl @"api/UserBinding/QuickloginUser"
//注册控制器 get 快速解绑
#define kApiUserBindingDeleteQuickloginUrl @"api/UserBinding/DeleteQuicklogin"


//----------------------------------------支付宝回调-----------------------------------------------

#pragma mark - 支付宝回调
//支付宝回调 POST 单一订单支付宝支付回调
#define kApiAlipayNotifyOrderCallBackUrl @"api/AlipayNotify/OrderCallBack"

//支付宝回调 POST 一般客户支付宝支付回调
#define kApiAlipayNotifyProductCallBackUrl @"api/AlipayNotify/ProductCallBack"

//---------------------------------------关于公司的介绍---------------------------------------------

#pragma mark - 关于公司的介绍
//关于公司的介绍(用UIWebView) (News) GET 新闻控制器-含关于里公司的介绍 - 列表
#define kApiNewsListUrl @"api/News/List"

//关于公司的介绍(用UIWebView) (News) GET 新闻控制器-含关于里公司的介绍 - 新闻详情
#define kApiNewsDetailUrl @"api/News/Detail" //11.提现说明

//---------------------------------------文件上传控制器------------------------------------------------

#pragma mark - 文件上传控制器
//文件上传控制器 POST 实名认证[HttpPostedFile](上传身份证的)
#define kApiUploadUploadRealIdentityUrl @"api/Upload/UploadRealIdentity"

//文件上传控制器 POST 实名认证 [FromBody]ParamsJson:{"UserId":"","IDCard":"","RealName":"","Sign":"","Ts":""} (不需要传身份证的)
#define kApiUploadRealIdentityUrl @"api/Upload/RealIdentity"

//文件上传控制器 POST 通用上传头像
#define kApiUploadUploadPortraitUrl @"api/Upload/UploadPortrait"

//文件上传控制器 POST 更新头像 [FromBody]ParamsJson:{"UserId":"","Sign":"","Ts":""}
#define kApiUploadPortraitUrl @"api/Upload/Portrait"

//----------------------------------------获取品牌列表----------------------------------------------
#pragma mark - 获取品牌列表
//获取品牌列表 GET 一般客户支付宝支付回调
#define kApiBrandsList @"api/Brand/ListUser"
//获取品牌列表 GET 品牌列表搜索页面
#define kApiBrandListSearch_NewUrl @"api/Brand/ListSearch_New"
//获取品牌列表 GET 分销管理全部商品-品牌列表
#define kApiBrandListSearch_GDSUrl @"api/Brand/ListSearch_GDS"
//分销国家列表
#define kApiProductNewGetSkuAttributesListSearchGDSUrl @"api/ProductNew/GetSkuAttributesListSearchGDS"


//---------------------------------------用户管理控制器--------------------------------------------

#pragma mark - 用户管理控制器

//用户管理控制器 POST 一般用户用户注册
#define kApiUserRegisterUrl @"api/User/Register"

//用户管理控制器 POST 修改密码
#define kApiUserChangePasswordUrl @"api/User/ChangePassword"

//用户管理控制器 POST 密码忘记重置--一般客户
#define kApiUserResetCustomerPasswordUrl @"api/User/ResetCustomerPassword"

//用户管理控制器POST 更新手机号
#define kApiUserUpdateRegisterPhoneUrl @"api/User/UpdateRegisterPhone"

//用户管理控制器Get 验证手机号
#define kApiUserExistsRegisterUrl @"api/User/ExistsRegisterPhone"

//用户管理控制器 GET 获取实名认证信息
#define kApiUserRealIdentityUrl @"api/User/RealIdentity"

//用户管理控制器 POST 实名认证（不用上传身份证只更新姓名和身份证号）
#define kApiUserRealIdentityUrl1 @"api/User/RealIdentity"

//用户管理控制器 POST 更新用户信息
#define KApiUserUpdateUrl @"api/User/Update"

//用户管理控制器 GET 根据用户ID获取用户基本信息
#define kApiUserGetUserListUrl @"api/User/GetUserList"

//---------------------------------------用户收获地址---------------------------------------------

#pragma mark - 用户收获地址
//用户收获地址 POST 添加收获地址
#define kApiAddressAddNewUrl @"api/Address/BpwAddNew"

//用户收获地址 POST 更新收获地址
#define kApiAddressUpdateNewUrl @"api/Address/BpwUpdateNew"

//用户收获地址 POST 更新收获地址同时将本条记录变更为默认收获地址
#define kApiAddressUpdateASDUrl @"api/Address/UpdateASD"

//用户收获地址 GET 得到默认的收获地址
#define kApiAddressDefaultUrl @"api/Address/BpwDefault"

//用户收获地址 GET 设置默认的收获地址
#define kapiAddressUpdateDefaultUrl @"api/Address/BpwUpdateDefault"

//用户收获地址 GET 用户收获地址列表
#define kApiAddressListUrl @"api/Address/BpwList"

//用户收获地址 POST 删除指定收货地址
#define kApiAddressDeleteUrl @"api/Address/Delete"

//用户收获地址 POST 根据Userid和地址id设为默认地址
#define kApiAddressUpdateDefaultUrl @"api/Address/UpdateDefault"

//---------------------------------------短信控制器--------------------------------------------

#pragma mark - 短信控制器
//短信控制器 POST 发送短信
#define kApiSMSSendUrl @"api/SMS/Send"
//短信控制器 POST 动态登录获取验证码
#define kApiSMSSendLoginUrl @"api/SMS/SendLogin"


#endif /* NetWorkMacro_h */

//------------------------------------一般顾客商品控制器------------------------------------------

#pragma mark - 一般顾客商品控制器
//一般顾客商品控制器 GET 一级分类
#define kApiProductTopCategoryUrl @"api/Product/TopCategory"
//一般顾客商品控制器 GET 根据一级分类得到级二三分类
#define kApiProductSubCategoryUrl @"api/Product/SubCategory"
//一般顾客商品控制器 GET 根据类别编号得到商品分页列表
#define kApiProductProductListUrl @"api/Product/ProductList"
//一般顾客商品控制器 GET 得到商品SKU详情
#define kApiProductShowUrl @"api/Product/Show"
//一般顾客商品控制器 GET 得到商品SKU详情 增加是否显示分销商佣金
#define kApiProductShowGDSUrl @"api/Product/ShowGDS"
//一般顾客商品控制器 GET 得到商品SKU详情 根据sku得到商品详情页猜你喜欢
#define kApiProductGetProductdetailLovelySkuIdUrl @"api/Product/GetProductdetailLovelySkuId"
//一般顾客商品控制器 GET 获得热搜名录列表
#define kApiProductSearchWordUrl @"api/Product/SearchWord"
//一般顾客商品控制器 GET 搜索
#define kApiProductProductSearchListUrl @"api/Product/ProductSearchList"
//一般顾客商品控制器 GET 扫描条码查询
#define kApiProductScanUrl @"api/Product/Scan"
#define kApiProductNewProductListScanCodeBpwUrl @"api/ProductNew/ProductListScanCodeBpw"
//获得热搜名录列表 GET
#define kApiProductSearchWord @"api/Product/SearchWord"
//获取后台搜索结果
#define kApiProductProductSearchList @"api/Product/ProductSearchList"
//根据上一级分类得到下级分类
#define kApiProductNewSubCategoryNextUrl @"api/ProductNew/SubCategoryNext"
//更新二三级分类获取商品列表-(app原生)
#define kApiProductNewProductListCodeBpw_NewUrl @"api/ProductNew/ProductListCodeBpw_New"
//门店获取sku属性表搜索集合
#define kApiProductNewGetSkuAttributesListSearchUrl @"api/ProductNew/GetSkuAttributesListSearch"
//门店获取sku属性表搜索集合
#define kApiProductNewGetSkuAttributesListSearchSupplierUrl @"api/ProductNew/GetSkuAttributesListSearchSupplier"

//app搜索接口[最新调用]
#define kApiProductNewProductListCodeBpw_SearchListUrl @"api/ProductNew/ProductListCodeBpw_SearchList"
//app搜索接口[最新调用]
#define kApiBrandListSearch_SupplierUrl @"api/Brand/ListSearch_Supplier"

//母婴用品首页
#define kApiProductNewGetHomeAdsClassIndexUrl @"api/ProductNew/GetHomeAdsClassIndex"


//---------------------------------------订单控制器--------------------------------------------

#pragma mark - 订单控制器
//订单控制器 GET 一般客户订单列表
#define kApiOrderListUrl @"api/Order/List_New"

//订单控制器 GET 分销订单列表(红包)-增加佣金显示
#define kApiOrderList_GDSUrl @"api/Order/List_GDS"

//订单控制器 POST 删除订单
#define kApiOrderDeleteUrl @"api/Order/Delete_New"

//订单控制器 POST 取消订单
//#define kApiOrderCancelUrl @"api/Order/Cancel"
#define kApiOrderCancelUrl @"api/Order/Cancel_New"

//订单控制器 POST 催单
#define kApiOrderReminderUrl @"api/Order/Reminder"

//订单控制器 POST 得到单个订单微信支付参数
#define kApiOrderWXPayUrl @"api/Order/WXPay"

//订单控制器 GET 获取订单总数
//#define kApiOrderTotalUrl @"api/Order/Total"
#define kApiOrderTotalUrl @"api/Order/Total_New"

//订单控制器 GET 订单详情
//#define kApiOrderDetailUrl @"api/Order/Detail"
#define kApiOrderDetailUrl @"api/Order/Detail_New"

//订单控制器 POST 确认收货
#define kApiOrderReceiveUrl @"api/Order/Receive"

//订单控制器 GET 订单状态列表
#define kApiOrderStateListUrl @"api/Order/StateList"

//---------------------------------------供应商合作控制器-----------------------------------------------
#pragma mark - 供应商合作
//供应商合作  POST 加盟申请
#define kApiUserSupplierAddUrl @"api/UserSupplier/Add"
//供应商合作  GET 是否申请过
#define kApiUserSupplierExistsUrl @"api/UserSupplier/Exists"
//---------------------------------------加盟控制器-----------------------------------------------
#pragma mark - 加盟控制器
//加盟控制器  POST 加盟申请
#define kApiFranchiseAddUrl @"api/Franchise/Add"
//加盟控制器  GET 是否申请过
#define kApiFranchiseExistsUrl @"api/Franchise/Exists"

//---------------------------------------退单控制器--------------------------------------------

#pragma mark - 退单控制器
//退单控制器 POST 一般顾客添加退货申请
#define kApiReturnOrderAddUrl @"api/ReturnOrder/Add"
#define kApiReturnOrderAdd_iOSUrl @"api/ReturnOrder/Add_IOS"
//退单控制器 GET 一般顾客退货列表
#define kApiReturnOrderListUrl @"api/ReturnOrder/List"
//---------------------------------------退款控制器--------------------------------------------

#pragma mark - 退单控制器
//退单控制器 POST 一般顾客添加退货申请
#define kApiReturnOrderMoneyAddUrl @"api/ReturnOrderMoney/Add"
//退单控制器 GET 一般顾客退货列表
#define kApiReturnOrderMoneyListUrl @"api/ReturnOrderMoney/List"

//----------------------------------------支付宝回调-----------------------------------------------

#pragma mark - 支付宝回调
//支付宝回调 POST 单一订单支付宝支付回调
#define kApiAlipayNotifyBpwOrderCallBackUrl @"api/AlipayNotify/BpwOrderCallBack"

//支付宝回调 POST 一般客户支付宝支付回调
#define kApiAlipayNotifyBpwProductCallBackUrl @"api/AlipayNotify/BpwProductCallBack"
//支付宝回调 POST 一般顾客购买分销服务回调
#define kApiAlipayNotifyBpwGDSServiceCallBackUrl @"api/AlipayNotify/BpwGDSServiceCallBack"
//---------------------------------------微信支付回调--------------------------------------------

#pragma mark - 微信支付回调
//微信支付回调 POST 单一订单支付回调
#define kApiWXNotifyBpwOrderCallBackUrl @"api/WXNotify/BpwOrderCallBack"

//微信支付回调 POST 商品微信支付回调
#define kApiWXNotifyBpwProductCallBackUrl @"api/WXNotify/BpwProductCallBack"
//-------------------------------------一般顾客购物车------------------------------------------------

#pragma mark - 一般顾客购物车
//一般顾客购物车 POST 添加/更新购物车
#define kApiCSCBpwAddUrl @"api/CSC/BpwAdd_New"
//一般顾客购物车 POST 批量删除1,2,3,4
#define kApiCSCDeleteBpwDeleteListUrl @"api/CSC/BpwDeleteList"
//一般顾客购物车 POST 删除一个
#define kApiCSCBpwDeleteUrl @"api/CSC/BpwDelete"
//一般顾客购物车 POST 更新支付状态
#define kApiCSCBpwPayStateUrl @"api/CSC/BpwPayState"
//一般顾客购物车 POST 购物车推荐商品
#define kApiCSCBpwCarRecommend_NewUrl @"api/CSC/BpwCarRecommend_New"
//一般顾客购物车 Get 一般顾客购物车列表
#define kApiCSCBpwListUrl @"api/CSC/BpwList"
//一般顾客购物车 Get 一般顾客购物车列表（无库存）
#define kApiCSCBpwNoStockListUrl @"api/CSC/BpwNoStockList"
//一般顾客购物车 Get 更新无库存商品为不可支付状态
#define kApiCSCBpwUpdateC_NoStockUrl @"api/CSC/BpwUpdateC_NoStock"
//一般顾客购物车 Get 一般顾客支付商品图片列表
#define kApiCSCBpwPayPicListUrl @"api/CSC/BpwPayPicList"
//一般顾客购物车 Get 一般顾客支付商品列表
#define kApiCSCBpwPayListUrl @"api/CSC/BpwPayList"
//一般顾客购物车 POST 购物车去结算
#define kApiCSCBpwCheckOutUrl @"api/CSC/BpwCheckOut_New"
//一般顾客购物车 POST 提交购物车生成订单
#define kApiCSCBpwSubmitUrl @"api/CSC/BpwSubmit_New"
//一般顾客购物车 POST 得到购物车微信支付参数
#define kApiCSCWXPayUrl @"api/CSC/WXPay"
//一般顾客购物车 Get 一般顾客支付商品列表
#define KApiCSCBpwGetShppingCartSum @"api/CSC/BpwGetShppingCartSum"
//一般顾客购物车 Get 分享验证获取参数
#define kApiProductUserSharedVUrl @"api/Product/UserSharedV"
//一般顾客购物车 Get 首页焦点图
#define kApiProductGetIndexadlistUrl @"api/Product/GetIndexadlist"
//一般顾客购物车 Get 直邮今日上新商品列表
#define kApiProductGetZyNewtodayProductlistUrl @"api/Product/GetZyNewtodayProductlist"
//一般顾客购物车 Get 直门店现货店长推荐商品列表
#define kApiProductGetMDtopProductlistUrl @"api/Product/GetMDtopProductlist"
//一般顾客购物车 Get app现货全部商品
#define kApiProductNewProductListCodeBpw_XhListUrl @"api/ProductNew/ProductListCodeBpw_XhList"



//----------------------------------APP导航Menu控制器---------------------------------------------
#define kApiAppMenuGetAppMenuUrl @"api/AppMenu/GetAppMenu"


//-------------------------------------自营商品控器------------------------------------------------
#pragma mark - 自营商品控制器
//一般顾客购物车 Get 商铺广告
#define kApiOwnProductGetIndexshopinfoUrl @"api/OwnProduct/GetIndexshopinfo"
//一般顾客购物车 Get 店长推荐商品列表
#define kApiOwnProductGetShopownerRecommendProductUrl @"api/OwnProduct/GetShopownerRecommendProduct"

//----------------------------------用户收藏商品控器------------------------------------------------
#pragma mark - 用户收藏商品
//一般顾客购物车 Get 是否存在该记录
#define kApiUserCollectionExistsUrl @"api/UserCollection/Exists"
//一般顾客购物车 Get 收藏列表
#define kApiUserCollectionListUrl @"api/UserCollection/List"
//一般顾客购物车 Get 添加到收藏列表//删除
#define kApiUserCollectionAddUrl @"api/UserCollection/Add"

//-------------------------------------红包控制器------------------------------------------------
//一般顾客购物车 Get 门店是否存在新人红包
#define kApiRedPacketReceiveExistsUrl @"api/RedPacketReceive/Exists"
//一般顾客购物车 Get 红包新人注册领取列表
#define kApiRedPacketReceiveListUrl @"api/RedPacketReceive/List"
//一般顾客购物车 Get 个人中心红包列表
#define kApiRedPacketReceiveListDataUrl @"api/RedPacketReceive/ListData"
//一般顾客购物车 Get 订单使用红包列表
#define kApiRedPacketReceiveListDataOrderUrl @"api/RedPacketReceive/ListDataOrder"
//一般顾客购物车 Get 消费红包抽奖
#define kApiRedPacketReceiveGetOrderCJUrl @"api/RedPacketReceive/GetOrderCJ"

//-------------------------------------分销控制器------------------------------------------------
//一般顾客购物车 Get 列表
#define kApiGDSTypeListUrl @"api/GDSType/List"
//一般顾客购物车 POST 提交分销会员生成订单
#define kApiGDSTypeGDSSubmitUrl @"api/GDSType/GDSSubmit"
//一般顾客购物车 POST 得到分销会员购物车微信支付参数
#define kApiGDSTypeWXPayUrl @"api/GDSType/WXPay"

//-------------------------------------高额佣金商品列表------------------------------------------------
//一般顾客购物车 Get 高额佣金商品列表
#define kApiCommissionListUrl @"api/Commission/List"
//一般顾客购物车 Get 高额佣金商品列表
#define kApiCommissionList_GDSUrl @"api/Commission/List_GDS"
//一般顾客购物车 全部商品
#define kApiCommissionSearchList_GDSUrl @"api/Commission/SearchList_GDS"

//-------------------------------------分销会员控制器------------------------------------------------
//分销会员控制器 Get 判断当前用户是否为分销商
#define kApiGDSUserGDSExistsUrl @"api/GDSUser/GDSExists"
//分销会员控制器 Get 获取分销商基本信息
#define kApiGDSUserGetGDSUserInfoUrl @"api/GDSUser/GetGDSUserInfo"
//分销会员控制器 Get 获取分销商基本信息
#define kApiGDSUserMdLoginUserExistsUrl @"api/GDSUser/MdLoginUserExists"
//分销会员控制器 POST 分销商会员修改基本资料
#define kApiGDSUserUpdate_IOSUrl @"api/GDSUser/Update_IOS"
//分销会员控制器 Get 分销用户客户列表
#define kApiGDSUserList_GDSUserUrl @"api/GDSUser/List_GDSUser"
//分销会员控制器 Get 分销用户客户详情
#define kApiGDSUserList_GDSUserDetailUrl @"api/GDSUser/List_GDSUserDetail"
//-------------------------------------分销商提现控制器------------------------------------------------
//分销商提现控制器 POST 添加提现记录
#define kAapiUserAccountAddUrl @"api/UserAccount/Add"
//分销商提现控制器 Get 分销商提现列表
#define kApiUserAccountListUrl @"api/UserAccount/List"
//分销商提现控制器 Get 分销商用户详情
#define kApiUserAccountDetailUrl @"api/UserAccount/Detail"
//-------------------------------------分销商提现记录------------------------------------------------
//分销商提现控制器 POST 添加分销商提现记录
#define kApiUserBillRecordsAdd_NewUrl @"api/UserBillRecords/Add_New"
//分销商提现控制器 Get 分销商提现记录列表
#define kApiUserBillRecordsListUrl @"api/UserBillRecords/List"
//分销商提现控制器 Get 分销商账单记录列表
#define kApiUserBillRecordsList_LogUrl @"api/UserBillRecords/List_Log"
//显示当前分销会员可以升级的分销级别
#define kApiGDSTypeList_UpgradeUrl @"api/GDSType/List_Upgrade"



//-------------------------------------广告图片控制器------------------------------------------------
//广告图片控制器 Get 获取单个广告图片
#define kApiMdAdvertisingDetailUrl @"api/MdAdvertising/Detail"

