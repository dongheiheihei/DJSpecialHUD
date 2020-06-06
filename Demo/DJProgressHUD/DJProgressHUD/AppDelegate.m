//
//  AppDelegate.m
//  DJProgressHUD
//
//  Created by huke_dj on 2020/6/4.
//  Copyright © 2020 huke_dj. All rights reserved.
//
//  流云千丈堪醉卧，
//  是谁月下影独酌。
//  浮生谁能一笑过，
//  明灭楼台上灯火。
//              -- Coder_DJ
//

#import "AppDelegate.h"
#import "ViewController.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    ViewController *rc = [[ViewController alloc]init];
    self.window.rootViewController = rc;
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    
    // Override point for customization after application launch.
    return YES;
}


@end
