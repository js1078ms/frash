//
//  FlashViewController.h
//  Player2
//
//  Created by Nicholas Allegra on 6/13/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#define IOSFC_BUILDING_IOSFC
#include "IOSurface.h"
@class Server;

@interface FlashViewController : UIViewController {
	IOSurfaceRef sfc;
	CGImageRef oldContents;
	int rpcfd;
	Server *server;
	CGDataProviderRef provider;
}
@property (retain) Server *server;
- (void)useSurface:(IOSurfaceRef)sfc;
- (void)displaySyncInRect:(CGRect *)rect;
- (CGSize)movieSize;
- (void)diedWithError:(NSString *)error;

@end
