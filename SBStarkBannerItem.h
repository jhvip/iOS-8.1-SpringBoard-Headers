/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray, NSDate, UIImage, NSMutableSet, NSHashTable;

__attribute__((visibility("hidden")))
@interface SBStarkBannerItem : XXUnknownSuperclass {
	NSHashTable* _observers;
	NSMutableSet* _displayReasons;
}
@property(readonly, copy, nonatomic) NSArray* subActionLabels;
@property(readonly, retain, nonatomic) NSDate* sourceDate;
@property(readonly, assign, nonatomic) int effectiveDefaultActionType;
@property(readonly, assign, nonatomic) int defaultActionType;
@property(readonly, retain, nonatomic) UIImage* categoryImage;
@property(readonly, copy, nonatomic) NSString* message;
@property(readonly, copy, nonatomic) NSString* subTitle;
@property(readonly, copy, nonatomic) NSString* title;
-(void)_callOrFaceTimeStateChanged;
-(BOOL)_inCallOrFaceTime;
-(BOOL)isStarkBannerItem;
-(BOOL)matchesContext:(id)context;
-(void)reloadDisplayProperties;
-(id)ignoreAction;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer;
-(void)dealloc;
-(id)init;
@end

