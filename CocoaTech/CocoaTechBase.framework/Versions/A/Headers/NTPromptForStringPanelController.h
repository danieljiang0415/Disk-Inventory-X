//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSWindow;

@interface NTPromptForStringPanelController : NSObject
{
    id editFieldTitle;
    id stringEditField;
    id okButton;
    id cancelButton;
    id window;
    id _target;
    SEL _selector;
    NSString *_resultString;
    id _contextInfo;
    BOOL _userClickedOK;
    NSWindow *_parentWindow;
    BOOL _runningAsSheet;
    BOOL _selectNameOnly;
}

+ (void)title:(id)arg1 defaultText:(id)arg2 contextInfo:(id)arg3 target:(id)arg4 selector:(SEL)arg5 parentWindow:(id)arg6 passwordMode:(BOOL)arg7 selectNameOnly:(BOOL)arg8;
- (id)initWithTitle:(id)arg1 defaultText:(id)arg2 contextInfo:(id)arg3 target:(id)arg4 selector:(SEL)arg5 parentWindow:(id)arg6 passwordMode:(BOOL)arg7 selectNameOnly:(BOOL)arg8;
- (void)awakeFromNib;
- (void)run;
- (void)dealloc;
- (id)resultString;
- (id)contextInfo;
- (BOOL)userClickedOK;

@end
