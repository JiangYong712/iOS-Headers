/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, TSUProgressStage;

// Not exported
@interface TSUProgressContext : NSObject
{
    TSUProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    double m_lastProgressReport;
}

- (double)overallProgress;
- (double)currentPosition;
- (void)setMessage:(id)arg1;
- (void)setPercentageProgressFromCPProgressContext:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)advanceProgress:(double)arg1;
- (void)endStage;
- (void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1;
- (void)createStageWithSteps:(double)arg1;
- (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverBlock:(id)arg1;
- (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
- (void)reset;

@end

