/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <WebInspectorClientRegistryDelegate>;

@interface WebInspectorClientRegistry : NSObject  {
    unsigned int _nextAvailablePageId;
    struct HashMap<unsigned int,WebInspectorClient*,WTF::IntHash<unsigned int>,WTF::HashTraits<unsigned int>,WTF::HashTraits<WebInspectorClient*> > { 
        struct HashTable<unsigned int,std::pair<unsigned int, WebInspectorClient*>,WTF::PairFirstExtractor<std::pair<unsigned int, WebInspectorClient*> >,WTF::IntHash<unsigned int>,WTF::PairHashTraits<WTF::HashTraits<unsigned int>, WTF::HashTraits<WebInspectorClient*> >,WTF::HashTraits<unsigned int> > { 
            struct pair<unsigned int,WebInspectorClient*> {} *m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    } _pageClientMap;
    <WebInspectorClientRegistryDelegate> *_delegate;
}

@property <WebInspectorClientRegistryDelegate> * delegate;

+ (id)sharedRegistry;

- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)delegate;
- (id)inspectableWebViews;
- (unsigned int)_getNextAvailablePageId;
- (struct WebInspectorClient { int (**x1)(); id x2; struct RetainPtr<WebNodeHighlighter> { id x_3_1_1; } x3; struct Page {} *x4; struct RetainPtr<WebInspectorWindowController> { id x_5_1_1; } x5; struct HashMap<WTF::String,WTF::String,WTF::StringHash,WTF::HashTraits<WTF::String>,WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String,std::pair<WTF::String, WTF::String>,WTF::PairFirstExtractor<std::pair<WTF::String, WTF::String> >,WTF::StringHash,WTF::PairHashTraits<WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >,WTF::HashTraits<WTF::String> > { struct pair<WTF::String,WTF::String> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; int x7; id x8; }*)clientForPageId:(unsigned int)arg1;
- (void)registerClient:(struct WebInspectorClient { int (**x1)(); id x2; struct RetainPtr<WebNodeHighlighter> { id x_3_1_1; } x3; struct Page {} *x4; struct RetainPtr<WebInspectorWindowController> { id x_5_1_1; } x5; struct HashMap<WTF::String,WTF::String,WTF::StringHash,WTF::HashTraits<WTF::String>,WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String,std::pair<WTF::String, WTF::String>,WTF::PairFirstExtractor<std::pair<WTF::String, WTF::String> >,WTF::StringHash,WTF::PairHashTraits<WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >,WTF::HashTraits<WTF::String> > { struct pair<WTF::String,WTF::String> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; int x7; id x8; }*)arg1;
- (void)unregisterClient:(struct WebInspectorClient { int (**x1)(); id x2; struct RetainPtr<WebNodeHighlighter> { id x_3_1_1; } x3; struct Page {} *x4; struct RetainPtr<WebInspectorWindowController> { id x_5_1_1; } x5; struct HashMap<WTF::String,WTF::String,WTF::StringHash,WTF::HashTraits<WTF::String>,WTF::HashTraits<WTF::String> > { struct HashTable<WTF::String,std::pair<WTF::String, WTF::String>,WTF::PairFirstExtractor<std::pair<WTF::String, WTF::String> >,WTF::StringHash,WTF::PairHashTraits<WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >,WTF::HashTraits<WTF::String> > { struct pair<WTF::String,WTF::String> {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_6_1_1; } x6; int x7; id x8; }*)arg1;
- (id)init;

@end