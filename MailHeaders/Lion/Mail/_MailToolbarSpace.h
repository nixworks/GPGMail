/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSView.h"

@class MailToolbarSpaceItemWithPin;

@interface _MailToolbarSpace : NSView
{
    MailToolbarSpaceItemWithPin *_spaceItem;
    BOOL _inPalette;
}

- (id)initWithSize:(struct CGSize)arg1 forSpaceItem:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)inPalette;
- (void)setInPalette:(BOOL)arg1;

@end
