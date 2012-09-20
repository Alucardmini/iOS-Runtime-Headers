/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSObject<OS_dispatch_queue>, NSString, MSAlbumSharingDaemon, MSASPersonModel, MSBackoffManager, MMCSEngine;

@interface MSASAssetTransferer : NSObject <MMCSEngineDelegate> {
    id _delegate;
    NSString *_personID;
    MMCSEngine *_engine;
    double _maxMMCSTokenValidityTimeInterval;
    MSAlbumSharingDaemon *_daemon;
    MSASPersonModel *_model;
    MSBackoffManager *_backoffManager;
    int _maxBatchCount;
    int _maxRetryCount;
    NSString *_focusAlbumGUID;
    NSString *_focusAssetCollectionGUID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    BOOL _hasShutDown;
}

@property id delegate;
@property(copy) NSString * personID;
@property(readonly) MMCSEngine * engine;
@property double maxMMCSTokenValidityTimeInterval;
@property MSAlbumSharingDaemon * daemon;
@property MSASPersonModel * model;
@property MSBackoffManager * backoffManager;
@property(copy) NSString * focusAlbumGUID;
@property(copy) NSString * focusAssetCollectionGUID;
@property int maxBatchCount;
@property int maxRetryCount;
@property(retain) NSObject<OS_dispatch_queue> * eventQueue;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property BOOL hasShutDown;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)model;
- (double)maxMMCSTokenValidityTimeInterval;
- (void)_rereadPerformanceLoggingSetting;
- (id)_MMCSTokenTooOldError;
- (double)workQueueMaxMMCSTokenValidityTimeInterval;
- (id)_missingMMCSTokenError;
- (void)workQueueCancel;
- (id)_pathForPersonID:(id)arg1;
- (int)maxRetryCount;
- (id)backoffManager;
- (unsigned long long)workQueueNextItemID;
- (id)_missingURLError;
- (int)maxBatchCount;
- (void)workQueueShutDownCompletionBlock:(id)arg1;
- (void)workQueueStop;
- (void)_sendDidIdleNotification;
- (void)MMCSEngine:(id)arg1 logMessage:(id)arg2 logLevel:(int)arg3;
- (BOOL)MMCSEngine:(id)arg1 shouldLogAtLogLevel:(int)arg2;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAllAssetsContext:(id)arg2;
- (void)MMCSEngine:(id)arg1 didFinishGettingAllAssetsContext:(id)arg2;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 context:(id)arg3 putReceipt:(id)arg4 error:(id)arg5;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 context:(id)arg5;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 context:(id)arg4 error:(id)arg5;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 context:(id)arg5;
- (void)MMCSEngine:(id)arg1 logPerformanceMetrics:(id)arg2;
- (void)setEventQueue:(id)arg1;
- (id)focusAssetCollectionGUID;
- (id)focusAlbumGUID;
- (BOOL)hasShutDown;
- (id)_canceledError;
- (void)stopCompletionBlock:(id)arg1;
- (void)setHasShutDown:(BOOL)arg1;
- (id)eventQueue;
- (void)setMaxMMCSTokenValidityTimeInterval:(double)arg1;
- (void)setMaxRetryCount:(int)arg1;
- (void)setMaxBatchCount:(int)arg1;
- (void)workQueueRetryOutstandingActivities;
- (void)setBackoffManager:(id)arg1;
- (void)setModel:(id)arg1;
- (id)initWithPersonID:(id)arg1 eventQueue:(id)arg2;
- (void)setWorkQueue:(id)arg1;
- (void)cancelCompletionBlock:(id)arg1;
- (void)setFocusAssetCollectionGUID:(id)arg1;
- (void)setFocusAlbumGUID:(id)arg1;
- (void)shutDownCompletionBlock:(id)arg1;
- (id)workQueue;
- (id)engine;
- (id)daemon;
- (id)initWithPersonID:(id)arg1;
- (void)retryOutstandingActivities;
- (void)setDaemon:(id)arg1;
- (void)setPersonID:(id)arg1;
- (id)personID;

@end