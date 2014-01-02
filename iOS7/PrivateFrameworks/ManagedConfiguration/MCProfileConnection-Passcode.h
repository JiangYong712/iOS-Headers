/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCProfileConnection.h>

@interface MCProfileConnection (Passcode)
- (id)localizedDescriptionOfCurrentPasscodeConstraints;
- (int)newPasscodeEntryScreenType;
- (int)unlockScreenType;
- (id)passcodeExpiryDateOutError:(id *)arg1;
- (void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)arg1;
- (void)notifyClientsToRecomputeCompliance;
- (void)recomputeUserComplianceWarning;
- (void)recomputeUserComplianceWarningSynchronously;
- (void)getPasscodeComplianceWarningLastLockDate:(id)arg1 completionBlock:(id)arg2;
- (int)getPasscodeComplianceWarningLastLockDate:(id)arg1 outLocalizedTitle:(id *)arg2 outLocalizedMessage:(id *)arg3;
- (int)_getPasscodeComplianceWarningExpiryDate:(id)arg1 lastLockDate:(id)arg2 outLocalizedTitle:(id *)arg3 outLocalizedMessage:(id *)arg4;
- (_Bool)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id *)arg1;
- (_Bool)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id *)arg1;
- (_Bool)passcode:(id)arg1 meetsCurrentConstraintsOutError:(id *)arg2;
- (_Bool)isContentProtectionInEffect;
- (_Bool)unlockDeviceWithPasscode:(id)arg1 outError:(id *)arg2;
- (_Bool)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id *)arg3;
- (_Bool)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id *)arg3;
- (_Bool)isPasscodeRequiredByProfiles;
- (_Bool)isPasscodeRequired;
- (_Bool)isPasscodeSet;
- (void)lockDevice;
- (void)lockDeviceImmediately:(_Bool)arg1;
@end
