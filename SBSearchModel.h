/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SPDaemonQueryDelegate.h"
#import "PRSImageSource.h"

@class NSDate, CPLRUDictionary, NSOperationQueue, NSOperation, NSObject, NSTimer, NSString;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SBSearchModel : XXUnknownSuperclass <SPDaemonQueryDelegate, PRSImageSource> {
	NSTimer* _clearSearchTimer;
	NSDate* _clearSearchDate;
	CPLRUDictionary* _cachedResultImages;
	NSObject<OS_dispatch_semaphore>* _cacheResultLock;
	NSOperationQueue* _prefetchOperationQueue;
	NSOperationQueue* _loadOperationQueue;
	NSOperation* _waitOperation;
	void* _addressBook;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)sharedInstance;
-(id)currentToken;
-(id)operationFetchingImageForResult:(id)result inSection:(id)section withCompletionBlock:(id)completionBlock;
-(BOOL)prefetchImageForResult:(id)result inSection:(id)section;
-(void)cancelPrefetchingAndStartNewBatch;
-(id)cachedImageForResult:(id)result inSection:(id)section;
-(void)fetchImageForResult:(id)result inSection:(id)section withCompletionBlock:(id)completionBlock;
-(void)_cacheImage:(id)image forKey:(id)key;
-(BOOL)_getCachedImageForKey:(id)key withCompletionBlock:(id)completionBlock;
-(id)_imageForResult:(id)result inSection:(id)section withCompletionBlock:(id)completionBlock;
-(void)getImageWithIdentifier:(id)identifier block:(id)block;
-(id)_uniqueKeyForResult:(id)result withSearchDomain:(unsigned)searchDomain;
-(id)_customImageForPath:(id)path;
-(void)handleOptionsForNewSections:(id)newSections;
-(void)invalidate;
-(void)_updateClearSearchTimerFireDate;
-(void)startClearSearchTimer;
-(void)_clearSearchTimerFired;
-(void)resetClearSearchTimer;
-(void)dealloc;
-(id)init;
@end
