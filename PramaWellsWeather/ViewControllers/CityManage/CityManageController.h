//
//  CityManageController.h
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^DidSelectCity)(NSInteger cityIndex);

@interface CityManageController : UIViewController

@property (nonatomic,copy) DidSelectCity didSelectCity;

@end
