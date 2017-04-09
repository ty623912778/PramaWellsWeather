//
//  WeatherCollectionViewCell.h
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WeatherData.h"

@interface WeatherCollectionViewCell : UICollectionViewCell

@property (nonatomic,strong) WeatherData *weatherData;

@end
