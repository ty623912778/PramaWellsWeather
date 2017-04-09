//
//  ResultCityController.h
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ResultCityControllerDelegate <NSObject>

-(void)didScroll;
-(void)didSelectedString:(NSString *)string;

@end

@interface ResultCityController : UIViewController<UITableViewDataSource,UITableViewDelegate>

@property (nonatomic,retain)NSMutableArray *dataArray;
@property (nonatomic,retain)UITableView *tableView;
@property (nonatomic,assign) id <ResultCityControllerDelegate>delegate;
@end
