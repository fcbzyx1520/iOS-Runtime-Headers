/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;



@interface UIStatusBarServerThread : NSThread 
{
    NSMutableArray *_clientPorts;
    NSMutableArray *_publishers;
    struct { 
        BOOL itemIsEnabled[22]; 
        BOOL timeString[64]; 
        NSInteger gsmSignalStrengthRaw; 
        NSInteger gsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL serviceImageBlack[100]; 
        BOOL serviceImageSilver[100]; 
        BOOL operatorDirectory[1024]; 
        NSUInteger serviceContentType; 
        NSInteger wifiSignalStrengthRaw; 
        NSInteger wifiSignalStrengthBars; 
        NSUInteger dataNetworkType; 
        NSInteger batteryCapacity; 
        NSUInteger batteryState; 
        BOOL notChargingString[150]; 
        NSInteger bluetoothBatteryCapacity; 
        NSInteger thermalColor; 
        unsigned int slowActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        BOOL recordingAppString[100]; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
    } _statusBarData;
    struct { 
        BOOL itemIsEnabled[22]; 
        BOOL timeString[64]; 
        NSInteger gsmSignalStrengthRaw; 
        NSInteger gsmSignalStrengthBars; 
        BOOL serviceString[100]; 
        BOOL serviceImageBlack[100]; 
        BOOL serviceImageSilver[100]; 
        BOOL operatorDirectory[1024]; 
        NSUInteger serviceContentType; 
        NSInteger wifiSignalStrengthRaw; 
        NSInteger wifiSignalStrengthBars; 
        NSUInteger dataNetworkType; 
        NSInteger batteryCapacity; 
        NSUInteger batteryState; 
        BOOL notChargingString[150]; 
        NSInteger bluetoothBatteryCapacity; 
        NSInteger thermalColor; 
        unsigned int slowActivity : 1; 
        BOOL activityDisplayId[256]; 
        unsigned int bluetoothConnected : 1; 
        BOOL recordingAppString[100]; 
        unsigned int displayRawGSMSignal : 1; 
        unsigned int displayRawWifiSignal : 1; 
    } _composedStatusBarData;
    struct { 
        BOOL overrideItemIsEnabled[22]; 
        unsigned int overrideTimeString : 1; 
        unsigned int overrideGsmSignalStrengthRaw : 1; 
        unsigned int overrideGsmSignalStrengthBars : 1; 
        unsigned int overrideServiceString : 1; 
        unsigned int overrideServiceImageBlack : 1; 
        unsigned int overrideServiceImageSilver : 1; 
        unsigned int overrideOperatorDirectory : 1; 
        unsigned int overrideServiceContentType : 1; 
        unsigned int overrideWifiSignalStrengthRaw : 1; 
        unsigned int overrideWifiSignalStrengthBars : 1; 
        unsigned int overrideDataNetworkType : 1; 
        unsigned int overrideBatteryCapacity : 1; 
        unsigned int overrideBatteryState : 1; 
        unsigned int overrideBluetoothBatteryCapacity : 1; 
        unsigned int overrideThermalColor : 1; 
        unsigned int overrideSlowActivity : 1; 
        unsigned int overrideActivityDisplayId : 1; 
        unsigned int overrideBluetoothConnected : 1; 
        unsigned int overrideDisplayRawGSMSignal : 1; 
        unsigned int overrideDisplayRawWifiSignal : 1; 
        struct { 
            BOOL itemIsEnabled[22]; 
            BOOL timeString[64]; 
            NSInteger gsmSignalStrengthRaw; 
            NSInteger gsmSignalStrengthBars; 
            BOOL serviceString[100]; 
            BOOL serviceImageBlack[100]; 
            BOOL serviceImageSilver[100]; 
            BOOL operatorDirectory[1024]; 
            NSUInteger serviceContentType; 
            NSInteger wifiSignalStrengthRaw; 
            NSInteger wifiSignalStrengthBars; 
            NSUInteger dataNetworkType; 
            NSInteger batteryCapacity; 
            NSUInteger batteryState; 
            BOOL notChargingString[150]; 
            NSInteger bluetoothBatteryCapacity; 
            NSInteger thermalColor; 
            unsigned int slowActivity : 1; 
            BOOL activityDisplayId[256]; 
            unsigned int bluetoothConnected : 1; 
            BOOL recordingAppString[100]; 
            unsigned int displayRawGSMSignal : 1; 
            unsigned int displayRawWifiSignal : 1; 
        } values; 
    } _overrides;
    struct __CFDictionary { } *_doubleHeightStatusStrings;
    struct __CFDictionary { } *_glowAnimationStates;
    BOOL _composedStatusBarDataValid;
}


- (void)main;
- (void)_addClient:(NSUInteger)arg1;
- (void)_removeClient:(struct __CFMachPort { }*)arg1;
- (id)_publisherForPort:(NSUInteger)arg1;
- (void)_removePublisher:(struct __CFMachPort { }*)arg1;
- (struct { BOOL x1[22]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; struct { BOOL x_22_1_1[22]; BOOL x_22_1_2[64]; NSInteger x_22_1_3; NSInteger x_22_1_4; BOOL x_22_1_5[100]; BOOL x_22_1_6[100]; BOOL x_22_1_7[100]; BOOL x_22_1_8[1024]; NSUInteger x_22_1_9; NSInteger x_22_1_10; NSInteger x_22_1_11; NSUInteger x_22_1_12; NSInteger x_22_1_13; NSUInteger x_22_1_14; BOOL x_22_1_15[150]; NSInteger x_22_1_16; NSInteger x_22_1_17; unsigned int x_22_1_18 : 1; BOOL x_22_1_19[256]; unsigned int x_22_1_20 : 1; BOOL x_22_1_21[100]; unsigned int x_22_1_22 : 1; unsigned int x_22_1_23 : 1; } x22; }*)_statusBarOverrideData;
- (void)_broadcastStatusBarDataWithActions:(NSInteger)arg1;
- (void)_postStatusBarData:(struct { BOOL x1[22]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; BOOL x15[150]; NSInteger x16; NSInteger x17; unsigned int x18 : 1; BOOL x19[256]; unsigned int x20 : 1; BOOL x21[100]; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg1 actions:(NSInteger)arg2;
- (void)_broadcastStyleOverrides;
- (void)_addStyleOverrides:(NSInteger)arg1 forPublisher:(id)arg2;
- (void)_removeStyleOverrides:(NSInteger)arg1 forPublisher:(id)arg2;
- (BOOL)_glowAnimationStateForStyle:(NSInteger)arg1;
- (void)_postGlowAnimationState:(BOOL)arg1 forStyle:(NSInteger)arg2;
- (id)_doubleHeightStatusStringForStyle:(NSInteger)arg1;
- (void)_postDoubleHeightStatus:(char *)arg1 forStyle:(NSInteger)arg2;
- (void)_postStatusBarOverrideData:(struct { BOOL x1[22]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; struct { BOOL x_22_1_1[22]; BOOL x_22_1_2[64]; NSInteger x_22_1_3; NSInteger x_22_1_4; BOOL x_22_1_5[100]; BOOL x_22_1_6[100]; BOOL x_22_1_7[100]; BOOL x_22_1_8[1024]; NSUInteger x_22_1_9; NSInteger x_22_1_10; NSInteger x_22_1_11; NSUInteger x_22_1_12; NSInteger x_22_1_13; NSUInteger x_22_1_14; BOOL x_22_1_15[150]; NSInteger x_22_1_16; NSInteger x_22_1_17; unsigned int x_22_1_18 : 1; BOOL x_22_1_19[256]; unsigned int x_22_1_20 : 1; BOOL x_22_1_21[100]; unsigned int x_22_1_22 : 1; unsigned int x_22_1_23 : 1; } x22; }*)arg1;
- (BOOL)_permanentizeStatusBarOverrideData;
- (void)_addStatusBarItem:(NSInteger)arg1 forPublisher:(id)arg2;
- (void)_removeStatusBarItem:(NSInteger)arg1 forPublisher:(id)arg2;
- (struct { BOOL x1[22]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; BOOL x15[150]; NSInteger x16; NSInteger x17; unsigned int x18 : 1; BOOL x19[256]; unsigned int x20 : 1; BOOL x21[100]; unsigned int x22 : 1; unsigned int x23 : 1; }*)_statusBarData;
- (NSInteger)_styleOverrides;

@end