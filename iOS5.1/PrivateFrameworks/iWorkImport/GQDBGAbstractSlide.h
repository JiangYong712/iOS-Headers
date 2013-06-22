/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GQDBGBodyPlaceholder, GQDBGObjectPlaceholder, GQDBGSlideNumberPlaceholder, GQDBGTitlePlaceholder, GQDSStyle, GQDSStylesheet;

@interface GQDBGAbstractSlide : NSObject
{
    GQDSStylesheet *mStylesheet;
    GQDSStyle *mSlideStyle;
    GQDBGTitlePlaceholder *mTitlePlaceholder;
    GQDBGBodyPlaceholder *mBodyPlaceholder;
    GQDBGObjectPlaceholder *mObjectPlaceholder;
    GQDBGSlideNumberPlaceholder *mSlideNumberPlaceholder;
    BOOL mHidden;
    char *mID;
    BOOL mCallGenerator;
}

- (void)dealloc;
- (id)slideStyle;
- (id)stylesheet;
- (BOOL)isHidden;
- (char *)ID;
- (int)readAttributesForSlide:(struct _xmlTextReader *)arg1;

@end
