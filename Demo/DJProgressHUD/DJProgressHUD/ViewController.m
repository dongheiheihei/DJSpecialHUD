//
//  ViewController.m
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

#import "ViewController.h"
#import <DJHUD/DJCustomHUD.h>
#import <DJHUD/UIViewController+HUD.h>
#import <DJHUD/UIView+HUD.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self showLoading];
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [DJCustomHUD showSuccess:@"恭喜你，成功了！" image:[UIImage imageNamed:@""]];
    });
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(4 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [DJCustomHUD showLoading:@"请等待"];
    });
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(7 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [DJCustomHUD hideHUD];
        [DJCustomHUD showError:@"搞错了" image:[UIImage imageNamed:@""]];
    });
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(10 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self hideHUD];
    });
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(13 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self.view showSuccess:@"展示到此结束啦!"];
    });
    // Do any additional setup after loading the view.
}


@end
