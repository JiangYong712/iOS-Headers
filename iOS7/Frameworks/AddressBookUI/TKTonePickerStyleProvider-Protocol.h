/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class UIColor, UIFont;

@protocol TKTonePickerStyleProvider <NSObject>
@property(readonly, nonatomic) struct UIEdgeInsets tonePickerHeaderTextPaddingInsets;
@property(readonly, nonatomic) struct UIOffset tonePickerHeaderTextShadowOffset;
@property(readonly, nonatomic) UIColor *tonePickerHeaderTextShadowColor;
@property(readonly, nonatomic) UIColor *tonePickerHeaderTextColor;
@property(readonly, nonatomic) UIFont *tonePickerHeaderTextFont;
@property(readonly, nonatomic) _Bool wantsCustomTonePickerHeaderView;
@property(readonly, nonatomic) UIColor *tonePickerCellBackgroundColor;
@property(readonly, nonatomic) UIColor *tonePickerCellHighlightedTextColor;
@property(readonly, nonatomic) UIColor *tonePickerCellTextColor;
@property(readonly, nonatomic) UIFont *tonePickerCellTextFont;
@property(readonly, nonatomic) long long tonePickerTableViewSeparatorStyle;
@property(readonly, nonatomic) _Bool tonePickerUsesOpaqueBackground;
- (id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (id)newBackgroundViewForSelectedTonePickerCell:(_Bool)arg1;
@end

