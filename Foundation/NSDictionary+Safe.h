//
//  NSDictionary+Safe.h
//
//  Created by Ignacio Romero Zurbuchen on 2/8/13.
//  Copyright (c) 2011 DZen Interaktiv.
//  Licence: MIT-Licence
//  http://opensource.org/licenses/MIT
//

#import <Foundation/Foundation.h>

/*
 * Safe methods for saving and retrieving data from a NSDictionary.
 */
@interface NSDictionary (Safe)

/* Returns the none-nil value associated with a given key.
 * @params aKey The key for which to return the corresponding value.
 * @returns The none-nil value associated with aKey.
 */
- (id)safeObjectForKey:(id)aKey;

@end
