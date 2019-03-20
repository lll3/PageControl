//
//  PageControl.h
//  PageControl
//
//  Created by shuangda on 2019/3/20.
//  Copyright © 2019年 lll. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PageControl : UIControl

@property (nonatomic, strong) UIScrollView * scrollView;


/**
 页数
 */
@property (nonatomic, assign) NSInteger numberOfPages;


/**
 圆点颜色
 */
@property (nonatomic, strong) UIColor * pageIndicatorColor;


/**
 当前指示器颜色
 */
@property (nonatomic, strong) UIColor * currentPageIndicatorColor;

/**
 当前页
 */
@property (nonatomic, assign) NSInteger currentPage;


/**
 初始化

 @param frame 框架
 @param margin 间距
 @param indicatorWidth 宽度
 @param currentIndicatorWidth 当前 宽度
 @param indicatorHeight 高
 @return return value description
 */
- (instancetype)initWithFrame:(CGRect)frame indicatorMargin:(CGFloat)margin indicatorWidth:(CGFloat)indicatorWidth currentIndicatorWidth:(CGFloat)currentIndicatorWidth indicatorHeight:(CGFloat)indicatorHeight;

@end

NS_ASSUME_NONNULL_END
