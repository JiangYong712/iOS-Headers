/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class NSDictionary, NSMutableDictionary, TSCH3DScene;

// Not exported
@interface TSCH3DGeometryCollector : TSCH3DRetargetRenderProcessor
{
    TSCH3DScene *mScene;
    NSMutableDictionary *mDerivedData;
}

+ (id)collectorWithScene:(id)arg1;
+ (id)processor;
+ (id)processorWithOriginal:(id)arg1;
@property(readonly, nonatomic) NSDictionary *derivedData; // @synthesize derivedData=mDerivedData;
@property(readonly, nonatomic) TSCH3DScene *scene; // @synthesize scene=mScene;
- (void)dealloc;
- (id)init;
- (id)initWithScene:(id)arg1;

@end
