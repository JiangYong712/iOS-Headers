/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIAlertViewDelegate-Protocol.h"

@class UIAlertView;

@interface SBAlertItem : NSObject <UIAlertViewDelegate>
{
    UIAlertView *_alertSheet;
    BOOL _orderOverSBAlert;
    BOOL _preventLockOver;
    BOOL _didEverActivate;
    BOOL _ignoreIfAlreadyDisplaying;
    BOOL _didPlayPresentationSound;
    BOOL _allowInSetup;
    BOOL _pendInSetupIfNotAllowed;
}

+ (id)_alertItemsController;
+ (void)activateAlertItem:(id)arg1;
- (Class)alertSheetClass;
- (id)alertSheet;
- (id)init;
- (void)dealloc;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)allowAutoUnlock;
- (BOOL)shouldShowInLockScreen;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)undimsScreen;
- (BOOL)unlocksScreen;
- (BOOL)togglesMediaControls;
- (BOOL)dismissOnLock;
- (BOOL)dismissOnModalDisplayActivation;
- (BOOL)didPlayPresentationSound;
- (void)_playPresentationSound;
- (void)playPresentationSound;
- (void)cleanPreviousConfiguration;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (id)lockLabel;
- (id)shortLockLabel;
- (float)lockLabelFontSize;
- (double)autoDismissInterval;
- (void)performUnlockAction;
- (void)setOrderOverSBAlert:(BOOL)arg1;
- (BOOL)preventLockOver;
- (void)setPreventLockOver:(BOOL)arg1;
- (void)willActivate;
- (void)didActivate;
- (void)willRelockForButtonPress:(BOOL)arg1;
- (void)buttonDismissed;
- (void)dismiss;
- (void)dismiss:(int)arg1;
- (void)screenWillUndim;
- (void)didFailToActivate;
- (void)willDeactivateForReason:(int)arg1;
- (void)didDeactivateForReason:(int)arg1;
- (void)noteVolumeOrLockPressed;
- (int)alertItemNotificationType;
- (id)alertItemNotificationDate;
- (id)alertItemNotificationSender;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)reappearsAfterLock;
- (BOOL)reappearsAfterUnlock;
- (int)alertPriority;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(nonatomic) BOOL pendInSetupIfNotAllowed; // @synthesize pendInSetupIfNotAllowed=_pendInSetupIfNotAllowed;
@property(nonatomic) BOOL allowInSetup; // @synthesize allowInSetup=_allowInSetup;
@property(nonatomic) BOOL ignoreIfAlreadyDisplaying; // @synthesize ignoreIfAlreadyDisplaying=_ignoreIfAlreadyDisplaying;

@end
