/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class NSString;

@interface SBWidgetViewControllerHost : UIViewController
{
    id <SBWidgetViewControllerHostDelegate> _delegate;
    long long _widgetIdiom;
    NSString *_widgetIdentifier;
    NSString *_appBundleID;
    NSString *_displayName;
    struct {
        unsigned int _didFetchDisplayName:1;
    } _widgetViewControllerHostFlags;
}

+ (id)requestViewController:(id)arg1 context:(id)arg2 handler:(id)arg3;
+ (id)_requestLocalViewControllerOfClass:(Class)arg1 context:(id)arg2 handler:(id)arg3;
+ (_Bool)canLoadWidgetWithIdentifier:(id)arg1 forWidgetIdiom:(long long)arg2 bundlePath:(id)arg3;
+ (id)widgetViewControllerWithIdentifier:(id)arg1 forWidgetIdiom:(long long)arg2 bundlePath:(id)arg3;
+ (void)_invalidateVendedWidgetClass;
@property(readonly, nonatomic) long long widgetIdiom; // @synthesize widgetIdiom=_widgetIdiom;
@property(readonly, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(readonly, nonatomic) NSString *widgetIdentifier; // @synthesize widgetIdentifier=_widgetIdentifier;
@property(nonatomic) id <SBWidgetViewControllerHostDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
- (void)_requestLaunchOfURL:(id)arg1;
- (void)_requestPresentationOfViewController:(id)arg1 presentationStyle:(long long)arg2 context:(id)arg3 completion:(id)arg4;
- (void)requestPreferredViewSizeWithHandler:(id)arg1;
@property(readonly, nonatomic) NSString *displayName;
- (void)dealloc;
- (id)initWithWidgetIdentifier:(id)arg1 forWidgetIdiom:(long long)arg2 bundlePath:(id)arg3;

@end

