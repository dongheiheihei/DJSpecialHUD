//
//  DJCustomHUD.h
//  DJProgressHUD
//
//  Created by huke_dj on 2020/6/6.
//  Copyright © 2020 huke_dj. All rights reserved.
//
//  流云千丈堪醉卧，
//  是谁月下影独酌。
//  浮生谁能一笑过，
//  明灭楼台上灯火。
//              -- Coder_DJ
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, DJProgressHUDStatus) {
    
    /** 成功 */
    DJProgressHUDStatusSuccess,
    
    /** 失败 */
    DJProgressHUDStatusError,
    
    /** 警告*/
    DJProgressHUDStatusWarn,
    
    /** 提示 */
    DJProgressHUDStatusInfo,
    
    /** 等待 */
    DJProgressHUDStatusLoading
    
};

@interface DJCustomHUD : NSObject

+ (void)showStatus:(DJProgressHUDStatus)status image:(UIImage *)image text:(NSString *)text;

#pragma mark - 建议使用的方法

/** 在 window 上添加一个只显示文字的 HUD */
+ (void)showMessage:(NSString *)text;

/** 在 window 上添加一个提示`警告`的 HUD(带图) */
+ (void)showWarn:(NSString *)text image:(UIImage *)image;

/** 在 window 上添加一个提示`失败`的 HUD(带图) */
+ (void)showError:(NSString *)text image:(UIImage *)image;

/** 在 window 上添加一个提示`成功`的 HUD(带图) */
+ (void)showSuccess:(NSString *)text image:(UIImage *)image;

/** 在 window 上添加一个提示`等待`的 HUD, 需要手动关闭 */
+ (void)showLoading:(NSString *)text;

/**在 window 上添加一个透明的 HUD **/
+(void)showHud;

/** 手动隐藏 HUD */
+ (void)hideHUD;

@end

NS_ASSUME_NONNULL_END
