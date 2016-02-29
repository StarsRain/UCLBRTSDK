//
//  KeyFetcher.h
//  UCLBRTStatic
//  二维码页面获取类
//  Created by myApple on 16/2/23.
//  Copyright (c) 2016年 myApple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface KeyFetcher : NSObject

/**
 *  用账号ID和token来重写初始化
 *
 *  @param accountSid 账号ID
 *  @param token      账号token
 *
 *  @return self
 */
-(id)initWith:(NSString *)accountSid
        token:(NSString *)token;

/**
 *  对象方法通过唯一标示获取房卡
 *
 *  @param communityNo 集群编号
 *  @param mobile      电话号码
 *  @param identityNo  唯一标示符
 *  @param success     返回成功的结果
 *  @param failure     返回失败的结果
 */
-(void)getCardByIdWithCommunityNo:(NSString *)communityNo
                           mobile:(NSString *)mobile
                       identityNo:(NSString *)identityNo
                          success:(void(^)(UIView * QRCodeView))success
                          failure:(void(^)(NSError *error))failure;

/**
 *  对象方法通过多参数获取房卡
 *
 *  @param mobile      电话号码
 *  @param communityNo 集群标号
 *  @param buildNo     楼栋编号（可选）nil表示不传
 *  @param floorNo     楼层编号（可选）nil表示不传
 *  @param roomNo      房间标号
 *  @param startTime   二维码有效开始时间 格式:1506161230 15年6月16号12点30分
 *  @param endTime     二维码有效结束时间 格式:1506161230 15年6月16号12点30分
 *  @param success     返回成功的结果
 *  @param failure     返回失败的结果
 */
-(void)getCardByRoomWithMobile:(NSString *)mobile
                   communityNO:(NSString *)communityNo
                       buildNo:(NSString *)buildNo
                       floorNo:(NSString *)floorNo
                        roomNo:(NSString *)roomNo
                     startTime:(NSString *)startTime
                       endTime:(NSString *)endTime
                       success:(void(^)(UIView * QRCodeView))success
                       failure:(void(^)(NSError *error))failure;


@end
