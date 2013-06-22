/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSSQLAdapter, NSSQLStatement;

@interface NSSQLConnection : NSObject
{
    NSSQLAdapter *_adapter;
    BOOL _transactionIsOpen;
    BOOL _useSyntaxColoredLogging;
    int _debug;
    NSSQLStatement *_sqlStatement;
    NSArray *_columnsToFetch;
    NSArray *_metadataColumns;
}

+ (void)initialize;
- (void)_raiseOptimisticLockingExceptionWithReason:(id)arg1;
- (id)initWithAdapter:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)adapter;
- (void)beginTransaction;
- (void)commitTransaction;
- (void)rollbackTransaction;
- (void)connect;
- (void)awake;
- (void)sleep;
- (void)disconnect;
- (BOOL)hasOpenTransaction;
- (void)forceTransactionClosed;
- (void)_forceDisconnectOnError;
- (void)transactionDidBegin;
- (void)transactionDidCommit;
- (void)transactionDidRollback;
- (BOOL)canConnect;
- (BOOL)databaseIsEmpty;
- (BOOL)isOpen;
- (void)insertRow:(id)arg1;
- (void)insertCorrelation:(id)arg1;
- (void)updateCorrelation:(id)arg1;
- (void)deleteCorrelation:(id)arg1;
- (void)updateRow:(id)arg1;
- (void)deleteRow:(id)arg1;
- (void)selectAttributes:(id)arg1 fetchRequest:(id)arg2 lock:(BOOL)arg3 entity:(id)arg4;
- (void)prepareSQLStatement:(id)arg1;
- (void)execute;
- (void)resetSQLStatement;
- (void)releaseSQLStatement;
- (void)prepareAndExecuteSQLStatement:(id)arg1;
- (id)sqlStatement;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (BOOL)isFetchInProgress;
- (id)describeResults;
- (id)newFetchedArray;
- (int)fetchResultSet:(void *)arg1 usingFetchPlan:(id)arg2;
- (id)columnsToFetch;
- (void)setColumnsToFetch:(id)arg1;
- (void)endFetch;
- (void)performAdapterOperation:(id)arg1;
- (void)performAdapterOperations:(id)arg1;
- (void)createTableForEntity:(id)arg1;
- (void)createManyToManyTablesForEntity:(id)arg1;
- (void)createIndexesForEntity:(id)arg1;
- (void)createTablesForEntities:(id)arg1;
- (void)createMetadata;
- (void)willCreateSchema;
- (void)didCreateSchema;
- (void)createSchema;
- (struct __CFArray *)rawIntegerRowsForSQL:(id)arg1;
- (long long)fetchMaxPrimaryKeyForEntity:(id)arg1;
- (id)fetchTableNames;
- (id)fetchTableCreationSQL;
- (BOOL)hasMetadataTable;
- (void)saveMetadata:(id)arg1;
- (id)metadataColumns;
- (id)fetchMetadata;
- (long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned int)arg2;
- (void)prepareForPrimaryKeyGeneration;
- (void)endPrimaryKeyGeneration;
- (BOOL)hasPrimaryKeyTable;
- (void)createPrimaryKeyTableForModel:(id)arg1 knownEmpty:(BOOL)arg2;
- (void)_performPostSaveTasks;
- (id)fetchUbiqiutyKnowledgeVector;
- (void)updateUbiquityKnowledgeVector:(id)arg1;
- (void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2;
- (void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6;
- (id)allPeerRanges;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntities:(id)arg1;
- (void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2;
- (id)ubiquityTableKeysAndValues;
- (id)ubiquityTableValueForKey:(id)arg1;

@end
