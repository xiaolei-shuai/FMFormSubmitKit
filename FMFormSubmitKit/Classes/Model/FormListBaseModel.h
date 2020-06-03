//
//  FormListBaseModel.h
//  ChengXuan
//
//  Created by 郑桂华 on 2019/11/28.
//  Copyright © 2019 蔡华荣. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "FormListConfigure.h"

NS_ASSUME_NONNULL_BEGIN

@interface FormListBaseModel : NSObject
@property(nonatomic, assign)CGFloat cellHeight;
@property(nonatomic, copy)NSString *reuseKey;
@property(nonatomic, copy)NSString *cellClassName;
@property(nonatomic, assign)BOOL cellIsNib;
@property(nonatomic, assign)CGFloat bottomLineHeight;
@property(nonatomic, assign)CGFloat bottomLineLRMargin;
@property(nonatomic, assign)CGFloat bottomLineLMargin;
@property(nonatomic, assign)CGFloat bottomLineRMargin;
///底部距离  给正值往上顶
@property(nonatomic, assign)CGFloat bottomLineBMargin;

@property(nonatomic, strong)UIColor *contentBg;
@property(nonatomic, strong)UIColor *bottomLineBg;

@property(nonatomic, copy)void(^congigureCell)(id cell);

@property(nonatomic, strong, readonly)id submitValue;
@property(nonatomic, copy)id(^submitValueBlock)(FormListBaseModel *model);

- (BOOL)verifySuccess:(BOOL)alert;

+ (instancetype)modelWithCellHeight:(CGFloat)cellHeight bottomLineHeight:(CGFloat)bottomLineHeight bottomLineLRMargin:(CGFloat)bottomLineLRMargin;

@end

NS_ASSUME_NONNULL_END
