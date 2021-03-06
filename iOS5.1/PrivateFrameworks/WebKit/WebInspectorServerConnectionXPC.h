/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebKit/WebInspectorServerConnection.h>

@class NSString, WebInspectorServerXPC;

@interface WebInspectorServerConnectionXPC : WebInspectorServerConnection
{
    WebInspectorServerXPC *_server;
    NSString *_destination;
    NSString *_identifier;
}

- (id)initWithServer:(id)arg1 destination:(id)arg2 identifier:(id)arg3;
- (BOOL)setupChannel;
- (void)dealloc;
- (id)identifier;
- (void)clearChannel;
- (void)sendWebSocketMessage:(id)arg1;
- (void)receivedData:(id)arg1;
- (void)receivedDidClose:(id)arg1;

@end

