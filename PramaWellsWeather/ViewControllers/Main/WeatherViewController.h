//
//  WeatherViewController.h
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WeatherViewController : UIViewController

@property (nonatomic,copy) NSString *locationName;

@property (nonatomic,copy) NSString *pm25Level;

- (instancetype)initWithLocationName:(NSString *)locationName;

@end
