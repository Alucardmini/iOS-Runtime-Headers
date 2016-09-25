/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    }  _has;
    NSMutableArray * _paymentSummaryItems;
    NSString * _remotePaymentRequestIdentifier;
    NSString * _selectedAID;
    NSMutableArray * _shippingMethods;
    unsigned int  _status;
}

@property (nonatomic, readonly) BOOL hasRemotePaymentRequestIdentifier;
@property (nonatomic, readonly) BOOL hasSelectedAID;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic, retain) NSMutableArray *paymentSummaryItems;
@property (nonatomic, retain) NSString *remotePaymentRequestIdentifier;
@property (nonatomic, retain) NSString *selectedAID;
@property (nonatomic, retain) NSMutableArray *shippingMethods;
@property (nonatomic) unsigned int status;

+ (Class)paymentSummaryItemsType;
+ (Class)shippingMethodsType;

- (void).cxx_destruct;
- (void)addPaymentSummaryItems:(id)arg1;
- (void)addShippingMethods:(id)arg1;
- (void)clearPaymentSummaryItems;
- (void)clearShippingMethods;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRemotePaymentRequestIdentifier;
- (BOOL)hasSelectedAID;
- (BOOL)hasStatus;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentSummaryItems;
- (id)paymentSummaryItemsAtIndex:(unsigned int)arg1;
- (unsigned int)paymentSummaryItemsCount;
- (BOOL)readFrom:(id)arg1;
- (id)remotePaymentRequestIdentifier;
- (id)selectedAID;
- (void)setHasStatus:(BOOL)arg1;
- (void)setPaymentSummaryItems:(id)arg1;
- (void)setRemotePaymentRequestIdentifier:(id)arg1;
- (void)setSelectedAID:(id)arg1;
- (void)setShippingMethods:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (id)shippingMethods;
- (id)shippingMethodsAtIndex:(unsigned int)arg1;
- (unsigned int)shippingMethodsCount;
- (unsigned int)status;
- (void)writeTo:(id)arg1;

@end