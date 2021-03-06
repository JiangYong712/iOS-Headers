/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

// Not exported
@interface NSConcreteData : NSData
{
    unsigned int _isInline:1;
    unsigned int _retainCount:31;
    unsigned long long _length;
    unsigned long long _capacity;
    void *_bytes;
    union {
        unsigned char _space[12];
        id _deallocator;
        void _field1;
    } _u;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 freeWhenDone:(_Bool)arg4 bytesAreVM:(_Bool)arg5;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(_Bool)arg3 deallocator:(id)arg4;
- (id)init;
- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const void *)bytes;
- (unsigned long long)length;

@end

