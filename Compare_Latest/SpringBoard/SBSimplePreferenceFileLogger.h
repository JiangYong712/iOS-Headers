/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBFileLogger.h"

@class NSString;

@interface SBSimplePreferenceFileLogger : SBFileLogger
{
    _Bool _enabled;
}

- (void)reloadFromDefaults;
@property(readonly, nonatomic) NSString *logPreferenceName;
@property(readonly, nonatomic) NSString *logPreferenceDomain;
- (_Bool)isEnabled;

@end

