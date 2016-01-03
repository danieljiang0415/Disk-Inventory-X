//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NTGrid, NTGridDataSet;

@interface NTGridLayout : NSObject
{
    NTGrid *_grid;
    NTGridDataSet *_gridDataSet;
}

- (id)initWithGrid:(id)arg1;
- (void)dealloc;
- (void)setLayoutStyle:(int)arg1;
- (int)layoutStyle;
- (unsigned int)itemSize;
- (void)setItemSize:(unsigned int)arg1;
- (void)setDataSet:(id)arg1;
- (id)dataSet;
- (unsigned int)numberOfItems;
- (void)addObjects:(id)arg1;
- (void)addObjects:(id)arg1 withCoordinate:(struct _NSPoint)arg2;
- (void)addObject:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertObjects:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addObject:(id)arg1 withCoordinate:(struct _NSPoint)arg2;
- (void)removeObjectWithCoordinate:(struct _NSPoint)arg1;
- (id)objectWithCoordinate:(struct _NSPoint)arg1;
- (id)drawingCacheWithCoordinate:(struct _NSPoint)arg1;
- (void)setDrawingCache:(id)arg1 withCoordinate:(struct _NSPoint)arg2;
- (struct _NSRect)objectRectWithCoordinate:(struct _NSPoint)arg1;
- (struct _NSRect)objectRectAtIndex:(unsigned int)arg1;
- (int)numRows:(BOOL)arg1;
- (int)numColumns:(BOOL)arg1;
- (id)objectAtPoint:(struct _NSPoint)arg1;
- (struct _NSPoint)coordinateAtPoint:(struct _NSPoint)arg1;
- (struct _NSRect)objectRectAtPoint:(struct _NSPoint)arg1;
- (struct _NSSize)viewSize;

@end

