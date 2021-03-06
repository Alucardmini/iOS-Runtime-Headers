/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUAVRouteHeaderView : UIControl {
    BOOL  _activated;
    CAShapeLayer * _bottomSeparatorLayer;
    UIImageView * _disclosureIndicatorImageView;
    UIImageView * _iconImageView;
    UIVisualEffect * _primaryVisualEffect;
    MPAVRoute * _route;
    UIVisualEffect * _secondaryVisualEffect;
    MPUAVRouteHeaderLabel * _textLabel;
    CAShapeLayer * _topSeparatorLayer;
}

@property (getter=isActivated, nonatomic) BOOL activated;
@property (nonatomic, retain) UIVisualEffect *primaryVisualEffect;
@property (nonatomic, retain) MPAVRoute *route;
@property (nonatomic, retain) UIVisualEffect *secondaryVisualEffect;
@property (nonatomic, readonly) MPUAVRouteHeaderLabel *textLabel;

- (void).cxx_destruct;
- (id)_disclosureIconImageForCurrentState;
- (void)_init;
- (void)_updateBottomClippingForAnimatedTransition;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isActivated;
- (void)layoutSubviews;
- (id)primaryVisualEffect;
- (id)route;
- (id)secondaryVisualEffect;
- (void)setActivated:(BOOL)arg1;
- (void)setActivated:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPrimaryVisualEffect:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setSecondaryVisualEffect:(id)arg1;
- (id)textLabel;

@end
