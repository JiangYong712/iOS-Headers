/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDTNumberFormat.h>

@interface GQDTNumberFormat (Private)
+ (id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString *)arg9;
+ (_Bool)needToSuppressMinusSignForFormatString:(struct __CFString *)arg1;
- (int)fractionAccuracy;
- (_Bool)isTextFormat;
- (_Bool)isCustom;
- (id)customNumberFormatTokens;
- (_Bool)showThousandsSeparator;
- (id)currencyCode;
- (id)formatString;
- (id)numberFormatBySettingValueType:(int)arg1;
- (id)numberFormatBySettingNegativeStyle:(int)arg1;
- (void)setUseScientificFormattingAutomatically:(_Bool)arg1;
- (id)baseStringFromDouble:(double)arg1;
- (id)fractionStringFromDouble:(double)arg1;
- (id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(_Bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(_Bool)arg7 fractionAccuracy:(int)arg8 suffixString:(struct __CFString *)arg9 scaleFactor:(double)arg10 base:(unsigned short)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(_Bool)arg13 isCustom:(_Bool)arg14 interstitialStrings:(id)arg15 interstitialStringInsertionIndexes:(id)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(_Bool)arg22 formatName:(id)arg23;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
@end

