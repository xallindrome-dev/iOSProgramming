//
//  SingleViewBasedAppAppDelegate.h
//  SingleViewBasedApp
//
//  Created by Andrew Wilson on 2/7/13.
//  Copyright (c) 2013 Andrew Wilson. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SingleViewBasedAppViewController;

@interface SingleViewBasedAppAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) SingleViewBasedAppViewController *viewController;

@end
