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
#define NXLColor(r, g, b)        [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
#define NXLColorRGBA(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a]
// 随机色
#define NXLRandomColor NXLColor(arc4random_uniform(256), arc4random_uniform(256), arc4random_uniform(256))
// 16进制字符串获取颜色
#ifndef UIColorHex
#define UIColorHex(_hex_)   [UIColor colorWithHexString:((__bridge NSString *)CFSTR(#_hex_))]
#endif



#endif /* ColorMacro_h */
