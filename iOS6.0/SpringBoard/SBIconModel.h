/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSSet, SBNewsstandIcon, SBPrintStatusIcon, SBRootFolder;

@interface SBIconModel : NSObject
{
    NSDictionary *_desiredIconState;
    NSSet *_desiredIconStateFlattened;
    NSMutableDictionary *_leafIconsByIdentifier;
    NSSet *_hiddenIconTags;
    NSSet *_visibleIconTags;
    BOOL _tagsHaveBeenSet;
    SBRootFolder *_rootFolder;
    SBNewsstandIcon *_newsstandIcon;
    SBPrintStatusIcon *_printStatusIcon;
    id <SBIconModelStore> _store;
    id <SBIconModelDelegate> _delegate;
    BOOL _allowsSaving;
}

+ (id)modernIconStateForState:(id)arg1;
+ (id)_modernIconListsForLists:(id)arg1;
+ (id)_modernIconListForList:(id)arg1;
+ (id)_modernIconCellForCell:(id)arg1;
+ (id)_migrateLeafIdentifierIfNecessary:(id)arg1;
@property(nonatomic) id <SBIconModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL allowsSaving; // @synthesize allowsSaving=_allowsSaving;
@property(retain, nonatomic) NSDictionary *leafIconsByIdentifier; // @synthesize leafIconsByIdentifier=_leafIconsByIdentifier;
- (BOOL)importState:(id)arg1;
- (id)_iTunesDictionaryForDownloadingIcon:(id)arg1;
- (id)_iTunesDictionaryForLeafIcon:(id)arg1;
- (id)_iTunesDictionaryForLeafIdentifier:(id)arg1;
- (id)_iTunesIconCellForCell:(id)arg1 preApex:(BOOL)arg2 forPending:(BOOL)arg3;
- (id)_iTunesIconListForList:(id)arg1 preApex:(BOOL)arg2 forPending:(BOOL)arg3;
- (id)_iTunesIconListsForLists:(id)arg1 preApex:(BOOL)arg2 forPending:(BOOL)arg3;
- (id)exportFlattenedState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2;
- (id)exportPendingState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2;
- (id)exportState:(BOOL)arg1;
- (id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(BOOL)arg2;
- (void)layout;
- (id)_flattenIconState:(id)arg1;
- (id)_newsstandIconIdentifiersFromIconState:(id)arg1;
- (id)newsstandFolderFromIconState:(id)arg1;
- (void)_flattenIconListState:(id)arg1 intoArray:(id)arg2;
- (void)_replaceAppIconsWithDownloadingIcons:(id)arg1;
- (void)_replaceAppIconsWithDownloadingIcons;
- (void)saveIconState;
- (void)_saveDesiredIconState;
- (void)deleteIconState;
- (void)_addNewIconToDesignatedLocation:(id)arg1;
- (id)indexPathForNewIcon:(id)arg1 isDesignatedLocation:(char *)arg2 replaceExistingIconAtIndexPath:(id *)arg3;
- (id)_indexPathForFirstFreeNewsstandSlot;
- (void)clearDesiredIconStateIfPossible;
- (void)clearDesiredIconState;
- (BOOL)hasDesiredIconState;
- (id)_indexPathForIdentifier:(id)arg1 inListsRepresentation:(id)arg2;
- (id)_indexPathForIdentifier:(id)arg1 inListRepresentation:(id)arg2;
- (id)indexPathForIconInPlatformState:(id)arg1;
- (void)removeIconForIdentifier:(id)arg1;
- (void)removeIcon:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)_createIconLists;
- (id)firstPageLeafIdentifiers;
- (id)_modernPlatformState;
- (id)_iconState;
- (id)iconState;
- (id)applicationIconForDisplayIdentifier:(id)arg1;
- (id)leafIconForIdentifier:(id)arg1;
- (id)expectedIconForDisplayIdentifier:(id)arg1;
- (id)_applicationIcons;
- (id)leafIcons;
- (id)visibleIconIdentifiers;
- (void)loadAllIcons;
- (void)addNewsstandIcon;
- (void)addIconForApplication:(id)arg1;
- (id)addBookmarkIconForWebClip:(id)arg1;
- (id)leafIconForWebClipIdentifier:(id)arg1;
- (id)leafIconForWebClip:(id)arg1;
- (id)downloadingIconForIdentifier:(id)arg1;
- (void)removeApplicationIconForDownloadingIcon:(id)arg1;
- (id)addDownloadingIconForIdentifier:(id)arg1;
- (id)addDownloadingIconForDownload:(id)arg1;
- (BOOL)isIconVisible:(id)arg1;
- (void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2;
- (void)_postIconVisibilityChangedNotificationShowing:(id)arg1 hiding:(id)arg2;
- (void)localeChanged;
- (id)newsstandFolder;
- (id)newsstandIcon;
- (id)printStatusIcon;
- (id)rootFolder;
- (void)dealloc;
- (id)initWithStore:(id)arg1;

@end
