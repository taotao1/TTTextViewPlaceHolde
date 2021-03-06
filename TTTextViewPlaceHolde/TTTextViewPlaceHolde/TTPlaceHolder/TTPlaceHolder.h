//
//  TTPlaceHolder.H
//  TTTextViewPlaceHolde
//
//  Created by jianghaitao on 2018/6/8.
//  Copyright © 2018年 taotao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (TTPlaceHolder)
/** 
 *  UITextView+placeholder
 */
@property (nonatomic, copy) NSString *zw_placeHolder;
/**
 *  IQKeyboardManager等第三方框架会读取placeholder属性并创建UIToolbar展示
 */
@property (nonatomic, copy) NSString *placeholder;
/** 
 *  placeHolder颜色
 */
@property (nonatomic, strong) UIColor *zw_placeHolderColor;

@end
