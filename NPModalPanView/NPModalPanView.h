//
//  HZQUserResizableView.h
//  HZQUserResizableView
//
//  Created by 1 on 16/3/21.
//  Copyright © 2016年 HZQ. All rights reserved.
//

#import <UIKit/UIKit.h>
 
//屏幕的宽度
#define kPanScreenWidth [UIScreen mainScreen].bounds.size.width
//屏幕的高度
#define kPanScreenHeight [UIScreen mainScreen].bounds.size.height
 
typedef struct NPModalPanViewAnchorPoint {
    CGFloat adjustsX;
    CGFloat adjustsY;
    CGFloat adjustsH;
    CGFloat adjustsW;
} NPModalPanViewAnchorPoint;

@protocol NPModalPanViewDelegate;

@interface NPModalPanView : UIView {
    CGPoint touchStart;
    CGFloat minWidth;
    CGFloat minHeight;
    
    // 用于确定哪些位置的点才能触发拖动事件.
    NPModalPanViewAnchorPoint anchorPoint;
}

@property (nonatomic, strong) id <NPModalPanViewDelegate> delegate;

/** 容器View */
@property (nonatomic, assign) UIView *contentView;

/** 距离顶部的间距 */
@property (nonatomic, assign) CGFloat topDistance;
/** 距离底部的间距 */
@property (nonatomic, assign) CGFloat bottomDistance;

@end

@protocol NPModalPanViewDelegate <NSObject>

@optional

/** 开始拖动的时候响应的代理方法 */
- (void)modelPanViewDidBeginEditing:(NPModalPanView *)userResizableView;

/** 结束拖动的时候响应的代理方法 */
- (void)modalPanViewDidEndEditing:(NPModalPanView *)userResizableView;

@end
