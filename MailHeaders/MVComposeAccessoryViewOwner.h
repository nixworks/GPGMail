/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSView;

@interface MVComposeAccessoryViewOwner : NSObject
{
    NSView *accessoryView;
}

+ (id)composeAccessoryViewOwner;
+ (id)composeAccessoryViewNibName;
- (void)setupUIForMessage:(id)arg1;
- (id)composeAccessoryView;
- (BOOL)messageWillBeDelivered:(id)arg1;
- (BOOL)messageWillBeSaved:(id)arg1;

@end
