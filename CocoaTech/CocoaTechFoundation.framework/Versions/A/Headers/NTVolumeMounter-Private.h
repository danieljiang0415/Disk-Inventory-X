//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CocoaTechFoundation/NTVolumeMounter.h>

@interface NTVolumeMounter (Private)
- (void)doMountVolumeWithURL:(id)arg1 user:(id)arg2 password:(id)arg3 notifyWhenMounts:(id)arg4;
- (void)doUnmountVolumeWithDesc:(id)arg1;
- (void)doEjectVolumeWithDesc:(id)arg1;
- (id)url;
- (id)desc;
- (id)volumeForURL:(id)arg1;
- (void)setVolume:(id)arg1 forURL:(id)arg2;
- (id)notificationName;
@end

