//
//  NSDate+Extention.m
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.
//



#import "NSDate+Extention.h"

@implementation NSDate (Extention)

+ (BOOL)isDay{
    NSDateFormatter *formatter = [[NSDateFormatter alloc]init];
    [formatter setDateFormat:@"HH"];
    NSString *str = [formatter stringFromDate:[NSDate date]];
    int time = [str intValue];
    if (time>=18||time<=06) {
        return NO;
    }
    else{
        return YES;
    }
}

@end
