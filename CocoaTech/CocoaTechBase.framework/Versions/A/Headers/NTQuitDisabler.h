//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock;

@interface NTQuitDisabler : NSObject
{
    NSLock *threadLock;
    int dontCount;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)dontQuit;
- (void)allowQuit;
- (BOOL)canQuit;

@end

