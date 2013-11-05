//
//  DLWMCircularLayout.h
//  DLWidgetMenu
//
//  Created by Vincent Esche on 05/11/13.
//  Copyright (c) 2013 Vincent Esche. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "DLWMMenu.h"

typedef CGFloat(^DLWMCircularLayoutRadiusLogic)(DLWMMenu *menu);

@interface DLWMCircularLayout : NSObject <DLWMMenuLayout>

@property (readwrite, copy, nonatomic) DLWMCircularLayoutRadiusLogic radiusLogic;

+ (DLWMCircularLayoutRadiusLogic)defaultRadiusLogic;

@end
