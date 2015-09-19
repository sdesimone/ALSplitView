//
//  AppDelegate.h
//  ALSplitViewDemo
//
//  Created by Valentine Silvansky on 19.02.13.
//  Copyright (c) 2013 silvansky. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>
#import "ALSplitView.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (weak) IBOutlet NSWindow *window;
@property (weak) IBOutlet ALSplitView *splitView;
@property (weak) IBOutlet NSView *imageView;
@property (weak) IBOutlet NSView *imageView2;
@property (weak) IBOutlet NSView *imageView3;
@property (weak) IBOutlet NSSegmentedControl *orientationControl;

- (IBAction)onOrientation:(id)sender;
- (IBAction)onAddView:(id)sender;
- (IBAction)onRemoveView:(id)sender;
- (IBAction)onAddSizeLimits:(id)sender;
- (IBAction)onMore:(id)sender;

@end
