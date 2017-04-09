//
//  WeatherForecastInfo.m
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.
//


#import "WeatherForecastInfo.h"

@implementation WeatherForecastInfo

- (instancetype)initWithDict:(NSDictionary *)dict{
    self=[super init];
    if (self) {
        for (NSString *key in dict) {
            if ([key isEqualToString:@"index"]) {
                NSMutableArray *indexList=[NSMutableArray new];
                for (NSDictionary *indexDict in dict[key]) {
                    [indexList addObject:[LifeIndex lifeIndexWithDict:indexDict]];
                }
                _index=indexList;
            }else if([key isEqualToString:@"weather_data"]){
                NSMutableArray *weatherList=[NSMutableArray new];
                for (NSDictionary *weatherDict in dict[key]) {
                    [weatherList addObject:[WeatherData weatherDataWithDict:weatherDict]];
                }
                _weatherData=weatherList;
            }
            else{
                [self setValue:dict[key] forKey:key];
            }
        }
    }
    return self;
}

+ (WeatherForecastInfo *)weatherForecastInfoWithDict:(NSDictionary *)dict{
    return [[WeatherForecastInfo alloc]initWithDict:dict];
}

@end

