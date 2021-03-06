//
//  MKMapView+Center.h
//  
//  Created by Ignacio Romero Zurbuchen on 4/18/13.
//  Copyright (c) 2011 DZen Interaktiv.
//  Licence: MIT-Licence
//  http://opensource.org/licenses/MIT
//

#import <MapKit/MapKit.h>

@interface MKMapView (Center)

/*
 *
 */
- (void)centerMapFromOrigin:(CLLocationCoordinate2D)origin toDestination:(CLLocationCoordinate2D)destination animated:(BOOL)animated;

/*
 *
 */
- (void)centerMapToUserLocationAnimated:(BOOL)animated;

@end
