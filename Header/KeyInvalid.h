//
//  KeyInvalid.h
//  UCLBRTStatic
//  二维码失效类
//  Created by myApple on 16/2/23.
//  Copyright (c) 2016年 myApple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KeyInvalid : NSObject

/**
 *  用账号ID和账号token来重写初始化
 *
 *  @param accountSid 账号ID
 *  @param token      账号token
 *
 *  @return 返回self
 */
-(id)initWithAccounSid:(NSString *)accountSid
                 token:(NSString *)token;

/**
 *  对象方法根据房间编号取消卡
 *
 *  @param communityNo 集群编号号
 *  @param roomNo      房间编号
 *  @param success     返回成功的结果
 *  @param failure     返回失败的结果
 */
-(void)cancelByRoomWithCommunityNo:(NSString *)communityNo
                            mobile:(NSString *)mobile
                           buildNo:(NSString *)buildNo
                           floorNo:(NSString *)floorNo
                            roomNo:(NSString *)roomNo
                         startTime:(NSString *)startTime
                           endTime:(NSString *)endTime
                           success:(void(^)(id successResponseObject))success
                           failure:(void(^)(NSError *error))failure;


/**
 *  类方法通过房间编号取消卡
 *
 *  @param accountSid  账号ID
 *  @param token       账号token
 *  @param communityNo 集群编号
 *  @param mobile      电话号码
 *  @param buildNo     返回失败的结果
 *  @param floorNo     账号ID
 *  @param roomNo     集群编号
 *  @param startTime   账号token
 *  @param endTime     房间编号
 *  @param success     返回成功的结果
 *  @param failure     返回失败的结果
 */
+(void)cancelByRoomWithAccountSid:(NSString *)accountSid
                            token:(NSString *)token
                      communityNo:(NSString *)communityNo
                           mobile:(NSString *)mobile
                          buildNo:(NSString *)buildNo
                          floorNo:(NSString *)floorNo
                           roomNo:(NSString *)roomNo
                        startTime:(NSString *)startTime
                          endTime:(NSString *)endTime
                          success:(void(^)(id successResponseObject))success
                          failure:(void(^)(NSError *error))failure;


/**
 *  对象方法通过唯一标示号取消卡
 *
 *  @param identityNo 生成卡的时候返回的唯一标示号
 *  @param success     返回成功的结果
 *  @param failure     返回失败的结果
 */
-(void)cancelByIdWithIdentityNo:(NSString *)identityNo
                        success:(void(^)(id successResponseObject))success
                        failure:(void(^)(NSError *error))failure;


/**
 *  类方法通过唯一标示号取消卡
 *
 *  @param accountSid 账号ID
 *  @param token      账号token
 *  @param identityNo 生成卡的时候返回的唯一标示号
 *  @param success     返回成功的结果
 *  @param failure     返回失败的结果
 */
+(void)cancelByIdWithAccountSid:(NSString *)accountSid
                          token:(NSString *)token
                     identityNo:(NSString *)identityNo
                        success:(void(^)(id successResponseObject))success
                        failure:(void(^)(NSError *error))failure;


@end
