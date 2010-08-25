//
//  ViewManager-NSNotification.h
//  IconUtility
//
//  Created by boreal-kiss.com on 10/07/13.
//  Copyright 2010 boreal-kiss.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ViewManager.h"

/**
 * Private.
 */
@interface ViewManager (_NSNotification)
-(void)_subscribe;
-(void)_unsubscribe;
-(void)_draggingConcludedHandler:(NSNotification *)aNotification;
@end
