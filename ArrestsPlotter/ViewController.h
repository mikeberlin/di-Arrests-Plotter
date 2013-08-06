//
//  ViewController.h
//  ArrestsPlotter
//
//  Created by Mike Berlin on 4/24/13.
//  Copyright (c) 2013 Mike Berlin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface ViewController : UIViewController <MKMapViewDelegate>

@property (weak, nonatomic) IBOutlet MKMapView *mapView;

- (IBAction)refreshTapped:(id)sender;

@end