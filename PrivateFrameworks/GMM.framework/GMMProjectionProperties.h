/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GMMProjectionProperties : NSObject <GMMReadWriteStream> {
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */
    NSInteger _cameraPitchDegreeE6;
    BOOL _hasCameraPitchDegreeE6;
    BOOL _hasHorizontalFovE6;
    BOOL _hasMaxVisiblePitchE6;
    BOOL _hasMinVisiblePitchE6;
    BOOL _hasPanoYawDegreeE6;
    BOOL _hasProjectionType;
    BOOL _hasTiltPitchDegreeE6;
    BOOL _hasTiltYawDegreeE6;
    NSInteger _horizontalFovE6;
    NSInteger _maxVisiblePitchE6;
    NSInteger _minVisiblePitchE6;
    NSInteger _panoYawDegreeE6;
    NSInteger _projectionType;
    NSInteger _tiltPitchDegreeE6;
    NSInteger _tiltYawDegreeE6;
}

@property BOOL hasMaxVisiblePitchE6; /* unknown property attribute: V_hasMaxVisiblePitchE6 */
@property NSInteger maxVisiblePitchE6; /* unknown property attribute: V_maxVisiblePitchE6 */
@property BOOL hasMinVisiblePitchE6; /* unknown property attribute: V_hasMinVisiblePitchE6 */
@property NSInteger minVisiblePitchE6; /* unknown property attribute: V_minVisiblePitchE6 */
@property BOOL hasHorizontalFovE6; /* unknown property attribute: V_hasHorizontalFovE6 */
@property NSInteger horizontalFovE6; /* unknown property attribute: V_horizontalFovE6 */
@property BOOL hasProjectionType; /* unknown property attribute: V_hasProjectionType */
@property NSInteger projectionType; /* unknown property attribute: V_projectionType */
@property BOOL hasCameraPitchDegreeE6; /* unknown property attribute: V_hasCameraPitchDegreeE6 */
@property NSInteger cameraPitchDegreeE6; /* unknown property attribute: V_cameraPitchDegreeE6 */
@property BOOL hasTiltPitchDegreeE6; /* unknown property attribute: V_hasTiltPitchDegreeE6 */
@property NSInteger tiltPitchDegreeE6; /* unknown property attribute: V_tiltPitchDegreeE6 */
@property BOOL hasTiltYawDegreeE6; /* unknown property attribute: V_hasTiltYawDegreeE6 */
@property NSInteger tiltYawDegreeE6; /* unknown property attribute: V_tiltYawDegreeE6 */
@property BOOL hasPanoYawDegreeE6; /* unknown property attribute: V_hasPanoYawDegreeE6 */
@property NSInteger panoYawDegreeE6; /* unknown property attribute: V_panoYawDegreeE6 */

- (NSInteger)cameraPitchDegreeE6;
- (void)dealloc;
- (BOOL)hasCameraPitchDegreeE6;
- (BOOL)hasHorizontalFovE6;
- (BOOL)hasMaxVisiblePitchE6;
- (BOOL)hasMinVisiblePitchE6;
- (BOOL)hasPanoYawDegreeE6;
- (BOOL)hasProjectionType;
- (BOOL)hasTiltPitchDegreeE6;
- (BOOL)hasTiltYawDegreeE6;
- (NSInteger)horizontalFovE6;
- (id)init;
- (NSInteger)maxVisiblePitchE6;
- (NSInteger)minVisiblePitchE6;
- (NSInteger)panoYawDegreeE6;
- (NSInteger)projectionType;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
- (void)setCameraPitchDegreeE6:(NSInteger)arg1;
- (void)setHasCameraPitchDegreeE6:(BOOL)arg1;
- (void)setHasHorizontalFovE6:(BOOL)arg1;
- (void)setHasMaxVisiblePitchE6:(BOOL)arg1;
- (void)setHasMinVisiblePitchE6:(BOOL)arg1;
- (void)setHasPanoYawDegreeE6:(BOOL)arg1;
- (void)setHasProjectionType:(BOOL)arg1;
- (void)setHasTiltPitchDegreeE6:(BOOL)arg1;
- (void)setHasTiltYawDegreeE6:(BOOL)arg1;
- (void)setHorizontalFovE6:(NSInteger)arg1;
- (void)setMaxVisiblePitchE6:(NSInteger)arg1;
- (void)setMinVisiblePitchE6:(NSInteger)arg1;
- (void)setPanoYawDegreeE6:(NSInteger)arg1;
- (void)setProjectionType:(NSInteger)arg1;
- (void)setTiltPitchDegreeE6:(NSInteger)arg1;
- (void)setTiltYawDegreeE6:(NSInteger)arg1;
- (NSInteger)tiltPitchDegreeE6;
- (NSInteger)tiltYawDegreeE6;
- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;

@end