/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableSet, MPViewController, UIView;



@interface MPTransitionController : NSObject 
{
    struct __CFDictionary { } *_observers;
    float _duration;
    UIView *_rootView;
    NSMutableSet *_persistentViewsToFadeOut;
    NSMutableSet *_viewsToFadeOut;
    NSMutableSet *_persistentViewsToFadeIn;
    NSMutableSet *_viewsToFadeIn;
    MPViewController *_fromViewController;
    NSInteger _fromInterfaceOrientation;
    MPViewController *_toViewController;
    NSInteger _toInterfaceOrientation;
}

@property(retain) MPViewController *toViewController;
@property NSInteger toInterfaceOrientation;
@property(retain) UIView *rootView;
@property(retain) MPViewController *fromViewController;
@property NSInteger fromInterfaceOrientation;
@property float duration;


- (void)removeObserver:(id)arg1;
- (void)setDuration:(float)arg1;
- (float)duration;
- (id)init;
- (void)dealloc;
- (void)addViewToFadeIn:(id)arg1 restoreOnPop:(BOOL)arg2;
- (void)addViewToFadeOut:(id)arg1 restoreOnPop:(BOOL)arg2;
- (void)fadeViewsForRestore:(BOOL)arg1;
- (id)rootView;
- (void)messageObserversWithSuccess:(BOOL)arg1;
- (id)fromViewController;
- (id)toViewController;
- (void)addObserver:(id)arg1 didEndSelector:(SEL)arg2;
- (void)transition:(NSUInteger)arg1;
- (void)setFromViewController:(id)arg1;
- (void)setRootView:(id)arg1;
- (void)setToViewController:(id)arg1;
- (void)setFromInterfaceOrientation:(NSInteger)arg1;
- (void)setToInterfaceOrientation:(NSInteger)arg1;
- (NSInteger)fromInterfaceOrientation;
- (NSInteger)toInterfaceOrientation;

@end