/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/ODDLayoutObject.h>

@class NSMutableArray, ODDOtherwise;

@interface ODDChoose : ODDLayoutObject
{
    NSMutableArray *mWhens;
    ODDOtherwise *mOtherwise;
}

- (id)init;
- (void)dealloc;
- (id)whens;
- (void)addWhen:(id)arg1;
- (id)otherwise;
- (void)setOtherwise:(id)arg1;

@end
