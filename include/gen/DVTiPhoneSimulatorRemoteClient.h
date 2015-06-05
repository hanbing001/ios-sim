//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CoreSimulator.h"

#pragma mark -

//
// File: /Applications/Xcode_6.3_beta_2/Xcode-beta.app/Contents/SharedFrameworks/DVTiPhoneSimulatorRemoteClient.framework/Versions/A/DVTiPhoneSimulatorRemoteClient
// UUID: A30D747E-345C-3449-AA62-BCA9EE6CDC22
//
//                           Arch: x86_64
//                Current version: 12.0.0
//          Compatibility version: 1.0.0
//                 Source version: 7519.3.0.0.0
//       Minimum Mac OS X version: 10.9.0
//                    SDK version: 10.10.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @loader_path/../../../
//                               = /Applications/Xcode_6.3_beta_2/Xcode-beta.app/Contents/SharedFrameworks
//                       Run path: @loader_path/../../../../PrivateFrameworks/
//                               = /Applications/Xcode_6.3_beta_2/Xcode-beta.app/Contents/PrivateFrameworks
//                       Run path: @loader_path/../../../../Developer/Library/PrivateFrameworks/
//                               = /Applications/Xcode_6.3_beta_2/Xcode-beta.app/Contents/Developer/Library/PrivateFrameworks
//


@class DTiPhoneSimulatorApplicationSpecifier;
@class DTiPhoneSimulatorSession;
@class DTiPhoneSimulatorSessionConfig;
@class DTiPhoneSimulatorSystemRoot;
@class DVTiPhoneSimulatorMessenger;
@class DVTNotificationToken;
@class DVTStackBacktrace;
@class DVTiPhoneSimulatorDistNoteMessenger;
@class SimDevice;
@class SimDeviceType;
@class SimDeviceSet;
@class SimRuntime;


@protocol DVTInvalidation <NSObject>
- (void)primitiveInvalidate;

@optional
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)invalidate;
@end

@protocol DTiPhoneSimulatorSessionDelegate

- (void) session: (DTiPhoneSimulatorSession *) session didEndWithError: (NSError *) error;
- (void) session: (DTiPhoneSimulatorSession *) session didStart: (BOOL) started withError: (NSError *) error;

@end

@interface DTiPhoneSimulatorSession : NSObject <DVTInvalidation>
{
	int _simulatedApplicationPID;
	int _simulatorPID;
	id <DTiPhoneSimulatorSessionDelegate> _delegate;
	NSString *_simulatedAppPath;
	NSString *_uuid;
	DTiPhoneSimulatorSessionConfig *_sessionConfig;
	long long _sessionLifecycleProgress;
}

+ (void)initialize;
@property(nonatomic) long long sessionLifecycleProgress; // @synthesize sessionLifecycleProgress=_sessionLifecycleProgress;
@property(copy, nonatomic) DTiPhoneSimulatorSessionConfig *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property int simulatorPID; // @synthesize simulatorPID=_simulatorPID;
@property(copy) NSString *simulatedAppPath; // @synthesize simulatedAppPath=_simulatedAppPath;
@property int simulatedApplicationPID; // @synthesize simulatedApplicationPID=_simulatedApplicationPID;
@property(retain, nonatomic) id <DTiPhoneSimulatorSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (int)connectToServiceWithError:(id *)arg1;
- (void)doUbiquityFetchEvent;
- (void)doFetchEventForPID:(int)arg1;
- (void)backgroundAllApps:(int)arg1;
- (BOOL)_startSessionInSimulatorWithError:(id *)arg1;
- (BOOL)attachedToTargetWithConfig:(id)arg1 error:(id *)arg2;
- (void)stopLocationSimulation;
- (void)simulateLocationWithLatitude:(id)arg1 longitude:(id)arg2;
- (void)requestEndWithTimeout:(double)arg1;
- (BOOL)requestStartWithConfig:(id)arg1 timeout:(double)arg2 error:(id *)arg3;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

typedef NS_ENUM(NSInteger, DTiPhoneSimulatorExternalDisplayType) {
	DTiPhoneSimulatorExternalDisplayTypeWatchRegular = 1,
	DTiPhoneSimulatorExternalDisplayTypeWatchCompact = 2,
	DTiPhoneSimulatorExternalDisplayTypeCarPlay = 3
};

@interface DTiPhoneSimulatorSessionConfig : NSObject <NSCopying>
{
	BOOL _shouldInstallApplicationToSimulate;
	BOOL _simulatedApplicationShouldWaitForDebugger;
	BOOL _launchForBackgroundFetch;
	SimDevice *_device;
	SimRuntime *_runtime;
	NSString *_simulatedArchitecture;
	DTiPhoneSimulatorApplicationSpecifier *_applicationToSimulateOnStart;
	NSNumber *_pid;
	NSArray *_simulatedApplicationLaunchArgs;
	NSDictionary *_simulatedApplicationLaunchEnvironment;
	NSString *_simulatedApplicationStdOutPath;
	NSString *_simulatedApplicationStdErrPath;
	NSFileHandle *_stdinFileHandle;
	NSFileHandle *_stdoutFileHandle;
	NSFileHandle *_stderrFileHandle;
	long long _externalDisplayType;
	NSString *_simulatedDeviceInfoName;
	NSString *_localizedClientName;
	NSNumber *_simulatedDeviceFamily;
	NSNumber *_simulatedDisplayHeight;
	NSNumber *_simulatedDisplayScale;
}

+ (id)displayNameForDeviceFamily:(id)arg1;
@property(copy) NSNumber *simulatedDisplayScale; // @synthesize simulatedDisplayScale=_simulatedDisplayScale;
@property(copy) NSNumber *simulatedDisplayHeight; // @synthesize simulatedDisplayHeight=_simulatedDisplayHeight;
@property(copy) NSNumber *simulatedDeviceFamily; // @synthesize simulatedDeviceFamily=_simulatedDeviceFamily;
@property(copy) NSString *localizedClientName; // @synthesize localizedClientName=_localizedClientName;
@property(copy, nonatomic) NSString *simulatedDeviceInfoName; // @synthesize simulatedDeviceInfoName=_simulatedDeviceInfoName;
@property long long externalDisplayType; // @synthesize externalDisplayType=_externalDisplayType;
@property BOOL launchForBackgroundFetch; // @synthesize launchForBackgroundFetch=_launchForBackgroundFetch;
@property(retain) NSFileHandle *stderrFileHandle; // @synthesize stderrFileHandle=_stderrFileHandle;
@property(retain) NSFileHandle *stdoutFileHandle; // @synthesize stdoutFileHandle=_stdoutFileHandle;
@property(retain) NSFileHandle *stdinFileHandle; // @synthesize stdinFileHandle=_stdinFileHandle;
@property(copy) NSString *simulatedApplicationStdErrPath; // @synthesize simulatedApplicationStdErrPath=_simulatedApplicationStdErrPath;
@property(copy) NSString *simulatedApplicationStdOutPath; // @synthesize simulatedApplicationStdOutPath=_simulatedApplicationStdOutPath;
@property BOOL simulatedApplicationShouldWaitForDebugger; // @synthesize simulatedApplicationShouldWaitForDebugger=_simulatedApplicationShouldWaitForDebugger;
@property(copy) NSDictionary *simulatedApplicationLaunchEnvironment; // @synthesize simulatedApplicationLaunchEnvironment=_simulatedApplicationLaunchEnvironment;
@property(copy) NSArray *simulatedApplicationLaunchArgs; // @synthesize simulatedApplicationLaunchArgs=_simulatedApplicationLaunchArgs;
@property(copy) NSNumber *pid; // @synthesize pid=_pid;
@property BOOL shouldInstallApplicationToSimulate; // @synthesize shouldInstallApplicationToSimulate=_shouldInstallApplicationToSimulate;
@property(copy) DTiPhoneSimulatorApplicationSpecifier *applicationToSimulateOnStart; // @synthesize applicationToSimulateOnStart=_applicationToSimulateOnStart;
@property(copy) NSString *simulatedArchitecture; // @synthesize simulatedArchitecture=_simulatedArchitecture;
@property(retain, nonatomic) SimRuntime *runtime; // @synthesize runtime=_runtime;
- (id)description;
@property(retain, nonatomic) DTiPhoneSimulatorSystemRoot *simulatedSystemRoot;
@property(retain, nonatomic) SimDevice *device; // @synthesize device=_device;
@property(readonly, copy) NSDictionary *toolSpawnOptions;
@property(readonly, copy) NSDictionary *appLaunchOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

@interface DTiPhoneSimulatorSystemRoot : NSObject <NSCopying>
{
	SimRuntime *_runtime;
}

+ (id)rootWithSDKVersion:(id)arg1;
+ (id)rootWithSDKPath:(id)arg1;
+ (id)rootWithSimRuntime:(id)arg1;
+ (id)defaultRoot;
+ (id)knownRoots;
+ (void)initialize;
@property(readonly) SimRuntime *runtime; // @synthesize runtime=_runtime;
- (id)description;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *sdkVersion;
@property(readonly, copy) NSString *sdkDisplayName;
@property(readonly, copy) NSString *sdkRootPath;
- (id)initWithRuntime:(id)arg1;

@end

@interface DTiPhoneSimulatorApplicationSpecifier : NSObject <NSCopying>
{
}

+ (id)specifierWithToolPath:(id)arg1;
+ (id)specifierWithApplicationBundleIdentifier:(id)arg1;
+ (id)specifierWithApplicationPath:(id)arg1;
- (BOOL)isTool;
- (id)description;
@property(readonly, copy) NSString *toolPath;
@property(readonly, copy) NSString *bundleID;
@property(readonly, copy) NSString *appPath;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface DTiPhoneSimulatorApplicationSpecifier_Path : DTiPhoneSimulatorApplicationSpecifier
{
	NSString *_appPath;
}

+ (id)specifierWithApplicationPath:(id)arg1;
- (id)appPath;
- (id)description;

@end

@interface DTiPhoneSimulatorApplicationSpecifier_BundleIdentifier : DTiPhoneSimulatorApplicationSpecifier
{
	NSString *_bundleID;
}

+ (id)specifierWithApplicationBundleIdentifier:(id)arg1;
- (id)bundleID;
- (id)description;

@end

@interface DTiPhoneSimulatorApplicationSpecifier_ToolPath : DTiPhoneSimulatorApplicationSpecifier
{
	NSString *_toolPath;
}

+ (id)specifierWithToolPath:(id)arg1;
- (id)toolPath;
- (id)description;
- (BOOL)isTool;

@end

@interface SimRuntime (DVTAdditions)
+ (id)dvt_runtimeFromSDKRoot:(id)arg1;
@end

@interface SimDeviceType (DVTAdditions)
- (id)dvt_latestRuntime;
- (id)dvt_supportedArchs;
- (id)dvt_supportedArchStrings;
- (_Bool)dvt_has64BitArch;
@end

@interface SimDeviceSet (DVTAdditions)
- (id)dvt_registerNotificationHandlerOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)dvt_registerNotificationHandler:(CDUnknownBlockType)arg1;
@end

@interface SimDevice (DVTAdditions)
- (id)dvt_launchApplicationWithBundleIdentifier:(id)arg1 andOptions:(id)arg2;
- (id)dvt_launchApplicationWithBundleIdentifier:(id)arg1;
- (id)dvt_spawnExecutableAtPath:(id)arg1 withOptions:(id)arg2 andTerminationHandler:(CDUnknownBlockType)arg3;
- (id)dvt_spawnExecutableAtPath:(id)arg1 withOptions:(id)arg2;
- (id)dvt_applicationIsInstalledWithBundleIdentifier:(id)arg1;
- (id)dvt_uninstallApplicationWithBundleIdentifier:(id)arg1 andOptions:(id)arg2;
- (id)dvt_uninstallApplicationWithBundleIdentifier:(id)arg1;
- (id)dvt_installApplicationAtPath:(id)arg1 withOptions:(id)arg2;
- (id)dvt_installApplicationAtPath:(id)arg1;
- (id)dvt_restoreContentsAndSettingsFrom:(id)arg1;
- (id)dvt_eraseContentsAndSettings;
- (id)dvt_shutdown;
- (id)dvt_bootWithOptions:(id)arg1;
- (id)dvt_boot;
- (id)dvt_notifyOfBootOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)dvt_registerNotificationHandlerOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)dvt_registerNotificationHandler:(CDUnknownBlockType)arg1;
@end
