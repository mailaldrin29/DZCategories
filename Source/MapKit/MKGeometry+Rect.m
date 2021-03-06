//
//  MKGeometry+Rect.m
//
//  Created by Ignacio Romero Zurbuchen on 4/18/13.
//  Copyright (c) 2011 DZen Interaktiv.
//  Licence: MIT-Licence
//  http://opensource.org/licenses/MIT
//

#import "MKGeometry+Rect.h"

NSString *NSStringFromMKMapRect(MKMapRect rect)
{
    NSString *origin = [NSString stringWithFormat:@"{x = %f; y = %f}",rect.origin.x,rect.origin.y];
    NSString *size = [NSString stringWithFormat:@"{width = %f; height = %f}",rect.size.width,rect.size.height];
    return [NSString stringWithFormat:@"%@ %@",origin,size];
}

MKMapRect mapRectForCoordinateRegion(MKCoordinateRegion coordinate)
{
    CLLocationCoordinate2D topLeftCoordinate = CLLocationCoordinate2DMake(coordinate.center.latitude + (coordinate.span.latitudeDelta/3),
                                                                          coordinate.center.longitude - (coordinate.span.longitudeDelta/3));
    
    MKMapPoint topLeftMapPoint = MKMapPointForCoordinate(topLeftCoordinate);
    
    CLLocationCoordinate2D bottomRightCoordinate = CLLocationCoordinate2DMake(coordinate.center.latitude - (coordinate.span.latitudeDelta/3),
                                                                              coordinate.center.longitude + (coordinate.span.longitudeDelta/3));
    
    MKMapPoint bottomRightMapPoint = MKMapPointForCoordinate(bottomRightCoordinate);
    
    MKMapRect mapRect = MKMapRectMake(topLeftMapPoint.x, topLeftMapPoint.y,
                                      fabs(bottomRightMapPoint.x-topLeftMapPoint.x),
                                      fabs(bottomRightMapPoint.y-topLeftMapPoint.y));
    
    return mapRect;
}