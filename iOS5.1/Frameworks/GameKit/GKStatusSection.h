/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <GameKit/GKTableSection-Protocol.h>

@class GKBackgroundView, NSError, NSString;

@interface GKStatusSection : NSObject <GKTableSection>
{
    BOOL _loading;
    NSString *_status;
    NSString *_info;
    NSError *_error;
    float _statusHeight;
    GKBackgroundView *_currentStatusView;
}

@property(retain, nonatomic) GKBackgroundView *currentStatusView; // @synthesize currentStatusView=_currentStatusView;
@property(nonatomic) float statusHeight; // @synthesize statusHeight=_statusHeight;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (float)sectionFooterHeightInTableView:(id)arg1;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)sectionHeaderViewInTableView:(id)arg1;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (int)tableView:(id)arg1 numberOfColumnsForRow:(int)arg2;
- (int)sectionRowCountInTableView:(id)arg1;
- (id)makeStatusView;
- (void)dealloc;
- (id)init;

@end

