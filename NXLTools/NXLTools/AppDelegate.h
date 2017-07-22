//
//  AppDelegate.h
//  NXLTools
//
//  Created by 南鑫林 on 2017/7/22.
//  Copyright © 2017年 nanxinlin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

