//
//  BaseHTTPRequestOperationManager.h
//  DoctorFei_iOS
//
//  Created by GuJunjia on 14/11/30.
//
//

#import "AFHTTPRequestOperationManager.h"

@interface BaseHTTPRequestOperationManager : AFHTTPRequestOperationManager
+ (BaseHTTPRequestOperationManager *)sharedManager;
- (void)defaultGetWithMethod:(NSString *)method WithParameters:(id)parameters success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;
- (void)defaultPostWithMethod:(NSString *)method WithParameters:(id)parameters success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;
- (void)defaultAuth;
- (void)defaultPostWithMethod:(NSString *)method WithParameters:(id)parameters WithBodyParameters:(id)bodyParameters success:(void (^)(AFHTTPRequestOperation *operation, id responseObject))success failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

@end
