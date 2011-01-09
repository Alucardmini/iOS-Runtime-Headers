/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class InlineCandidateCell, NSMutableArray, NSArray;



@interface UIInlineCandidateTextView : UIView 
{
    NSInteger m_type;
    NSInteger m_edgeType;
    BOOL m_animating;
    NSMutableArray *_candidateCellArray;
    NSArray *_candidates;
    id _target;
    SEL _action;
    NSUInteger _selectedItem;
    InlineCandidateCell *_currentlyPushedItem;
    BOOL _showingArrow;
    BOOL _arrowHighlighted;
}

+ (void)_initializeSafeCategory;

- (void)_cellSelected:(id)arg1;
- (float)_layoutCandidates:(id)arg1 maxCount:(NSInteger)arg2 height:(float)arg3 maxScreenWidth:(float)arg4;
- (id)findCell:(struct CGPoint { float x1; float x2; })arg1;
- (void)redrawArrow;
- (void)_mouseUp:(struct __GSEvent { }*)arg1 wasCancelled:(BOOL)arg2;
- (BOOL)_arrowHighlighted;
- (void)showHighlightedArrow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 candidates:(id)arg2 type:(NSInteger)arg3 maxScreenWidth:(float)arg4;
- (NSInteger)edgeType;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setEdgeType:(NSInteger)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_calculateRectForExpandedHitRegion;
- (NSUInteger)numberOfShownItems;
- (BOOL)needsWebDocumentViewEventsDirectly;
- (NSInteger)textEffectsVisibilityLevel;
- (NSUInteger)selectedItem;
- (void)setSelectedItem:(NSUInteger)arg1;
- (void)setAnimating:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)dealloc;

@end