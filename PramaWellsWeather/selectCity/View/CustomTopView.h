//
//  CustomTopView.h
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.



#import <UIKit/UIKit.h>

@protocol CustomTopViewDelegate <NSObject>

-(void)didSelectBackButton;

@end

@interface CustomTopView : UIView
@property (nonatomic,assign) id <CustomTopViewDelegate>delegate;
@end
