# 产品概述 
PopOnChatPalToAKit 提供第三方接入用户进行PopOn语伴发单功能，实现与PopOn上各国语伴的一对一语音交流服务

# 集成说明 

## 前提条件 
1. iOS 8.0 + 真机（iPhone，请使用真机运行示例代码。模拟机可能会因为功能缺失而无法运行示例代码。）
2. 联系客服获取对应的AppKey和platform

## 添加PopOnChatPalToAKit到项目中 - Cocoapods导入
1. Cocoapods安装： 参考[Cocoapods安装](https://guides.cocoapods.org/using/getting-started.html)
2. 使用 CocoaPods 导入PopOnChatPalToAKit  

        pod 'PopOnChatPalToAKit'
    
3. 在项目的info.plist文件中添加ATS设置

    	<key>NSAppTransportSecurity</key>
	    <dict>
		    <key>NSAllowsArbitraryLoads</key>
		    <true/>
	    </dict>

4. 在项目的info.plist文件中添加隐私权限配置：

    麦克风权限：Privacy - Microphone Usage Description 

        <key>NSMicrophoneUsageDescription</key>
        <string>如果不允许，您将无法进行音频通话功能，这些功能将帮助您更好完成口语练习。</string>
    
    语音识别权限：Privacy - Speech Recognition Usage Description

        <key>NSSpeechRecognitionUsageDescription</key>
        <string>如果不允许，您将无法通过语音识别进行AI翻译，AI翻译将更好的帮助您与朋友交流。</string>
    
    
5. 设置项目的Background Modes:

    勾选 Audio,airPlay,and Picture in Picture.（如果没有勾选当App进入后台时语音服务将无法进行）设置

6. 引入头文件 

        #import <PopOnChatPalToAKit/WDPopOnController.h>

7. 调用Kit  

	    WDPopOnUserModel *userModel = [[WDPopOnUserModel alloc] init];
	    userModel.openId = @"userId";
	    userModel.nickName = @"userName";
	    userModel.mobile = @"user phonenumber";
	    userModel.avatar = @"user avatar";
	    userModel.sex = WDSexCodeMale;
	    userModel.learningLanguage = WDLanguageCodeEnglish;
			    
    	WDPopOnModel *model = [WDPopOnModel modelWithAppKey:@"your app key" platform:@"your platform" userInfo:userModel];
	    WDPopOnController *subVC = [WDPopOnController popOnControllerWithModel:model];
	    [self presentViewController:subVC animated:YES completion:nil];


# demo下载
demo地址：[PopOnChatPalToKitDemo](http://121.196.211.217/wordoor_ios/PopOnSDK_ChatPalToAKit_framework/tree/master/PopOnChatPalToAKitDemo)

- 执行demo前请先在终端执行

        cd 项目目录
        pod install

