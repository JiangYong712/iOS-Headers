/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MediaControlClient;

@interface AirPlayRemoteSlideshow : NSObject
{
    struct dispatch_queue_s *_internalQueue;
    MediaControlClient *_client;
    id <AirPlayRemoteSlideshowDelegate> _delegate;
    struct dispatch_queue_s *_userQueue;
    BOOL _started;
    double _startTime;
}

@property(nonatomic) id <AirPlayRemoteSlideshowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopWithOptions:(id)arg1 completion:(id)arg2;
- (void)startWithOptions:(id)arg1 completion:(id)arg2;
- (void)getFeaturesWithCompletion:(id)arg1;
- (void)getFeaturesWithOptions:(unsigned int)arg1 completion:(id)arg2;
- (void)_configureEventHandler;
- (void)setPassword:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setDispatchQueue:(struct dispatch_queue_s *)arg1;
- (void)dealloc;
- (id)init;

@end
