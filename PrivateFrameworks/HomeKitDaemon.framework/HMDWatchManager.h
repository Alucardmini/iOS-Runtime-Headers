/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWatchManager : NSObject <IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableSet * _connectedWatches;
    <HMDWatchManagerDelegate> * _delegate;
    BOOL  _pairedWithWatch;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    IDSService * _service;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly, copy) NSArray *connectedWatches;
@property (readonly, copy) NSString *debugDescription;
@property <HMDWatchManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isPairedWithWatch) BOOL pairedWithWatch;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) IDSService *service;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *watches;

+ (BOOL)isCompatibleWatchDevice:(id)arg1;

- (void).cxx_destruct;
- (void)__initializeConnectedDevices;
- (void)_updateConnectedDevices:(id)arg1;
- (void)addConnectedWatch:(id)arg1;
- (id)clientQueue;
- (id)connectedWatches;
- (id)delegate;
- (id)init;
- (BOOL)isPairedWithWatch;
- (void)notifyDelegateOfAddedConnectedWatch:(id)arg1;
- (void)notifyDelegateOfRemovedConnectedWatch:(id)arg1;
- (id)propertyQueue;
- (void)removeConnectedWatch:(id)arg1;
- (id)service;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPairedWithWatch:(BOOL)arg1;
- (id)watches;

@end
