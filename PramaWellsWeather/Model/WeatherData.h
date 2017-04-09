//
//  WeatherData.h
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.
//
#import <Foundation/Foundation.h>

/**
 *  天气预报数据
 */
@interface WeatherData : NSObject

@property (nonatomic,strong) NSString *date;            //天气预报时间
@property (nonatomic,copy) NSString *dayPictureUrl;   //白天的天气预报图片url
@property (nonatomic,copy) NSString *nightPictureUrl; //晚上的天气预报图片url
@property (nonatomic,copy) NSString *weather;         //天气状况
@property (nonatomic,copy) NSString *wind;            //风力
@property (nonatomic,copy) NSString *temperature;     //温度

- (instancetype)initWithDict:(NSDictionary *)dict;
+ (WeatherData *)weatherDataWithDict:(NSDictionary *)dict;

@end
