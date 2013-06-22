/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface EventSystemManager : NSObject
{
    struct __IOHIDEventSystemClient *eventSystemClient;
    NSMutableArray *clientList;
    struct __CFRunLoop *runLoop;
    BOOL manageAccel;
    int accelEventIndex;
    int accelUpdateInternalUS;
}

+ (id)sharedEventSystem;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)refreshEventSystem;
- (void)setAccelUpdateInterval:(double)arg1;
- (BOOL)managingAccel;
- (id)clientList;
- (void)updateClientState;
- (struct __IOHIDEventSystemClient *)eventSystemClient;
- (void)dealloc;
- (id)init;

@end
