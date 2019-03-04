//
//  WDPopOnModel.h
//  PopOnChatPalAUserSDK
//
//  Created by Yang on 2019/2/26.
//  Copyright © 2019 wordoor. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSString * WDSexCode NS_STRING_ENUM;
FOUNDATION_EXPORT WDSexCode const WDSexCodeMale;
FOUNDATION_EXPORT WDSexCode const WDSexCodeFemale;

typedef NSString * WDLanguageCode NS_STRING_ENUM;
FOUNDATION_EXPORT WDLanguageCode const WDLanguageCodeChinese;
FOUNDATION_EXPORT WDLanguageCode const WDLanguageCodeEnglish;

typedef NSString * WDLanguageLevelCode NS_STRING_ENUM;
FOUNDATION_EXPORT WDLanguageLevelCode const WDLanguageLevelCodeBeginner;

@class WDPopOnUserModel;
@interface WDPopOnModel : NSObject

/*平台标识*/
@property (nonatomic, copy) NSString *platform;

@property (nonatomic, copy) NSString *appKey;

@property (nonatomic, copy) NSString *URLScheme;

/*用户信息*/
@property (nonatomic, strong) WDPopOnUserModel *userInfo;

/*
 *  model 初始化
 *  platform 平台标识
 *  appKey app标识
 */
+ (instancetype)modelWithAppKey:(NSString *)appKey platform:(NSString *)platform urlScheme:(NSString *)urlScheme userInfo:(WDPopOnUserModel *)userInfo;

@end

@interface WDPopOnUserModel : NSObject

/*用户标识*/
@property (nonatomic, copy) NSString *openId;
/*用户昵称*/
@property (nonatomic, copy) NSString *nickName;
/*手机号*/
@property (nonatomic, copy) NSString *mobile;
/*用户头像*/
@property (nonatomic, copy) NSString *avatar;
/*用户性别*/
@property (nonatomic, copy) WDSexCode sex;

/*
 *  用户学习语
 *  仅支持中/英
 *  默认：WDLanguageCodeEnglish
 */
@property (nonatomic, copy, nullable) WDLanguageCode learningLanguage;
/*
 *  用户母语
 *  暂时仅根据学习语变化
 */
@property (nonatomic, copy, readonly) WDLanguageCode nativeLanguage;
/*
 *  用户第二母语
 *  暂时仅根据学习语变化
 */
@property (nonatomic, copy, readonly) WDLanguageCode secNativeLanguage;

@end


NS_ASSUME_NONNULL_END
