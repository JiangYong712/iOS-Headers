/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface ABFavoritesEntry : NSObject
{
    int _abUid;
    int _abIdentifier;
    NSString *_value;
    int _property;
    int _type;
    unsigned int _dirty:1;
    NSString *_label;
    NSString *_name;
    NSString *_abDatabaseUUID;
    void *_addressBook;
}

- (id)initWithPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3;
- (id)initWithPerson:(void *)arg1 property:(int)arg2 identifier:(int)arg3 type:(int)arg4;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void *)arg2;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)dictionaryRepresentation:(id *)arg1 isDirty:(char *)arg2;
- (id)displayName;
- (int)property;
- (id)label;
- (id)nonLocalizedLabel;
- (id)value;
- (int)identifier;
- (int)type;
- (void *)ABPerson;
- (int)_abUid;
- (BOOL)isEqual:(id)arg1;
- (void)recheckAddressBook;

@end
