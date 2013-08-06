//
//  MyLocation.h
//  ArrestsPlotter
//
//  Created by Mike Berlin on 4/24/13.
//  Copyright (c) 2013 Mike Berlin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface MyLocation : NSObject <MKAnnotation>

- (id)initWithName:(NSString*)name address:(NSString*)address coordinate:(CLLocationCoordinate2D)coordinate;
- (MKMapItem*)mapItem;

@end