//
//  TYLockView.h
//  TYGestureLockDemo
//
//  Created by T_yun on 2018/3/12.
//  Copyright © 2018年 tangyun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TYLockView : UIView

@property(nonatomic, copy) void(^lockFinishBlcok)(NSString *);

@end
