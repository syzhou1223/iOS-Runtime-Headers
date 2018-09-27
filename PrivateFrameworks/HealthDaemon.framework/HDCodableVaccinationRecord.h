/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableVaccinationRecord : PBCodable <HDDecoding, NSCopying> {
    NSData * _administrationDate;
    HDCodableMedicalCodingList * _bodySiteCoding;
    NSString * _doseNumber;
    NSString * _doseQuantity;
    NSData * _expirationDate;
    struct { 
        unsigned int notGiven : 1; 
        unsigned int patientReported : 1; 
    }  _has;
    HDCodableMedicalRecord * _medicalRecord;
    bool  _notGiven;
    bool  _patientReported;
    NSString * _performer;
    NSString * _reaction;
    HDCodableMedicalCodingListList * _reasonsCodings;
    HDCodableMedicalCodingListList * _reasonsNotGivenCodings;
    HDCodableMedicalCodingList * _routeCodings;
    HDCodableMedicalCoding * _statusCoding;
    HDCodableMedicalCodingList * _vaccinationCodings;
}

@property (nonatomic, retain) NSData *administrationDate;
@property (nonatomic, retain) HDCodableMedicalCodingList *bodySiteCoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *doseNumber;
@property (nonatomic, retain) NSString *doseQuantity;
@property (nonatomic, retain) NSData *expirationDate;
@property (nonatomic, readonly) bool hasAdministrationDate;
@property (nonatomic, readonly) bool hasBodySiteCoding;
@property (nonatomic, readonly) bool hasDoseNumber;
@property (nonatomic, readonly) bool hasDoseQuantity;
@property (nonatomic, readonly) bool hasExpirationDate;
@property (nonatomic, readonly) bool hasMedicalRecord;
@property (nonatomic) bool hasNotGiven;
@property (nonatomic) bool hasPatientReported;
@property (nonatomic, readonly) bool hasPerformer;
@property (nonatomic, readonly) bool hasReaction;
@property (nonatomic, readonly) bool hasReasonsCodings;
@property (nonatomic, readonly) bool hasReasonsNotGivenCodings;
@property (nonatomic, readonly) bool hasRouteCodings;
@property (nonatomic, readonly) bool hasStatusCoding;
@property (nonatomic, readonly) bool hasVaccinationCodings;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDCodableMedicalRecord *medicalRecord;
@property (nonatomic) bool notGiven;
@property (nonatomic) bool patientReported;
@property (nonatomic, retain) NSString *performer;
@property (nonatomic, retain) NSString *reaction;
@property (nonatomic, retain) HDCodableMedicalCodingListList *reasonsCodings;
@property (nonatomic, retain) HDCodableMedicalCodingListList *reasonsNotGivenCodings;
@property (nonatomic, retain) HDCodableMedicalCodingList *routeCodings;
@property (nonatomic, retain) HDCodableMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (nonatomic, retain) HDCodableMedicalCodingList *vaccinationCodings;

- (void).cxx_destruct;
- (id)administrationDate;
- (bool)applyToObject:(id)arg1;
- (bool)applyToObject:(id)arg1 error:(out id*)arg2;
- (id)bodySiteCoding;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)doseNumber;
- (id)doseQuantity;
- (id)expirationDate;
- (bool)hasAdministrationDate;
- (bool)hasBodySiteCoding;
- (bool)hasDoseNumber;
- (bool)hasDoseQuantity;
- (bool)hasExpirationDate;
- (bool)hasMedicalRecord;
- (bool)hasNotGiven;
- (bool)hasPatientReported;
- (bool)hasPerformer;
- (bool)hasReaction;
- (bool)hasReasonsCodings;
- (bool)hasReasonsNotGivenCodings;
- (bool)hasRouteCodings;
- (bool)hasStatusCoding;
- (bool)hasVaccinationCodings;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)medicalRecord;
- (void)mergeFrom:(id)arg1;
- (bool)notGiven;
- (bool)patientReported;
- (id)performer;
- (id)reaction;
- (bool)readFrom:(id)arg1;
- (id)reasonsCodings;
- (id)reasonsNotGivenCodings;
- (id)routeCodings;
- (void)setAdministrationDate:(id)arg1;
- (void)setBodySiteCoding:(id)arg1;
- (void)setDoseNumber:(id)arg1;
- (void)setDoseQuantity:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setHasNotGiven:(bool)arg1;
- (void)setHasPatientReported:(bool)arg1;
- (void)setMedicalRecord:(id)arg1;
- (void)setNotGiven:(bool)arg1;
- (void)setPatientReported:(bool)arg1;
- (void)setPerformer:(id)arg1;
- (void)setReaction:(id)arg1;
- (void)setReasonsCodings:(id)arg1;
- (void)setReasonsNotGivenCodings:(id)arg1;
- (void)setRouteCodings:(id)arg1;
- (void)setStatusCoding:(id)arg1;
- (void)setVaccinationCodings:(id)arg1;
- (id)statusCoding;
- (id)vaccinationCodings;
- (void)writeTo:(id)arg1;

@end