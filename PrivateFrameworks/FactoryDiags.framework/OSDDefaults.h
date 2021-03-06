/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

@class NSString;

@interface OSDDefaults : NSObject {
    NSString *_domain;
}

+ (id)defaults;
+ (id)defaultsInDomain:(id)arg1;

- (id)__doLookupForName:(id)arg1;
- (id)__doLookupFromSEL:(SEL)arg1;
- (id)__getDefaults;
- (id)__getRealDomain;
- (void)__setValueFromSEL:(SEL)arg1 withValue:(id)arg2;
- (void)__setValueInDefaults:(id)arg1 forName:(id)arg2;
- (id)__unitTest;
- (bool)_addMethodsForProperties:(struct objc_property {}**)arg1 withCount:(unsigned int)arg2 andSELMap:(id)arg3 areSetters:(BOOL)arg4;
- (void)_defaultsCtor;
- (bool)_defaultsGetter_B;
- (unsigned char)_defaultsGetter_C;
- (unsigned int)_defaultsGetter_I;
- (unsigned long)_defaultsGetter_L;
- (unsigned long long)_defaultsGetter_Q;
- (unsigned short)_defaultsGetter_S;
- (BOOL)_defaultsGetter_c;
- (double)_defaultsGetter_d;
- (float)_defaultsGetter_f;
- (int)_defaultsGetter_i;
- (id)_defaultsGetter_id;
- (long)_defaultsGetter_l;
- (long long)_defaultsGetter_q;
- (short)_defaultsGetter_s;
- (void)_defaultsSetter_B:(bool)arg1;
- (void)_defaultsSetter_C:(unsigned char)arg1;
- (void)_defaultsSetter_I:(unsigned int)arg1;
- (void)_defaultsSetter_L:(unsigned long)arg1;
- (void)_defaultsSetter_Q:(unsigned long long)arg1;
- (void)_defaultsSetter_S:(unsigned short)arg1;
- (void)_defaultsSetter_c:(BOOL)arg1;
- (void)_defaultsSetter_d:(double)arg1;
- (void)_defaultsSetter_f:(float)arg1;
- (void)_defaultsSetter_i:(int)arg1;
- (void)_defaultsSetter_id:(id)arg1;
- (void)_defaultsSetter_l:(long)arg1;
- (void)_defaultsSetter_q:(long long)arg1;
- (void)_defaultsSetter_s:(short)arg1;
- (id)_getterList;
- (id)_methodListForPrefix:(const char *)arg1;
- (SEL)_selForEncodeType:(const char *)arg1 andMap:(id)arg2 withOutType:(unsigned short*)arg3 andOutAttrList:(id*)arg4;
- (SEL)_selForEncodeType:(const char *)arg1 andMap:(id)arg2 withOutType:(unsigned short*)arg3;
- (id)_setterList;
- (void)dealloc;
- (BOOL)defaultExists:(id)arg1;
- (id)init;
- (id)initWithDomain:(id)arg1;
- (void)setDomain:(id)arg1;

@end
