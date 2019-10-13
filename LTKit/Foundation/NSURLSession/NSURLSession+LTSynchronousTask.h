//
//  NSURLSession+LTSynchronousTask.h
//  LTKit
//
//  Created by Luther on 2019/10/11.
//  Copyright © 2019 mrstock. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSURLSession (LTSynchronousTask)

#pragma mark    -   NSURLSessionDataTask
- (nullable NSData *)sendSynchronousDataTaskWithURL:(nonnull NSURL *)url returningResponse:(NSURLResponse *_Nullable *_Nullable)response error:(NSError * _Nullable *_Nullable)error;

- (nullable NSData *)sendSynchronousDataTaskWithRequest:(nonnull NSURLRequest *)request returningResponse:(NSURLResponse *_Nullable *_Nullable)response error:(NSError * _Nullable *_Nullable)error;

#pragma mark    -   NSURLSessionDownloadTask
- (nullable NSURL *)sendSynchronousDownloadTaskWithURL:(nonnull NSURL *)url returningResponse:(NSURLResponse *_Nullable *_Nullable)response error:(NSError *_Nullable *_Nullable)error;
- (nullable NSURL *)sendSynchronousDownloadTaskWithRequest:(nonnull NSURLRequest *)request returningResponse:(NSURLResponse *_Nullable *_Nullable)response error:(NSError *_Nullable *_Nullable)error;

#pragma mark    -   NSURLSessionUploadTask
- (nullable NSData *)sendSynchronousUploadTaskWithRequest:(nonnull NSURLRequest *)request fromFile:(nonnull NSURL *)fileURL returningResponse:(NSURLResponse *_Nullable*_Nullable)response error:(NSError *_Nullable*_Nullable)error;

- (nullable NSData *)sendSynchronousUploadTaskWithRequest:(nonnull NSURLRequest *)request fromData:(nonnull NSData *)bodyData returningResponse:(NSURLResponse *_Nullable *_Nullable)response error:(NSError *_Nullable *_Nullable)error;

@end

NS_ASSUME_NONNULL_END
