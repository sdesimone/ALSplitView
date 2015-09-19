//
//  ALSplitView.h
//  ALSplitView
//
//  Created by Valentine Silvansky on 19.02.13.
//  Copyright (c) 2013 silvansky. All rights reserved.
//
//  Original code stored at https://github.com/silvansky/ALSplitView
//

#import <Cocoa/Cocoa.h>

typedef enum _ALSplitViewOrientation
{
	ALSplitViewOrientationHorizontal,
	ALSplitViewOrientationVertical
} ALSplitViewOrientation;

@interface ALSplitView : NSView

@property (assign) ALSplitViewOrientation orientation;
@property (strong) NSColor *handleColor;
@property (strong) NSImage *handleBackgroundImage;
@property (strong) NSImage *handleImage;
@property (assign) CGFloat handleWidth;

- (void)setMinimumWidth:(CGFloat)width forViewAtIndex:(NSInteger)index;
- (void)setMaximumWidth:(CGFloat)width forViewAtIndex:(NSInteger)index;

- (NSDictionary *)savePositionsOfHandles;
- (void)restorePositionsOfHandlesWithDictionary:(NSDictionary *)dictionary;

@end
