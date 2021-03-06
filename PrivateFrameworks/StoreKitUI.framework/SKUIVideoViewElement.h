/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIVideoViewElement : SKUIViewElement {
    BOOL  _enabled;
    long long  _itemIdentifier;
    int  _playbackStyle;
    SKUIImageViewElement * _thumbnailImage;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) int playbackStyle;
@property (nonatomic, readonly) SKUIImageViewElement *thumbnailImage;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)assets;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isEnabled;
- (long long)itemIdentifier;
- (int)playbackStyle;
- (id)thumbnailImage;

@end
