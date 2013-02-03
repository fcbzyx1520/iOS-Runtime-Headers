/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, UIImage;

@interface SUArrayCellConfiguration : SUCellConfiguration {
    struct CGRect { struct CGPoint { 
            float x; 
            float y; 
        } x1; struct CGSize { 
            float width; 
            float height; 
    struct CGRect { struct CGPoint { 
            float x; 
            float y; 
        } x1; struct CGSize { 
            float width; 
            float height; 
        } x2; } *_imageFrames;
    UIImage **_images;
    unsigned int _numberOfImages;
    unsigned int _numberOfStrings;
    UIImage **_selectedImages;
        } x2; } *_stringFrames;
    NSString **_strings;
}

- (id)_accessibilityStringsArrayPointer;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForImageAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLabelAtIndex:(unsigned int)arg1;
- (id)imageAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)initWithStringCount:(unsigned int)arg1 imageCount:(unsigned int)arg2;
- (unsigned int)numberOfImages;
- (unsigned int)numberOfLabels;
- (void)reloadData;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (void)setLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (id)stringForLabelAtIndex:(unsigned int)arg1;

@end