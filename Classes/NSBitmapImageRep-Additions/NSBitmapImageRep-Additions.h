//
//  NSBitmapImageRep-Additions.h
//  IconUtility
//
//  Created by boreal-kiss.com on 10/07/13.
//  Copyright 2010 boreal-kiss.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>

/**
 * Additional category for convenience purpose.
 */
@interface NSBitmapImageRep (Additions)

/**
 * The convenience method.
 */
+(NSBitmapImageRep *)imageRepWithPixelsWide:(NSInteger)width pixelsHigh:(NSInteger)height hasAlpha:(BOOL)alpha;

/**
 * Returns an NSImage object from the current bimap plane.
 */
-(NSImage *)image;

/**
 * The image will be disproportionately drwan in the bitmap plane.
 */
-(void)setImage:(NSImage *)anImage;
@end
