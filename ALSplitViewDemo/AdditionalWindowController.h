//
//  AdditionalWindowController.h
//  ALSplitViewDemo
//
//  Created by Valentine Gorshkov on 27.02.13.
//  Copyright (c) 2013 silvansky. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class WebView;
@class ALSplitView;

@interface AdditionalWindowController : NSWindowController <NSOutlineViewDataSource, NSOutlineViewDelegate>

@property (weak) IBOutlet ALSplitView *splitView;
@property (weak) IBOutlet WebView *webView;
@property (weak) IBOutlet NSOutlineView *outline;

@end
