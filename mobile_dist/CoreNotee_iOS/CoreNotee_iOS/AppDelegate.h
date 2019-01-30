//
//  AppDelegate.h
//  CoreNotee_iOS
//
//  Created by Lance T. Walker on 1/30/19.
//  Copyright © 2019 CodeLife-Productions. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

