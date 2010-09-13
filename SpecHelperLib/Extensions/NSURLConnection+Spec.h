#import <Foundation/Foundation.h>

@protocol NSURLConnectionDelegate;
@class PSHKFakeHTTPURLResponse;

@interface NSURLConnection (Spec)

+ (NSArray *)connections;
+ (void)resetAll;

- (NSURLRequest *)request;
- (id<NSURLConnectionDelegate>)delegate;

- (void)returnResponse:(PSHKFakeHTTPURLResponse *)response;
- (void)sendAuthenticationChallengeWithCredential:(NSURLCredential *)credential;

@end