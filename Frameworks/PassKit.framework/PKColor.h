/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKColor : NSObject <NSSecureCoding, NSCopying> {
    float _alpha;
    float _blue;
    struct CGColor { } *_colorRef;
    float _green;
    float _red;
}

+ (id)colorFromString:(id)arg1;
+ (id)colorWithH:(float)arg1 S:(float)arg2 B:(float)arg3 A:(float)arg4;
+ (id)colorWithR:(float)arg1 G:(float)arg2 B:(float)arg3 A:(float)arg4;
+ (BOOL)supportsSecureCoding;

- (struct CGColor { }*)CGColor;
- (struct CGColor { }*)_newCGColor;
- (id)colorByReplacingWhiteByOffWhite;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isVeryLight;
- (id)string;

@end
