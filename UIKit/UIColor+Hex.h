//
//  UIColor+Hex.h
//
//  Created by Ignacio Romero Zurbuchen on 2/25/13.
//  Copyright (c) 2011 DZen Interaktiv.
//  Licence: MIT-Licence
//

#import <UIKit/UIKit.h>

@interface UIColor (Hex)

/**
 * Returns a color based on the hex code string.
 *
 * @params hexString The hex string.
 * @returns A hex color.
 */
+ (UIColor *)colorFromHex:(NSString *)hex;

/**
 * Returns a color based on the hex code string plus an alpha value.
 *
 * @params hexString The hex string.
 * @params alpha The alpha value of the color.
 * @returns A hex color.
 */
+ (UIColor *)colorFromHex:(NSString *)hex alpha:(CGFloat)alpha;

/**
 * Returns a the hex string equivalent to a color.
 *
 * @returns A hex string.
 */
- (NSString *)hexFromColor;

@end