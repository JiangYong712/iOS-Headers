/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface UIFont : NSObject <NSCopying>
{
}

+ (id)classFallbacksForKeyedArchiver;
+ (id)ib_preferredFontForTextStyle:(id)arg1;
+ (id)defaultFontForTextStyle:(id)arg1;
+ (id)preferredFontForUsage:(id)arg1 contentSizeCategoryName:(id)arg2;
+ (id)preferredFontForUsage:(id)arg1;
+ (id)preferredFontForTextStyle:(id)arg1;
+ (double)systemFontSize;
+ (double)smallSystemFontSize;
+ (double)buttonFontSize;
+ (double)labelFontSize;
+ (id)_systemFontsOfSize:(double)arg1 traits:(int)arg2;
+ (id)fontWithDescriptor:(id)arg1 size:(double)arg2;
+ (id)_ultraLightSystemFontOfSize:(double)arg1;
+ (id)_lightSystemFontOfSize:(double)arg1;
+ (id)_thinSystemFontOfSize:(double)arg1;
+ (id)italicSystemFontOfSize:(double)arg1;
+ (id)boldSystemFontOfSize:(double)arg1;
+ (id)_opticalBoldSystemFontOfSize:(double)arg1;
+ (id)_opticalSystemFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1 traits:(int)arg2;
+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)familyNames;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;
+ (id)fontWithName:(id)arg1 size:(double)arg2;
+ (id)fontWithName:(id)arg1 size:(double)arg2 traits:(int)arg3;
+ (void)_evictAllItemsFromFontAndFontDescriptorCaches;
+ (id)_sharedFontCache;
+ (id)_sharedZeroPointFont;
+ (void)initialize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)markupDescription;
- (id)familyNameForCSSFontFamilyValue;
- (_Bool)isFixedPitch;
- (_Bool)isIBTextStyleFont;
- (double)_leading;
@property(readonly, nonatomic) double xHeight;
@property(readonly, nonatomic) double capHeight;
@property(readonly, nonatomic) double leading;
@property(readonly, nonatomic) double lineHeight;
@property(readonly, nonatomic) double descender;
@property(readonly, nonatomic) double ascender;
- (_Bool)isSystemFont;
@property(readonly, nonatomic) double pointSize;
- (int)traits;
@property(readonly, nonatomic) NSString *fontName;
@property(readonly, nonatomic) NSString *familyName;
- (id)fontWithSize:(double)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_fontScaledByScaleFactor:(double)arg1;
- (id)initWithMarkupDescription:(id)arg1;
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(double)arg3;
- (id)initWithName:(id)arg1 size:(double)arg2;
- (id)_alternateSystemFonts;
- (id)fontDescriptor;

@end

