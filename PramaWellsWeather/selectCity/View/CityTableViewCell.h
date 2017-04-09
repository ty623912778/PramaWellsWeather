//
//  CityTableViewCell.h
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface CityTableViewCell : UITableViewCell
{
    NSArray * _cityArray;
}
- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier cityArray:(NSArray*)array;
@property (nonatomic,copy)void(^didSelectedBtn)(int tag);
@end
