/* Generated by RuntimeBrowser.
 */

@protocol HDDataEntity <HDSQLiteEntity>

@required

+ (BOOL)acceptsObject:(HKObject *)arg1;
+ (BOOL)addCodableObjectsToCollections:(NSMutableDictionary *)arg1 excludedSyncStore:(id <HDSyncStore>)arg2 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg3 lastSyncAnchor:(long long*)arg4 predicate:(HDSQLitePredicate *)arg5 limit:(unsigned int)arg6 healthDaemon:(id <HDHealthDaemon>)arg7 error:(id*)arg8;
+ (NSArray *)codableObjectCollectionsWithExcludedSyncStore:(id <HDSyncStore>)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 lastSyncAnchor:(long long*)arg3 limit:(unsigned int)arg4 healthDaemon:(id <HDHealthDaemon>)arg5 error:(id*)arg6;
+ (NSArray *)codableObjectsFromObjectCollection:(HDCodableObjectCollection *)arg1;
+ (NSString *)columnNameForSortIdentifier:(NSString *)arg1;
+ (int)countOfObjectsOfType:(int)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 predicate:(HDSQLitePredicate *)arg3 withError:(id*)arg4;
+ (id)dataEntityForObject:(HKObject *)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 error:(id*)arg3;
+ (BOOL)deleteDataObjects:(NSArray *)arg1 sourceEntity:(HDSourceEntity *)arg2 failIfNotFound:(BOOL)arg3 healthDaemon:(id <HDHealthDaemon>)arg4 error:(id*)arg5;
+ (BOOL)deleteDataObjects:(NSArray *)arg1 sourceEntity:(HDSourceEntity *)arg2 healthDaemon:(id <HDHealthDaemon>)arg3 error:(id*)arg4;
+ (NSArray *)deleteStatementsForRelatedEntitiesInDatabase:(HDSQLiteDatabase *)arg1;
+ (NSArray *)entitiesToDeleteBeforeInsertingObject:(HKObject *)arg1 sourceEntity:(HDSourceEntity *)arg2 database:(HDSQLiteDatabase *)arg3;
+ (void)enumerateObjectsOfType:(void *)arg1 healthDaemon:(void *)arg2 predicate:(void *)arg3 sourceIdentifier:(void *)arg4 authorizationFilter:(void *)arg5 limit:(void *)arg6 anchor:(void *)arg7 handler:(void *)arg8; // needs 8 arg types, found 21: int, <HDHealthDaemon> *, HDSQLitePredicate *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSArray *, id /* block */, NSArray *, void*, unsigned int, id*, id /* block */, void*, void, id /* block */, HKObject *, long long, BOOL*, NSError *, void*
+ (void)enumerateObjectsOfType:(void *)arg1 healthDaemon:(void *)arg2 predicate:(void *)arg3 sourceIdentifier:(void *)arg4 authorizationFilter:(void *)arg5 orderBy:(void *)arg6 directions:(void *)arg7 limit:(void *)arg8 handler:(void *)arg9; // needs 9 arg types, found 22: int, <HDHealthDaemon> *, HDSQLitePredicate *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSArray *, id /* block */, NSArray *, void*, NSArray *, NSArray *, unsigned int, id /* block */, void*, void, id /* block */, HKObject *, long long, BOOL*, NSError *, void*
+ (void)enumerateObjectsWithHealthDaemon:(void *)arg1 predicate:(void *)arg2 sourceIdentifier:(void *)arg3 authorizationFilter:(void *)arg4 orderBy:(void *)arg5 directions:(void *)arg6 limit:(void *)arg7 handler:(void *)arg8; // needs 8 arg types, found 21: <HDHealthDaemon> *, HDSQLitePredicate *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSArray *, id /* block */, NSArray *, void*, NSArray *, NSArray *, unsigned int, id /* block */, void*, void, id /* block */, HKObject *, long long, BOOL*, NSError *, void*
+ (id)insertDataObject:(HKObject *)arg1 withProvenance:(int)arg2 sourceEntity:(HDSourceEntity *)arg3 creationDate:(NSDate *)arg4 healthDaemon:(id <HDHealthDaemon>)arg5 error:(id*)arg6;
+ (void)insertDataObjects:(void *)arg1 withProvenance:(void *)arg2 sourceEntity:(void *)arg3 creationDate:(void *)arg4 healthDaemon:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 14: NSArray *, int, HDSourceEntity *, NSDate *, <HDHealthDaemon> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, BOOL, HDDataEntity *, NSError *, void*
+ (BOOL)isBackedByTable;
+ (HKObject *)objectWithUUID:(NSUUID *)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 error:(id*)arg3;
+ (int)preferredEntityType;
+ (Class)propertyApplierClass;
+ (HDDataPropertyApplier *)propertyApplierWithProperties:(void *)arg1 propertySetters:(void *)arg2 authorizationFilter:(void *)arg3 database:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSArray *, id /* block */, NSArray *, void*, HDSQLiteDatabase *
+ (NSArray *)sourceIDsForObjectsOfType:(int)arg1 healthDaemon:(id <HDHealthDaemon>)arg2 predicate:(HDSQLitePredicate *)arg3 error:(id*)arg4;

- (NSNumber *)dataAnchor;

@end