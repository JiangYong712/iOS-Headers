/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSManagedObject.h"

@class NSString;

@interface TIUserDictionaryWord : NSManagedObject
{
    NSString *_sectionIndex;
}

+ (id)entityDescription;
+ (id)sortDescriptors;
- (void)dealloc;
- (int)validateWithNewTarget:(id)arg1 newShortcut:(id)arg2;
@property(copy, nonatomic) NSString *target; // @dynamic target;
@property(copy, nonatomic) NSString *shortcut; // @dynamic shortcut;
@property(copy, nonatomic) NSString *sectionIndex; // @synthesize sectionIndex=_sectionIndex;

@end

