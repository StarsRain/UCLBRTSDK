//
//  KeyGenerator.h
//  UCLBRTStatic
//  验证个人信息，二维码生成类
//  Created by myApple on 16/2/23.
//  Copyright (c) 2016年 myApple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KeyGenerator : NSObject

/**
 *  初始化类
 *
 *  @param sid   账号ID
 *  @param token 账号token
 */
-(id)initWithAccountSid:(NSString *)sid
                    token:(NSString *)token;

/**
 *  生成房卡
 *
 *  @param mobile      手机号
 *  @param communityNo 集群编号
 *  @param buildNo     楼栋编号（可选 nil）
 *  @param floorNo     楼层编号（可选 nil）
 *  @param roomNo      房间编号
 *  @param startTime   二维码有效开始时间 格式:1506161230 15年6月16号12点30分
 *  @param endTime     二维码有效结束时间 格式:1506161230 15年6月16号12点30分
 *  @param success     返回成功数据
 *  @param failure     返回失败数据
 */
-(void)createWithMobile:(NSString *)mobile
            communityNo:(NSString *)communityNo
                buildNo:(NSString *)buildNo
                floorNo:(NSString *)floorNo
                 roomNo:(NSString *)roomNo
              startTime:(NSString *)startTime
                endTime:(NSString *)endTime
                success:(void(^)(id successResponseObject))success
                failure:(void(^)(NSError *error))failure;


/**
 *  类方法 生成房卡
 *
 *  @param accountSid  账户ID
 *  @param token       账户token
 *  @param mobile      手机号
 *  @param communityNo 集群编号
 *  @param buildNo     楼栋编号（可选 nil）
 *  @param floorNo     楼层编号（可选 nil）
 *  @param roomNo      房间编号
 *  @param startTime   二维码有效开始时间 格式:yyyy-MM-dd HH:mm
 *  @param endTime     二维码有效结束时间 格式:yyyy-MM-dd HH:mm
 *  @param success     返回成功数据
 *  @param failure     返回失败数据
 */
+(void)createWithAccountSid:(NSString *)accountSid
                      token:(NSString *)token
                     mobile:(NSString *)mobile
                communityNo:(NSString *)communityNo
                    buildNo:(NSString *)buildNo
                    floorNo:(NSString *)floorNo
                     roomNo:(NSString *)roomNo
                  startTime:(NSString *)startTime
                    endTime:(NSString *)endTime
                    success:(void(^)(id successResponseObject))success
                    failure:(void(^)(NSError *error))failure;
@end
