/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSTableView.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSCell;

@interface ToDoListView : NSTableView <NSTableViewDataSource, NSTableViewDelegate>
{
    int _mouseRow;
    int _mouseCol;
    NSCell *_mouseCell;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)updateTrackingAreas;
- (id)preparedCellAtColumn:(long)arg1 row:(long)arg2;
- (void)setMouseCell:(id)arg1 row:(long)arg2 column:(long)arg3;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)updateCell:(id)arg1;
- (id)mouseCell;
- (long)mouseRow;
- (long)mouseColumn;
- (void)keyDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)shouldFocusCell:(id)arg1 atColumn:(long)arg2 row:(long)arg3;
- (id)focusedTableColumn;

@end
