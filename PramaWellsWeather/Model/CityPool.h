//
//  CityPool.h
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.
//
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger,CityPoolChangedType){
    CityPoolChangedTypeAdd,
    CityPoolChangedTypeRemove
};

@protocol CityPoolDelegate <NSObject>

@optional
- (void)cityPoolChangedWithCity:(NSString *)city changedType:(CityPoolChangedType)changedType;

@end

@interface CityPool : NSObject

@property (nonatomic,weak)id<CityPoolDelegate> delegate;
@property (nonatomic,strong,readonly) NSArray<NSString *> *cities;
@property (nonatomic,strong) NSString *localCity;//定位城市

- (void)addCityByName:(NSString *)cityName;

- (void)insertCity:(NSString *)city atIndex:(NSUInteger)index;

- (NSString *)cityBeforeCity:(NSString *)city;

- (NSString *)cityAfterCity:(NSString *)city;

+ (CityPool *)shareCityPool;

@end

