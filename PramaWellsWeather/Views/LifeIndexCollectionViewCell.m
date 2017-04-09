//
//  LifeIndexCollectionViewCell.m
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.


#import "LifeIndexCollectionViewCell.h"

@interface LifeIndexCollectionViewCell ()
@property (weak, nonatomic) IBOutlet UILabel *zsLabel;
@property (weak, nonatomic) IBOutlet UILabel *descLabel;

@end

@implementation LifeIndexCollectionViewCell

- (void)setLifeIndex:(LifeIndex *)lifeIndex{
    _lifeIndex=lifeIndex;
    self.zsLabel.text=[NSString stringWithFormat:@"%@ ∙ %@",lifeIndex.title,lifeIndex.zs];
    self.descLabel.text=lifeIndex.des;
}

- (void)layoutSubviews{
    [super layoutSubviews];
    UIColor *color=[[UIColor alloc] initWithWhite:1.0 alpha:0.6];
    self.layer.borderColor=color.CGColor;
    self.layer.borderWidth=0.25;
}

@end

