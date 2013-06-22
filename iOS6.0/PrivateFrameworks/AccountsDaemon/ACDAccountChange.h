/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ACAccount;

@interface ACDAccountChange : NSObject
{
    int _changeType;
    ACAccount *_account;
    ACAccount *_oldAccount;
}

+ (id)changeWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;
@property(retain, nonatomic) ACAccount *oldAccount; // @synthesize oldAccount=_oldAccount;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
- (void).cxx_destruct;
- (id)initWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;

@end
