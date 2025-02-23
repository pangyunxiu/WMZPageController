//
//  WMZPageProtocol.h
//  WMZPageController
//
//  Created by wmz on 2019/10/13.
//  Copyright © 2019 wmz. All rights reserved.
//


#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol WMZPageProtocol <NSObject>

@optional
/// 悬浮 可滑动的滚动视图
- (UITableView*)getMyTableView;
/// 悬浮 两者一样 下面的只是为了减少非tableview的警告
- (UIScrollView*)getMyScrollView;
/// 悬浮 数组 可滚动视图的数组 适用底部多个scrollView的情况
- (NSArray <UIScrollView*>*)getMyScrollViews;
/// 子控制器需要固定的尾部视图
- (UIView*)fixFooterView;

/// 生命周期 和VC的生命周期用法一致
- (void)pageViewWillAppear;

- (void)pageViewWillDisappear;

- (void)pageViewDidAppear;

- (void)pageViewDidDisappear;

@end

NS_ASSUME_NONNULL_END
