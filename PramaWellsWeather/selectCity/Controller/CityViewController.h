//
//  CityViewController.h
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CityViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>
{
    UITableView *_tableView;
}
@property (nonatomic,copy)void(^selectString)(NSString *string);
@property (nonatomic,copy)NSString *currentCityString;
@end
