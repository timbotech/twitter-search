//
//  TwitterSearchAppDelegate.h
//  TwitterSearch
//
//  Created by Tim Moran on 13/02/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TwitterSearchViewController;

@interface TwitterSearchAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) TwitterSearchViewController *viewController;

@end
