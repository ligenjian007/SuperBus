//
//  BusAppDelegate.h
//  SuperBus
//
//  Created by Kenchy on 13-7-29.
//  Copyright (c) 2013年 Kenchy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BusAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end