/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray, NSString, PLSheetCardView, UIImageView, UILabel, UINavigationBar, UITextView, UIView;

@interface PLCloudSharedPostCommentViewController : UIViewController <UITextViewDelegate, PLModalDimmingContained> {
    unsigned int _keyPathObserverAdded : 1;
    NSString *_albumName;
    UILabel *_albumNameView;
    NSMutableArray *_attachments;
    PLSheetCardView *_backgroundView;
    UIImageView *_cloudIcon;
    id _completionHandler;
    NSMutableArray *_lines;
    UINavigationBar *_navBar;
    UIImageView *_paperclipView;
    NSString *_placeholderText;
    NSMutableArray *_previewViews;
    UILabel *_textPlaceholderLabel;
    UITextView *_textView;
    UIView *_textViewWrapper;
}

@property(copy) NSString * albumName;
@property(readonly) NSString * commentText;
@property(copy) id completionHandler;
@property(copy) NSString * placeholderText;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_albumNameRectForOrientation:(int)arg1;
- (void)_buildLineRulesForOrientation:(int)arg1;
- (void)_cancelAction:(id)arg1;
- (id)_contentView;
- (void)_postAction:(id)arg1;
- (void)_updateAlbumNameForOrientation:(int)arg1;
- (void)_updateAttachmentsForOrientation:(int)arg1;
- (void)_updateKeyboard;
- (void)_updateNavigationBarToOrientation:(int)arg1;
- (void)_updateTextViewAndPaperClipForOrientation:(int)arg1;
- (void)addImage:(id)arg1;
- (id)albumName;
- (id)commentText;
- (id)completionHandler;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)keyboardWillShow:(id)arg1;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)placeholderText;
- (struct CGPoint { float x1; float x2; })preferredOffsetInParentViewController;
- (struct CGSize { float x1; float x2; })preferredSizeInParentViewController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewFrameForOrientation:(int)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setPlaceholderText:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
