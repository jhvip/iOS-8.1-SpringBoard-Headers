/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplication;

__attribute__((visibility("hidden")))
@interface SBWaitForAppActivationTransaction : XXUnknownSuperclass {
	SBApplication* _application;
	BOOL _manualListener;
	BOOL _done;
}
-(BOOL)_appStateChanged:(int)changed;
-(void)_activationStateChanged:(id)changed;
-(void)_didComplete;
-(void)_begin;
-(void)noteActivationStateChanged:(int)changed;
-(void)dealloc;
-(id)initWithApplication:(id)application manualListener:(BOOL)listener;
-(id)initWithApplication:(id)application;
@end
