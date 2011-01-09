/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonTableTinyActionCell, NSMutableArray, UIButton;



@interface ABPersonTableTinyActionCellContentView : UIView 
{
    NSMutableArray *_actions;
    NSMutableArray *_buttons;
    UIButton *_highlightedButton;
    ABPersonTableTinyActionCell *_cell;
}

@property(readonly) NSArray *actions;
@property ABPersonTableTinyActionCell *cell;


- (void)unhighlight;
- (id)actions;
- (void)refreshActions;
- (void)setCell:(id)arg1;
- (id)cell;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end