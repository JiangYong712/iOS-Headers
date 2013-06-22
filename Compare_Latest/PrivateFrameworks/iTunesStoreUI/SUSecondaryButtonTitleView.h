/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class SUNavigationItem, UIBarButtonItem;

@interface SUSecondaryButtonTitleView : UIView
{
    UIBarButtonItem *_buttonItem;
    UIView *_buttonItemView;
    SUNavigationItem *_navigationItem;
    UIView *_titleView;
    BOOL _titleViewIsCustom;
}

@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) SUNavigationItem *navigationItem; // @synthesize navigationItem=_navigationItem;
@property(nonatomic, getter=isCustomTitleView) BOOL customTitleView; // @synthesize customTitleView=_titleViewIsCustom;
@property(retain, nonatomic) UIBarButtonItem *buttonItem; // @synthesize buttonItem=_buttonItem;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithNavigationItem:(id)arg1;
- (id)init;

@end
