/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FBSceneManagerObserver.h"

@class BSCopyingCacheSet, NSCountedSet, FBSceneManager, NSMutableSet, NSString, SBSceneLayoutManager, FBSDisplay;
@protocol SBSceneManagerDelegate;

__attribute__((visibility("hidden")))
@interface SBSceneManager : XXUnknownSuperclass <FBSceneManagerObserver> {
	FBSceneManager* _sceneManager;
	SBSceneLayoutManager* _layoutManager;
	FBSDisplay* _display;
	id<SBSceneManagerDelegate> _delegate;
	BSCopyingCacheSet* _allScenes;
	BSCopyingCacheSet* _daemonScenes;
	BSCopyingCacheSet* _applicationScenes;
	BSCopyingCacheSet* _foregroundApplicationScenes;
	BSCopyingCacheSet* _reportedForegroundApplicationScenes;
	BSCopyingCacheSet* _externalApplicationScenes;
	BSCopyingCacheSet* _externalForegroundApplicationScenes;
	BSCopyingCacheSet* _reportedExternalForegroundApplicationScenes;
	NSCountedSet* _assertedBackgroundScenes;
	NSMutableSet* _externalForegroundApplicationHostReasons;
	SBSceneLayoutManager* layoutManager;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) id<SBSceneManagerDelegate> delegate;
@property(readonly, retain, nonatomic) SBSceneLayoutManager* layoutManager;
@property(readonly, retain, nonatomic) FBSDisplay* display;
+(Class)_layoutManagerClass;
-(void)sceneManager:(id)manager didDestroyScene:(id)scene;
-(void)sceneManager:(id)manager willDestroyScene:(id)scene;
-(void)sceneManager:(id)manager didCommitUpdateForScene:(id)scene transactionID:(unsigned)anId;
-(void)sceneManager:(id)manager willCommitUpdateForScene:(id)scene transactionID:(unsigned)anId;
-(void)sceneManager:(id)manager willUpdateScene:(id)scene withSettings:(id)settings transitionContext:(id)context;
-(void)sceneManager:(id)manager didCreateScene:(id)scene withClient:(id)client;
-(BOOL)_isStarkActivelyConnected;
-(void)destroyAllScenes;
-(void)setShouldHostExternalForegroundApplicationScenes:(BOOL)hostExternalForegroundApplicationScenes forReason:(id)reason;
-(BOOL)isHostingExternalForegroundApplicationScenes;
-(id)assertBackgroundedStatusForScenes:(id)scenes;
-(id)daemonScenes;
-(id)externalForegroundApplicationScenes;
-(id)externalApplicationScenes;
-(id)foregroundApplicationScenes;
-(id)applicationScenes;
-(id)allScenes;
-(void)dealloc;
-(id)initWithDisplay:(id)display;
@end

