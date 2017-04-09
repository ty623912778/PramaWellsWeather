//
//  LifeIndex.m
//  PramaWellsWeather
//
//  Created by mac on 16/8/29.
//  Copyright © 2016年 mac. All rights reserved.
//

#import "LifeIndex.h"


@implementation LifeIndex

- (instancetype)initWithDict:(NSDictionary *)dict{
    self=[super init];
    if (self) {
        [self setValuesForKeysWithDictionary:dict];
    }
    return self;
}

+ (LifeIndex *)lifeIndexWithDict:(NSDictionary *)dict{
    return [[LifeIndex alloc] initWithDict:dict];
}

@end
