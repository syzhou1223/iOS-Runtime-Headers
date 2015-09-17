/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
 */

@interface PLAccountingDependency : NSObject {
    NSNumber *_ID;
    NSDate *_activationDate;
    <PLAccountingDependencyManager> *_manager;
    NSMutableSet *_observingOwnerIDs;
}

@property (nonatomic, retain) NSNumber *ID;
@property (nonatomic, retain) NSDate *activationDate;
@property <PLAccountingDependencyManager> *manager;
@property (nonatomic, retain) NSMutableSet *observingOwnerIDs;
@property (nonatomic, retain) PLAccountingRange *range;

- (void).cxx_destruct;
- (id)ID;
- (void)activate;
- (id)activationDate;
- (void)deactivate;
- (id)description;
- (void)didReceiveOwner:(id)arg1;
- (id)manager;
- (id)observingOwnerIDs;
- (id)range;
- (void)setActivationDate:(id)arg1;
- (void)setID:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setObservingOwnerIDs:(id)arg1;
- (void)setRange:(id)arg1;
- (void)updateWithEndDate:(id)arg1;

@end