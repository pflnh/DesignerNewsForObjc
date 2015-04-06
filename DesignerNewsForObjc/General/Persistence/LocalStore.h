//
//  LocalStore.h
//  DesignerNewsForObjc
//
//  Created by Sam Lau on 4/6/15.
//  Copyright (c) 2015 Sam Lau. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LocalStore : NSObject

+ (void)saveToken:(NSString *)token;
+ (NSString *)getToken;

@end