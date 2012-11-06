/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class NSAttributedString, NSFont, NSString;

@interface _MimeEnrichedWriter : NSObject
{
    NSAttributedString *_attributedString;
    NSString *_string;
    CDStruct_7e4886f7 _stringBuffer;
    NSFont *_defaultFont;
    NSFont *_defaultFixedPitchFont;
    double _defaultPointSize;
    _CommandStackEntry_ce26798d *_commandStack;
    _CommandStackEntry_ce26798d *_topOfStack;
    struct EnrichedState _currentState;
    unsigned long long _currentLineStart;
    unsigned long long _lastSpace;
}

- (void)setState:(struct EnrichedState *)arg1 fromAttributes:(id)arg2;
- (void)setState:(struct EnrichedState *)arg1 fromStackEntry:(struct _CommandStackEntry *)arg2;
- (void)dealloc;
- (void)finalize;
- (id)convertAttributedString:(id)arg1;
- (void)updateOutput:(id)arg1 forAttributes:(id)arg2 range:(struct _NSRange)arg3;
- (void)appendTextFromRange:(struct _NSRange)arg1 toString:(id)arg2;

@end
