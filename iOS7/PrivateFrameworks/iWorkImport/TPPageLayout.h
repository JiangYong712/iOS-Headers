/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDLayout.h>

@class TPBodyLayout;

// Not exported
@interface TPPageLayout : TSDLayout
{
}

- (_Bool)isRootLayoutForInspectorGeometry;
@property(readonly, nonatomic) id <NSFastEnumeration> childTextLayoutsForExteriorWrap;
- (void)invalidateSize;
- (id)dependentLayouts;
- (id)computeLayoutGeometry;
- (void)parentDidChange;
- (void)parentWillChangeTo:(id)arg1;
- (id)pageLayout;
- (unsigned long long)pageIndex;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (_Bool)providesGuidesForChildLayouts;
- (_Bool)isReadyForBodyLayout;
- (id)primaryLayoutForInfo:(id)arg1;
- (void)invalidateLayoutsForPageCountChange;
@property(readonly, nonatomic) _Bool allowsHeaderFooter;
@property(readonly, nonatomic) _Bool allowsFootnotes;
@property(readonly, nonatomic) _Bool allowsBody;
@property(readonly, nonatomic) double footerHeight;
@property(readonly, nonatomic) double headerHeight;
@property(readonly, nonatomic) struct CGRect bodyRect;
@property(readonly, nonatomic) TPBodyLayout *bodyLayout;
- (_Bool)shouldProvideGuidesDuringExclusiveAlignmentOperation;
- (void)dealloc;

@end

