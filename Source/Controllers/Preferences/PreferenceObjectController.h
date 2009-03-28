//
//  PreferenceObjectController.h
//  MacIrssi
//
//  Created by Matt Wright on 10/10/2008.
//  Copyright 2008 Matt Wright Consulting. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "IrcnetBridgeController.h"
#import "ChannelBridgeController.h"
#import "ServerBridgeController.h"
#import "ShortcutBridgeController.h"

@interface PreferenceObjectController : NSObject {
  NSMutableArray *chatnetArray;
  NSMutableArray *serverArray;
  NSMutableArray *shortcutArray;
}

- (NSMutableArray*)chatnetArray;
- (NSMutableArray*)serverArray;
- (NSMutableArray*)shortcutArray;

- (IrcnetBridgeController*)addChatnetWithName:(NSString*)string;
- (void)deleteChatnetWithIndex:(int)index;

- (ChannelBridgeController*)addChannelWithName:(NSString*)name toChatnet:(IrcnetBridgeController*)controller;
- (void)deleteChannelWithIndex:(int)index fromChatnet:(IrcnetBridgeController*)ircController;

- (ServerBridgeController*)addServerWithAddress:(NSString*)name port:(int)port;
- (void)deleteServerWithIndex:(int)index;

- (ShortcutBridgeController*)addShortcutWithKeyCode:(int)keyCode flags:(int)flags;
- (void)deleteShortcutWithKeyCode:(int)keyCode flags:(int)flags;

- (NSString*)nick;
- (void)setNick:(NSString*)nick;

- (NSString*)alternateNick;
- (void)setAlternateNick:(NSString*)nick;

- (NSString*)username;
- (void)setUsername:(NSString*)username;

- (NSString*)realName;
- (void)setRealName:(NSString*)name;

- (NSString*)theme;
- (void)setTheme:(NSString*)theme;

- (BOOL)windowHistory;
- (void)setWindowHistory:(BOOL)flag;

@end
