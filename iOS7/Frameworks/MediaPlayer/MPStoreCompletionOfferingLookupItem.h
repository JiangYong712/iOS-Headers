/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MPMediaQuery, NSNumber, NSString;

@interface MPStoreCompletionOfferingLookupItem : NSObject
{
    _Bool _wantsArtwork;
    MPMediaQuery *_albumItemsQuery;
    unsigned long long _tokenID;
    id _responseBlock;
    NSNumber *_storeLookupID;
}

+ (id)storeLookupIDForAlbumItemsQuery:(id)arg1;
@property(readonly, nonatomic) NSNumber *storeLookupID; // @synthesize storeLookupID=_storeLookupID;
@property(readonly, nonatomic) _Bool wantsArtwork; // @synthesize wantsArtwork=_wantsArtwork;
@property(readonly, nonatomic) id responseBlock; // @synthesize responseBlock=_responseBlock;
@property(readonly, nonatomic) unsigned long long tokenID; // @synthesize tokenID=_tokenID;
@property(readonly, nonatomic) MPMediaQuery *albumItemsQuery; // @synthesize albumItemsQuery=_albumItemsQuery;
- (void).cxx_destruct;
- (id)_specificationForArtworkSizesToRequest;
- (id)newLookupRequest;
- (id)lookupRequestForAlbumWithRepresentativeItem:(id)arg1;
- (id)lookupRequestForStorePlaylistIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *storeLookupIDString;
- (id)initWithAlbumItemsQuery:(id)arg1 tokenID:(long long)arg2 wantsArtwork:(_Bool)arg3 responseBlock:(id)arg4;

@end

