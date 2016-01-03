//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSColor, NSString;

@interface NTGlobalPreferences : NSObject
{
    NSColor *_highlightColor;
    int _useGraphiteAppearance;
    NSString *_timeFormatString;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)systemColorsChangedNotification:(id)arg1;
- (void)controlTintChangedNotification:(id)arg1;
- (id)highlightColor;
- (BOOL)playSoundEffects;
- (id)iToolsName;
- (id)iToolsPassword;
- (id)timeFormatString;
- (BOOL)useGraphiteAppearance;

@end

