//
//  TBWeChatManager.h
//  TapsbookSDK
//
//  Created by Xinrong Guo on 11/17/15.
//  Copyright © 2015 tapsbook. All rights reserved.
//

#import "TBSocialManager.h"

@interface TBWeChatManager : TBSocialManager

- (BOOL)isWXAppInstalled;

- (BOOL)enabled;

- (BOOL)launchWechatToHandlePayRequest:(NSString*)signedReq completionBlock:(TBSocialManagerCompletionBlock)completionBlock;

@end
