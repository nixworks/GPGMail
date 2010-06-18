/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSAnimationDelegate-Protocol.h"

@class BookmarksManager, MailboxUid, MailboxesOutlineView, NSArrayController, NSMatrix, NSString, NSTableView, NSTextField, NSTreeController, NSView, NSViewAnimation, NSWindow, RSSFeedSubscriber;

@interface RSSAddFeedController : NSObject <NSAnimationDelegate>
{
    NSWindow *_window;
    NSMatrix *_viewChoice;
    NSView *_searchSection;
    NSView *_containerView;
    NSView *_safariBookmarksView;
    NSTextField *_customURLView;
    BookmarksManager *_bookmarksManager;
    NSTableView *_feeds;
    MailboxesOutlineView *_sidebar;
    NSTreeController *_sidebarController;
    NSArrayController *_feedController;
    BOOL _isSpinning;
    BOOL _isShowingCustomField;
    BOOL _showInInbox;
    BOOL _showAlert;
    NSString *_statusMessage;
    BOOL _rememberViewChanges;
    struct CGSize _safariBookmarksSize;
    struct CGSize _customURLSize;
    NSViewAnimation *_currentAnimation;
    RSSFeedSubscriber *_subscriber;
    MailboxUid *_parentMailbox;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (id)init;
- (id)retain;
- (unsigned long)retainCount;
- (void)release;
- (id)autorelease;
- (void)dealloc;
- (void)_setContainerSubview:(id)arg1;
- (void)setShowCustomFeedField:(BOOL)arg1 animate:(BOOL)arg2 forFirstTime:(BOOL)arg3;
- (float)animation:(id)arg1 valueForProgress:(float)arg2;
- (void)animationDidEnd:(id)arg1;
- (void)_orderWindowFront;
- (void)_orderWindowOutWithCode:(unsigned long)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long)arg2 contextInfo:(void *)arg3;
- (void)_doTweaksWhichShouldBeInTheNib;
- (void)_showAndRememberViewChanges:(BOOL)arg1 customURLString:(id)arg2;
- (void)show;
- (void)showWithParentMailbox:(id)arg1;
- (void)showWithCustomURLString:(id)arg1;
- (void)addClicked:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)changeView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_subscribeToCustomURL;
- (void)controlTextDidChange:(id)arg1;
- (void)_setupBookmarks;
- (void)_activateBookmarks;
- (void)_deactivateBookmarks;
- (void)_updateContextFromNotification:(id)arg1;
- (void)_bookmarksDidChange:(id)arg1;
- (void)_subscribeToSafariBookmarks;
- (id)_bookmarkAtRow:(long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long)arg2;
- (void)tableViewSingleClick:(id)arg1;
- (void)tableViewDoubleClick:(id)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)setSubscriber:(id)arg1;
- (id)subscriber;
- (id)parentMailbox;
- (void)setParentMailbox:(id)arg1;
- (struct CGSize)customURLSize;
- (void)setCustomURLSize:(struct CGSize)arg1;
- (struct CGSize)safariBookmarksSize;
- (void)setSafariBookmarksSize:(struct CGSize)arg1;
- (BOOL)rememberViewChanges;
- (void)setRememberViewChanges:(BOOL)arg1;
- (id)currentAnimation;
- (void)setCurrentAnimation:(id)arg1;
- (id)statusMessage;
- (void)setStatusMessage:(id)arg1;
- (BOOL)showAlert;
- (void)setShowAlert:(BOOL)arg1;
- (BOOL)showInInbox;
- (void)setShowInInbox:(BOOL)arg1;
- (BOOL)isShowingCustomField;
- (void)setIsShowingCustomField:(BOOL)arg1;
- (BOOL)isSpinning;
- (void)setIsSpinning:(BOOL)arg1;
- (id)bookmarksManager;
- (void)setBookmarksManager:(id)arg1;

@end
