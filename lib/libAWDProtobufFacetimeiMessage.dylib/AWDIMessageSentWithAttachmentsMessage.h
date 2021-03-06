/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
 */

@class NSString;

@interface AWDIMessageSentWithAttachmentsMessage : PBCodable {
    unsigned int _fzError;
    NSString *_guid;
    BOOL _hasFzError;
    BOOL _hasMessageError;
    BOOL _hasMmcsError;
    BOOL _hasSendTime;
    BOOL _hasTimestamp;
    unsigned int _messageError;
    unsigned int _mmcsError;
    float _sendTime;
    unsigned long long _timestamp;
}

@property unsigned int fzError;
@property(retain) NSString * guid;
@property BOOL hasFzError;
@property(readonly) BOOL hasGuid;
@property BOOL hasMessageError;
@property BOOL hasMmcsError;
@property BOOL hasSendTime;
@property BOOL hasTimestamp;
@property unsigned int messageError;
@property unsigned int mmcsError;
@property float sendTime;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fzError;
- (id)guid;
- (BOOL)hasFzError;
- (BOOL)hasGuid;
- (BOOL)hasMessageError;
- (BOOL)hasMmcsError;
- (BOOL)hasSendTime;
- (BOOL)hasTimestamp;
- (unsigned int)messageError;
- (unsigned int)mmcsError;
- (BOOL)readFrom:(id)arg1;
- (float)sendTime;
- (void)setFzError:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasFzError:(BOOL)arg1;
- (void)setHasMessageError:(BOOL)arg1;
- (void)setHasMmcsError:(BOOL)arg1;
- (void)setHasSendTime:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setMessageError:(unsigned int)arg1;
- (void)setMmcsError:(unsigned int)arg1;
- (void)setSendTime:(float)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
