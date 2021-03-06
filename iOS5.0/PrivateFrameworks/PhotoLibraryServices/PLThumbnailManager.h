/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSIndexSet, NSLock, NSMutableOrderedSet, PLImageTable, PLPhotoLibrary;

@interface PLThumbnailManager : NSObject
{
    PLPhotoLibrary *_photoLibrary;
    NSLock *_lock;
    float _indexSheetBorderWidth;
    NSIndexSet *_occupiedIndexes;
    NSDictionary *_changedPhotosMap;
    NSArray *_changedPhotos;
    PLImageTable *_indexSheetThumbs;
    PLImageTable *_wildcatScrubberThumbs;
    PLImageTable *_wildcatIndexThumbs;
    PLImageTable *_wildcatStackThumbs;
    NSMutableOrderedSet *_assetUUIDsWithThumbnails;
}

+ (void)resetImageTables;
+ (BOOL)missingThumbnailTables;
+ (BOOL)thumbnailTablesNeedToBeRecreated;
+ (int)thumbnailFormat;
+ (int)thumbnailVersion;
+ (void)removeObsoleteMetadata;
@property(nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (id)_tableDescriptions;
- (void)thumbnailTablesChangedExternally;
- (id)photoUUIDToIndexMap;
- (id)compactImageTables;
- (id)preflightImageTableCompactionForPhotos:(id)arg1;
- (int)count;
- (BOOL)entryAtIndexIsPlaceholder:(int)arg1;
- (void)ensureIndexExists:(int)arg1;
- (void)deleteThumbnailsForPhoto:(id)arg1;
- (void)deleteThumbnailsAtIndex:(int)arg1;
- (void)updateThumbnailsForPhoto:(id)arg1 previewImage:(id)arg2 thumbnailImage:(id)arg3 generatePreviewImage:(BOOL)arg4 assignNewIndex:(BOOL)arg5;
- (void)updateThumbnailsForPhoto:(id)arg1 previewImage:(id)arg2 thumbnailImage:(id)arg3 generatePreviewImage:(BOOL)arg4;
- (void)setThumbnails:(struct __CFDictionary *)arg1 forPhoto:(id)arg2;
- (id)newImageForPhoto:(id)arg1 withFormat:(int)arg2 outImageProperties:(const struct __CFDictionary **)arg3;
- (struct __CFDictionary *)assetUUIDToThumbnailIndexMappingForFormat:(int)arg1;
- (void)preheatImageDataForAssets:(id)arg1 format:(int)arg2;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
@property(readonly, nonatomic) PLImageTable *wildcatStackThumbs;
@property(readonly, nonatomic) PLImageTable *wildcatIndexThumbs;
@property(readonly, nonatomic) PLImageTable *wildcatScrubberThumbs;
@property(readonly, nonatomic) PLImageTable *indexSheetThumbs;
- (void)clearCachedInformation;
- (void)dealloc;
- (id)initWithWeakPhotoLibrary:(id)arg1;

@end

