//
//  ViewController.m
//  PopOnChatPalToAKitDemo
//
//  Created by Yang on 2019/2/28.
//  Copyright © 2019 wordoor. All rights reserved.
//

#import "ViewController.h"
#import <PopOnChatPalToAKit/WDPopOnController.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(clickAction:)];
    [self.view addGestureRecognizer:tap];
}

- (void)clickAction:(id)sender {
    WDPopOnUserModel *userModel = [[WDPopOnUserModel alloc] init];
    userModel.openId = @"1234";
    userModel.nickName = @"测试";
    userModel.mobile = @"13712345678";
    userModel.avatar = @"avatar";
    userModel.sex = WDSexCodeMale;
    
    WDPopOnModel *model = [WDPopOnModel modelWithAppKey:@"Oi5CUFFTVUNCHkVaDl1dcUgDVlAB" platform:@"PrimeCloud" userInfo:userModel];
    WDPopOnController *subVC = [WDPopOnController popOnControllerWithModel:model];
    [self presentViewController:subVC animated:YES completion:nil];
}

@end
