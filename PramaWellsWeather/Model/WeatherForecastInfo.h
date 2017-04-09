//
//  WeatherForecastInfo.h
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "LifeIndex.h"
#import "WeatherData.h"

/**
 *  天气预报信息
 */
@interface WeatherForecastInfo : NSObject

//@property (nonatomic,strong) NSDate *date;                     //当前时间
@property (nonatomic,strong) NSString *currentCity;              //当前城市
@property (nonatomic,assign) NSInteger pm25;                     //PM2.5
@property (nonatomic,copy) NSArray<LifeIndex *> *index;          //生活指数
@property (nonatomic,copy) NSArray<WeatherData *> *weatherData;  //天气数据

- (instancetype)initWithDict:(NSDictionary *)dict;
+ (WeatherForecastInfo *)weatherForecastInfoWithDict:(NSDictionary *)dict;

@end
