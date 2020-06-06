//
//  UIViewController+HUD.h
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

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (HUD)

/// 在指定的控制器的view上显示成功的文字(无图片)
-(void)showSuccess:(NSString *)success;

/// 在指定的控制器的view上显示错误的文字(无图片)
-(void)showError:(NSString *)error;

/// 在指定的控制器的view上显示指定的文字(无图片)
-(void)showMessage:(NSString *)message;

/// 在指定的控制器的view上显示菊花且不显示文字(无图片)
-(void)showWaiting;

/// 在指定的控制器的view上显示菊花且显示‘正在加载’文字(无图片)
-(void)showLoading;

/// 在指定的控制器的view上显示菊花且显示指定文字(无图片)
-(void)showLoadingWithMessage:(NSString *)message;

/// 在指定的控制器的view上显示菊花且显示‘正在保存’文字(无图片)
-(void)showSaving;

/// 让指定控制器的view上的hud消失
-(void)hideHUD;

@end

NS_ASSUME_NONNULL_END
