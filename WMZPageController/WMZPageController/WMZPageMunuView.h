//
//  WMZPageMunuView.h
//  WMZPageController
//
//  Created by wmz on 2020/10/16.
//  Copyright © 2020 wmz. All rights reserved.
//

#import "WMZPageNaviBtn.h"
NS_ASSUME_NONNULL_BEGIN

@protocol WMZPageMunuDelegate <NSObject>

@optional
/// 标题点击
- (void)titleClick:(WMZPageNaviBtn*)btn fix:(BOOL)fixBtn;

@end

@interface WMZPageMunuView : UIScrollView
/// 当前index
@property (nonatomic, assign) NSInteger currentTitleIndex;
/// 配置
@property (nonatomic, strong) WMZPageParam *param;
/// 下划线
@property (nonatomic, strong) UIButton *lineView;
/// 标题按钮
@property (nonatomic, strong) NSMutableArray <WMZPageNaviBtn*>*btnArr;
/// 固定按钮
@property (nonatomic, strong) NSMutableArray <WMZPageNaviBtn*>*fixBtnArr;
/// 代理
@property (nonatomic, weak) id <WMZPageMunuDelegate> menuDelegate;
/// 上次选中左侧标题
@property (nonatomic, strong) WMZPageNaviBtn *lastBTN;
////  上次选中右侧固定标题
@property (nonatomic, strong) WMZPageNaviBtn *fixLastBtn;
/// 最底部下划线
@property (nonatomic, strong) UIView *bottomView;
/// 滚动到index
/// @param animal 带动画
- (void)scrollToIndex:(NSInteger)newIndex animal:(BOOL)animal;
/// 设置默认选中
- (void)setDefaultSelect:(NSInteger)index;
/// 获取菜单高度
- (CGFloat)getMainHeight;
/// 设置标题
- (void)setPropertiesWithBtn:(WMZPageNaviBtn*)btn withIndex:(NSInteger)i  withTemp:(WMZPageNaviBtn*)temp;
/// 重置contensize
- (void)resetMainViewContenSize:(WMZPageNaviBtn*)btn;

@end

NS_ASSUME_NONNULL_END
