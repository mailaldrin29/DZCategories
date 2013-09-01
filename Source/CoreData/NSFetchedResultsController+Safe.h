//
//  NSFetchedResultsController+Safe.h
//
//  Created by Ignacio Romero Zurbuchen on 6/28/13.
//  Copyright (c) 2011 DZen Interaktiv.
//  Licence: MIT-Licence
//  http://opensource.org/licenses/MIT
//

#import <CoreData/CoreData.h>

/* */
@interface NSFetchedResultsController (Safe)

/* */
- (id)safeObjectAtIndexPath:(NSIndexPath *)indexPath;

@end
