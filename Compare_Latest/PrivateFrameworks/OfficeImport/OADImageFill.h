/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADFill.h>

@class OADBlipRef, OADImageFillTechnique, OADRelativeRect;

@interface OADImageFill : OADFill
{
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
    OADRelativeRect *mSourceRect;
    BOOL mIsSourceRectOverridden;
    int mDpi;
    BOOL mIsDpiOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADImageFillTechnique *mTechnique;
    BOOL mIsTechniqueOverridden;
}

+ (id)defaultProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDefaults;
- (void)setParent:(id)arg1;
- (id)color;
- (id)blipRef;
- (void)setBlipRef:(id)arg1;
- (BOOL)isBlipRefOverridden;
- (id)sourceRect;
- (void)setSourceRect:(id)arg1;
- (BOOL)isSourceRectOverridden;
- (long)dpi;
- (void)setDpi:(long)arg1;
- (BOOL)isDpiOverridden;
- (BOOL)rotateWithShape;
- (void)setRotateWithShape:(BOOL)arg1;
- (BOOL)isRotateWithShapeOverridden;
- (id)technique;
- (void)setTechnique:(id)arg1;
- (BOOL)isTechniqueOverridden;
- (void)setStyleColor:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end
