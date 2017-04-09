//
//  WeatherData.m
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.
//
#import "WeatherData.h"

@implementation WeatherData

- (instancetype)initWithDict:(NSDictionary *)dict{
    self=[super init];
    if (self) {
        [self setValuesForKeysWithDictionary:dict];
    }
    return self;
}

+ (WeatherData *)weatherDataWithDict:(NSDictionary *)dict{
    return [[WeatherData alloc]initWithDict:dict];
}

@end
