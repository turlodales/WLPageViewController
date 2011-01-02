//
//  WLContainerControllersAppDelegate.h
//  WLContainerControllers
//
//  Created by Wang Ling on 7/16/10.
//  Copyright I Wonder Phone 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WLSplitViewController.h"

@interface WLContainerControllersAppDelegate : NSObject <UIApplicationDelegate, WLSplitViewControllerDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

