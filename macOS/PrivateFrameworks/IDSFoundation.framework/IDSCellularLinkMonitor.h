//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSString;

@interface IDSCellularLinkMonitor : NSObject
{
    BOOL _dataUsable;
    NSString *_dataIndicator;
    NSString *_cellularDataInterfaceName;
    unsigned int _radioAccessTechnology;
    unsigned int _cellularMTU;
    NSHashTable *_cellularLinkDelegates;
    NSMutableDictionary *_notificationRegInfo;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)registerCellularDataStatusNotification:(BOOL)arg1;
- (void)currentCellularSignalStrength:(int *)arg1 signalStrength:(int *)arg2 signalGrade:(int *)arg3;
- (void)updateProtocolQualityOfService:(BOOL)arg1 localAddress:(struct sockaddr *)arg2;
- (BOOL)dropIPPackets:(id)arg1 localAddress:(struct sockaddr *)arg2 remoteAddress:(struct sockaddr *)arg3 isRelay:(BOOL)arg4 channelNumberMSB:(unsigned char)arg5;
- (BOOL)setPacketNotificationFilter:(struct sockaddr *)arg1 remote:(struct sockaddr *)arg2 uniqueTag:(unsigned int)arg3 callType:(unsigned char)arg4;
- (void)removePacketNotificationFilter;
@property(readonly) BOOL dataUsable; // @synthesize dataUsable=_dataUsable;
@property(readonly) unsigned int cellularMTU; // @synthesize cellularMTU=_cellularMTU;
@property(readonly) unsigned int radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
@property(readonly) NSString *cellularDataInterfaceName; // @synthesize cellularDataInterfaceName=_cellularDataInterfaceName;
- (void)reset;
- (void)_updateDataStatus;
- (BOOL)_updateCellularMTU;
- (BOOL)_updateRadioAccessTechnology;
- (BOOL)_updateCellularDataInterface:(BOOL)arg1;
- (void)_setupCTServerConnection;
- (void)removeCellularLinkDelegate:(id)arg1;
- (void)addCellularLinkDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

