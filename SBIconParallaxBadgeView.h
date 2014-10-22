/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIconBadgeView.h"
#import "_UISettingsKeyObserver.h"

@class NSString, SBFParallaxSettings;

__attribute__((visibility("hidden")))
@interface SBIconParallaxBadgeView : SBIconBadgeView <_UISettingsKeyObserver> {
	SBFParallaxSettings* _parallaxSettings;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)_applyParallaxSettings;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(void)dealloc;
-(id)init;
@end
