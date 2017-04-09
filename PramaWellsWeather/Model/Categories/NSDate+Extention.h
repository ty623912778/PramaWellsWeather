//
//  NSDate+Extention.h
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface NSDate (Extention)

/**
 *  指示当前是否是白天
 *
 *  @return 白天则返回YES，晚上则返回NO
 */
+ (BOOL)isDay;

@end
