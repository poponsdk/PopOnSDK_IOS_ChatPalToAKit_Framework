//
//  WDPopOnController.h
//  PopOnChatPalAUserSDK
//
//  Created by Yang on 2019/1/22.
//  Copyright © 2019 YangJing. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDPopOnModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface WDPopOnController : UINavigationController

+ (instancetype)popOnControllerWithModel:(WDPopOnModel *)model;

@end


NS_ASSUME_NONNULL_END
