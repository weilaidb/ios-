//
//  AppDelegate.h
//  TabNavigation
//
//  Created by tonyguan on 13-12-2.
//  Copyright (c) 2013年 tonyguan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate,UITabBarControllerDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UITabBarController *tabBarController;

@end
