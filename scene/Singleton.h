//
//  Singleton.h
//  scene
//
//  Created by 三栖 惇 on 2014/06/04.
//  Copyright (c) 2014年 三栖 惇. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

@interface Singleton : NSObject

+ (AVAudioPlayer *)bgm1;
@property(nonatomic) AVAudioPlayer *bgm1;

@end