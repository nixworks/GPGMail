/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSPopUpButton.h"

@interface MessageViewerLazyPopUpButton : NSPopUpButton
{
    BOOL _didLazyLoadMenu;
    int _menuToUse;
}

- (void)awakeFromNib;
- (void)initializeMenu;
- (void)mouseDown:(id)arg1;
- (long)menuToUse;
- (void)setMenuToUse:(long)arg1;

@end
