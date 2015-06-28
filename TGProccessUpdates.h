//
//  TGProccessUpdates.h
//  Messenger for Telegram
//
//  Created by keepcoder on 28.02.14.
//  Copyright (c) 2014 keepcoder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TGUpdateState.h"

@class ASQueue;
@interface TGProccessUpdates : NSObject

-(void)addUpdate:(id)update;
-(void)updateDifference;
-(void)drop;

-(id)initWithQueue:(ASQueue *)queue;

-(void)resetStateAndSync;

+(void)checkAndLoadIfNeededSupportMessages:(NSArray *)messages asyncCompletionHandler:(dispatch_block_t)completionHandler;
+(void)checkAndLoadIfNeededSupportMessages:(NSArray *)messages;
@end
