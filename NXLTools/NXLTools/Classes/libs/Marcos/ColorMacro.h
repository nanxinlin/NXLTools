//
//  ColorMacro.h
//  Customer
//
//  Created by duanshenghui on 16/8/30.
//  Copyright © 2016年 南鑫林. All rights reserved.
//

#ifndef ColorMacro_h
#define ColorMacro_h

// 颜色
#define NXLColor(r, g, b)  [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
// 颜色呆透明度
#define NXLColorRGBA(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a]
// 随机色
#define NXLRandomColor NXLColor(arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256))

#define kWhiteColor [UIColor whiteColor]


#endif /* ColorMacro_h */
