//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NTFindByContent;

@interface NTFindByContentThread : NSObject
{
    NTFindByContent *_threadController;
    CDUnknownFunctionPointerType _callBackUPP;
}

- (id)initWithThreadController:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (void)find:(id)arg1 content:(id)arg2;

@end

