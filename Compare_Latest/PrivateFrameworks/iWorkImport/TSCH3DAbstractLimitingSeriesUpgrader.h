/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSCHChartInfo;

// Not exported
@interface TSCH3DAbstractLimitingSeriesUpgrader : NSObject
{
    TSCHChartInfo *mChartInfo;
    id mWillModifyBlock;
}

+ (id)upgraderWithChartInfo:(id)arg1;
+ (double)depthFactorForAdjustingNumberOfSeries:(unsigned long long)arg1 chartType:(id)arg2 fromOldLimitingSeries:(unsigned long long)arg3 toNewLimitingSeries:(unsigned long long)arg4;
+ (_Bool)chartTypeUsesSeriesLimiting:(id)arg1;
@property(copy, nonatomic) id willModifyBlock; // @synthesize willModifyBlock=mWillModifyBlock;
- (void)upgrade;
- (void)mutateInfoByAdjustingScaleFromLayoutSettings:(const CDStruct_9aa9521f *)arg1 toLayoutSettings:(const CDStruct_9aa9521f *)arg2;
- (id)adjustedScaleFromLayoutSettings:(const CDStruct_9aa9521f *)arg1 toLayoutSettings:(const CDStruct_9aa9521f *)arg2;
- (unsigned long long)numberOfSeries;
- (void)mutateInfoWithContainingViewport:(id)arg1 scene:(id)arg2;
- (id)constantDepthInfoChartScaleForInfoChartScale:(id)arg1;
- (void)mutateInfoWithMutations:(id)arg1;
- (id)configuredSceneWithLayoutSettings:(CDStruct_9aa9521f)arg1;
- (void)configureScene:(id)arg1;
- (CDStruct_9aa9521f)upgradedLayoutSettings;
- (CDStruct_9aa9521f)oldLayoutSettings;
- (void)dealloc;
- (id)initWithChartInfo:(id)arg1;

@end

