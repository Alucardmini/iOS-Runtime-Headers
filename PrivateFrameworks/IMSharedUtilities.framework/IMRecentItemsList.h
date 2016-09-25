/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMRecentItemsList : NSObject {
    NSObject<OS_dispatch_queue> * _diskWritingQueue;
}

+ (id)sharedInstance;

- (void)_addRecentDataPayloadEntry:(id)arg1 toDomain:(id)arg2;
- (id)_buildLRUCacheUsingArray:(id)arg1 forDomain:(id)arg2;
- (id)_guidForFileURL:(id)arg1;
- (id)_recentsCacheForDomain:(id)arg1;
- (void)_removeRecentDataPayloadEntry:(id)arg1 forDomain:(id)arg2;
- (void)_removeRecentDataPayloadEntryFromDisk:(id)arg1 forDomain:(id)arg2;
- (void)_saveRecentDataPayloadEntryToDisk:(id)arg1 forDomain:(id)arg2;
- (void)_updateRecentsCache:(id)arg1 forDomain:(id)arg2;
- (void)addRecentItemAtFileURL:(id)arg1 GUID:(id)arg2 infoDictionary:(id)arg3 forDomain:(id)arg4;
- (void)addRecentItemWithData:(id)arg1 GUID:(id)arg2 infoDictionary:(id)arg3 forDomain:(id)arg4;
- (int)cacheSizeForDomain:(id)arg1;
- (void)dealloc;
- (void)deleteAllRecentItemsForDomain:(id)arg1;
- (void)deleteRecentItemWithData:(id)arg1 GUID:(id)arg2 forDomain:(id)arg3;
- (void)deleteRecentItemWithFileURL:(id)arg1 GUID:(id)arg2 forDomain:(id)arg3;
- (void)deleteRecentsInFirstLaunch;
- (void)dispatchCacheUpdateWithBlock:(id /* block */)arg1;
- (void)fetchRecentItemsForDomain:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRecentStickersWithCompletion:(id /* block */)arg1;
- (id)init;

@end