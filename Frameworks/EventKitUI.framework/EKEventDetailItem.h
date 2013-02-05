/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent, UIViewController<EKEditItemViewControllerProtocol>, <EKEventDetailItemDelegate>, EKEventStore;

@interface EKEventDetailItem : NSObject <EKEditItemViewControllerDelegate> {
    BOOL _allowsEditing;
    int _cellPosition;
    <EKEventDetailItemDelegate> *_delegate;
    EKEvent *_event;
    BOOL _shouldIndent;
    EKEventStore *_store;
    UIViewController<EKEditItemViewControllerProtocol> *_viewController;
}

@property BOOL allowsEditing;
@property int cellPosition;
@property <EKEventDetailItemDelegate> * delegate;
@property BOOL shouldIndent;

- (BOOL)allowsEditing;
- (id)cellForSubitemAtIndex:(int)arg1;
- (int)cellPosition;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (void)dealloc;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (id)delegate;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(int)arg2;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (void)eventViewController:(id)arg1 didSelectSubitem:(int)arg2;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned int)arg1;
- (void)layoutCellsForWidth:(float)arg1 position:(int)arg2;
- (void)notifyDidEndEditing;
- (void)notifyDidStartEditing;
- (void)notifySubitemDidCommit:(int)arg1;
- (int)numberOfSubitems;
- (void)reset;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setCellPosition:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)setShouldIndent:(BOOL)arg1;
- (BOOL)shouldIndent;

@end