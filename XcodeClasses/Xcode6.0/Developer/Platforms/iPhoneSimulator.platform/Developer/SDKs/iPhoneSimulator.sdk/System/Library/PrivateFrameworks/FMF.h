//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FMF.framework/FMF
// UUID: 134E2C63-2DBE-380B-9523-1954F3BA3D82
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 97.0.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol FMFSessionDelegate <NSObject>

@optional
- (void)didReceiveServerError:(NSError *)arg1;
- (void)didUpdatePendingOffersForHandles:(NSSet *)arg1;
- (void)didUpdateActiveDeviceList:(NSSet *)arg1;
- (void)didChangeActiveLocationSharingDevice:(FMFDevice *)arg1;
- (void)didFailToHandleMappingPacket:(NSString *)arg1 error:(NSError *)arg2;
- (void)mappingPacketProcessingCompleted:(NSString *)arg1;
- (void)sendMappingPacket:(NSString *)arg1 toHandle:(FMFHandle *)arg2;
- (void)didUpdateHidingStatus:(_Bool)arg1;
- (void)didStopAbilityToGetLocationForHandle:(FMFHandle *)arg1;
- (void)didStartAbilityToGetLocationForHandle:(FMFHandle *)arg1;
- (void)didStopSharingMyLocationWithHandle:(FMFHandle *)arg1;
- (void)didStartSharingMyLocationWithHandle:(FMFHandle *)arg1;
- (void)didReceiveFriendshipRequest:(FMFFriendshipRequest *)arg1;
- (void)connectionError:(NSError *)arg1;
- (void)didFailToFetchLocationForHandle:(FMFHandle *)arg1 withError:(NSError *)arg2;
- (void)didReceiveLocation:(FMFLocation *)arg1;
@end

@protocol FMFSessionDelegateInternal <FMFSessionDelegate>

@optional
- (void)networkReachabilityUpdated:(_Bool)arg1;
- (void)removeAllFriendLocationsFromMap;
@end

@protocol FMFXPCClientProtocol <NSObject>
- (oneway void)didReceiveServerError:(NSError *)arg1;
- (oneway void)didUpdateLocations:(NSSet *)arg1;
- (oneway void)didUpdateFollowing:(NSSet *)arg1;
- (oneway void)didUpdateFollowers:(NSSet *)arg1;
- (oneway void)sendMappingPacket:(NSString *)arg1 toHandle:(FMFHandle *)arg2;
- (oneway void)didUpdateActiveDeviceList:(NSSet *)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(FMFDevice *)arg1;
- (oneway void)didUpdatePendingOffersForHandles:(NSSet *)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(_Bool)arg1;
- (void)didReceiveFriendshipRequest:(FMFFriendshipRequest *)arg1;
- (oneway void)didStopFollowingHandle:(FMFHandle *)arg1;
- (oneway void)didStartFollowingHandle:(FMFHandle *)arg1;
- (oneway void)didRemoveFollowerHandle:(FMFHandle *)arg1;
- (oneway void)didAddFollowerHandle:(FMFHandle *)arg1;
- (oneway void)failedToGetLocationForHandle:(FMFHandle *)arg1 error:(NSError *)arg2;
- (oneway void)setLocations:(NSSet *)arg1;
@end

@protocol FMFXPCInternalClientProtocol <FMFXPCClientProtocol>
- (oneway void)networkReachabilityUpdated:(_Bool)arg1;
- (oneway void)modelDidLoad;
@end

@protocol FMFXPCInternalServerProtocol <FMFXPCServerProtocol>
- (oneway void)_setClientBundleId:(NSString *)arg1;
- (oneway void)_iCloudAccountNameWithCompletion:(void (^)(NSString *))arg1;
@end

@protocol FMFXPCServerProtocol <NSObject>
- (oneway void)setExpiredInitTimestamp;
- (oneway void)sessionWasCreatedRefresh;
- (oneway void)forceRefresh;
- (oneway void)getAllLocations:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)invalidateMappingPackets:(NSSet *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)importMappingPacket:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)stopSharingMyLocationToFamilyMemberWithDSID:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)startSharingMyLocationToFamilyMemberWithDSID:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)getHandlesWithPendingOffers:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)getOfferExpirationForHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(NSDate *, NSError *))arg4;
- (oneway void)getPendingFriendshipRequestsWithCompletion:(void (^)(NSSet *, NSSet *, NSError *))arg1;
- (oneway void)stopSharingMyLocationWithHandles:(NSSet *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (oneway void)stopSharingMyLocationWithHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (oneway void)declineFriendshipRequest:(FMFFriendshipRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)approveFriendshipRequest:(FMFFriendshipRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)sendFriendshipInviteToHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 endDate:(NSDate *)arg4 completion:(void (^)(NSString *, NSError *))arg5;
- (oneway void)extendFriendshipOfferToHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 endDate:(NSDate *)arg4 completion:(void (^)(NSString *, NSError *))arg5;
- (oneway void)sendFriendshipOfferToHandles:(NSSet *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 endDate:(NSDate *)arg4 completion:(void (^)(NSString *, NSError *))arg5;
- (oneway void)removeDevice:(FMFDevice *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)getAbRecordIdForHandle:(FMFHandle *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (oneway void)getPrettyNameForHandle:(FMFHandle *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (oneway void)isNetworkReachable:(void (^)(_Bool, NSError *))arg1;
- (oneway void)allDevices:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)deviceSharingLocation:(void (^)(FMFDevice *, NSError *))arg1;
- (oneway void)getPendingMappingPacketsForHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 completion:(void (^)(NSArray *, NSArray *, NSError *))arg3;
- (oneway void)canShareLocationWithHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(_Bool, NSString *, NSError *))arg4;
- (oneway void)setActiveDevice:(FMFDevice *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)isMyLocationEnabled:(void (^)(_Bool, NSError *))arg1;
- (oneway void)setHideMyLocationEnabled:(_Bool)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)canGetLocationForHandle:(FMFHandle *)arg1 groupId:(NSString *)arg2 callerId:(FMFHandle *)arg3 completion:(void (^)(_Bool, NSString *, NSError *))arg4;
- (oneway void)getHandlesSharingMyLocationWithGroupId:(NSString *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (oneway void)getHandlesSharingMyLocation:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)getHandlesSharingLocationsWithMeWithGroupId:(NSString *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (oneway void)getHandlesSharingLocationsWithMe:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)locationForHandle:(FMFHandle *)arg1 completion:(void (^)(FMFLocation *, NSString *, NSError *))arg2;
- (oneway void)getCurrentTrackedHandles:(void (^)(NSSet *, NSError *))arg1;
- (oneway void)removeFriendHandles:(NSSet *)arg1;
- (oneway void)addFriendHandles:(NSSet *)arg1;
- (oneway void)fetchLocationForHandles:(NSSet *)arg1 callerId:(FMFHandle *)arg2 priority:(long long)arg3 completion:(void (^)(NSError *, NSString *))arg4;
- (oneway void)fetchLocationForHandle:(FMFHandle *)arg1 callerId:(FMFHandle *)arg2 priority:(long long)arg3 completion:(void (^)(NSError *, NSString *))arg4;
@end

@protocol MKAnnotation <NSObject>
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;

@optional
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (void)setCoordinate:(CDStruct_c3b9c2ee)arg1;
@end

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol NSSecureCoding <NSCoding>
+ (_Bool)supportsSecureCoding;
@end

@interface FMFAppAccountInfo : NSObject
{
    NSString *_dsid;
    NSString *_username;
    NSString *_appServerHost;
    NSString *_appAuthToken;
    long long _appAuthTokenStatus;
    NSString *_legacyDsid;
    NSString *_legacyUsername;
}

@property(retain, nonatomic) NSString *legacyUsername; // @synthesize legacyUsername=_legacyUsername;
@property(retain, nonatomic) NSString *legacyDsid; // @synthesize legacyDsid=_legacyDsid;
@property(nonatomic) long long appAuthTokenStatus; // @synthesize appAuthTokenStatus=_appAuthTokenStatus;
@property(retain, nonatomic) NSString *appAuthToken; // @synthesize appAuthToken=_appAuthToken;
@property(retain, nonatomic) NSString *appServerHost; // @synthesize appServerHost=_appServerHost;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
- (void).cxx_destruct;
- (id)description;

@end

@interface FMFAppSession : NSObject
{
}

+ (id)sharedInstance;
- (id)_fmfAppAccountFromAOSAccount:(id)arg1;
- (void)locationAuthorizationForShareMyLocationWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopListeningForFMFAppPush;
- (void)startListeningForFMFAppPushInEnvironment:(id)arg1 withMessageHandler:(CDUnknownBlockType)arg2 tokenHandler:(CDUnknownBlockType)arg3;
- (void)renewFMFAccountCredentialsWithCompletion:(CDUnknownBlockType)arg1;
- (void)retrieveFMFAccountWithCompletion:(CDUnknownBlockType)arg1;
- (id)thisDeviceId;

@end

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isActiveDevice;
    _Bool _isThisDevice;
    NSString *_deviceId;
    NSString *_deviceName;
}

+ (_Bool)supportsSecureCoding;
+ (id)deviceWithId:(id)arg1 name:(id)arg2 isActive:(_Bool)arg3 isThisDevice:(_Bool)arg4;
@property(nonatomic) _Bool isThisDevice; // @synthesize isThisDevice=_isThisDevice;
@property(nonatomic) _Bool isActiveDevice; // @synthesize isActiveDevice=_isActiveDevice;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)updateIsActive:(_Bool)arg1 isThisDevice:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

@interface FMFFriendshipRequest : NSObject <NSCopying, NSSecureCoding>
{
    long long _requestType;
    FMFHandle *_fromHandle;
    NSSet *_toHandles;
    NSDate *_endDate;
    NSString *_groupId;
    NSString *_requestId;
}

+ (_Bool)supportsSecureCoding;
+ (id)friendshipRequestToHandles:(id)arg1 fromHandle:(id)arg2 withType:(long long)arg3 groupId:(id)arg4 withEndDate:(id)arg5;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSSet *toHandles; // @synthesize toHandles=_toHandles;
@property(retain, nonatomic) FMFHandle *fromHandle; // @synthesize fromHandle=_fromHandle;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFromHandle:(id)arg1 toHandle:(id)arg2 ofType:(long long)arg3 groupId:(id)arg4 endDate:(id)arg5 requestId:(id)arg6;

@end

@interface FMFHandle : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _pending;
    NSString *_identifier;
    NSString *_serverId;
    NSArray *_aliasServerIds;
    NSArray *_invitationSentToIds;
    NSDictionary *_expiresByGroupId;
    NSString *_hashedDSID;
    NSNumber *_trackingTimestamp;
    NSString *__prettyNameInternal;
}

+ (_Bool)supportsSecureCoding;
+ (id)handleWithId:(id)arg1 serverId:(id)arg2;
+ (id)handleWithId:(id)arg1;
@property(copy, nonatomic) NSString *_prettyNameInternal; // @synthesize _prettyNameInternal=__prettyNameInternal;
@property(copy, nonatomic) NSNumber *trackingTimestamp; // @synthesize trackingTimestamp=_trackingTimestamp;
@property(nonatomic, getter=isPending) _Bool pending; // @synthesize pending=_pending;
@property(copy, nonatomic) NSString *hashedDSID; // @synthesize hashedDSID=_hashedDSID;
@property(copy, nonatomic) NSDictionary *expiresByGroupId; // @synthesize expiresByGroupId=_expiresByGroupId;
@property(copy, nonatomic) NSArray *invitationSentToIds; // @synthesize invitationSentToIds=_invitationSentToIds;
@property(copy, nonatomic) NSArray *aliasServerIds; // @synthesize aliasServerIds=_aliasServerIds;
@property(copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)recordId;
- (id)prettyName;
- (long long)prettyNameCompare:(id)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isSharingThroughGroupId:(id)arg1;
- (void)setICloudId:(id)arg1;
- (void)addressBookDidChange;

@end

__attribute__((visibility("hidden")))
@interface FMFLabelUtil : NSObject
{
}

+ (_Bool)isDefaultLabel:(id)arg1;
+ (id)defaultLabelKeys;

@end

@interface FMFLocation : NSObject <NSCopying, NSSecureCoding, MKAnnotation>
{
    _Bool _locatingInProgress;
    FMFHandle *_handle;
    CLLocation *_location;
    NSString *_longAddress;
    NSDate *_timestamp;
    NSString *_label;
    NSString *_shortAddressString;
    double _maxLocatingInterval;
    double _TTL;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double TTL; // @synthesize TTL=_TTL;
@property(nonatomic) double maxLocatingInterval; // @synthesize maxLocatingInterval=_maxLocatingInterval;
@property(copy, nonatomic) NSString *shortAddressString; // @synthesize shortAddressString=_shortAddressString;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *longAddress; // @synthesize longAddress=_longAddress;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) FMFHandle *handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (_Bool)isValid;
- (void)updateHandle:(id)arg1;
- (void)updateLocation:(id)arg1;
- (void)resetLocateInProgressTimer;
- (void)resetLocateInProgress:(id)arg1;
@property(nonatomic, getter=isLocatingInProgress) _Bool locatingInProgress; // @synthesize locatingInProgress=_locatingInProgress;
- (id)locationShortAddressWithAgeIncludeLocating;
- (id)locationShortAddressWithAge;
- (id)locationAge;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *shortAddress;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithDictionary:(id)arg1 forHandle:(id)arg2 maxLocatingInterval:(double)arg3 TTL:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol>
{
    _Bool _isModelInitialized;
    id <FMFSessionDelegate> _delegate;
    NSOperationQueue *_delegateQueue;
    NSMutableSet *_internalHandles;
    NSXPCConnection *_connection;
    NSSet *_cachedGetHandlesSharingLocationsWithMe;
    NSSet *_cachedGetHandlesFollowingMyLocation;
    NSMutableDictionary *_cachedLocationForHandleByHandle;
    NSMutableDictionary *_cachedOfferExpirationForHandleByHandle;
    NSMutableDictionary *_cachedCanShareLocationWithHandleByHandle;
}

+ (_Bool)FMFRestricted;
+ (_Bool)FMFAllowed;
+ (id)sharedInstance;
@property(nonatomic) _Bool isModelInitialized; // @synthesize isModelInitialized=_isModelInitialized;
@property(retain, nonatomic) NSMutableDictionary *cachedCanShareLocationWithHandleByHandle; // @synthesize cachedCanShareLocationWithHandleByHandle=_cachedCanShareLocationWithHandleByHandle;
@property(retain, nonatomic) NSMutableDictionary *cachedOfferExpirationForHandleByHandle; // @synthesize cachedOfferExpirationForHandleByHandle=_cachedOfferExpirationForHandleByHandle;
@property(retain, nonatomic) NSMutableDictionary *cachedLocationForHandleByHandle; // @synthesize cachedLocationForHandleByHandle=_cachedLocationForHandleByHandle;
@property(retain, nonatomic) NSSet *cachedGetHandlesFollowingMyLocation; // @synthesize cachedGetHandlesFollowingMyLocation=_cachedGetHandlesFollowingMyLocation;
@property(retain, nonatomic) NSSet *cachedGetHandlesSharingLocationsWithMe; // @synthesize cachedGetHandlesSharingLocationsWithMe=_cachedGetHandlesSharingLocationsWithMe;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableSet *internalHandles; // @synthesize internalHandles=_internalHandles;
@property(retain, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <FMFSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3;
- (void)receivedMappingPacket:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeHandles:(id)arg1;
- (void)addHandles:(id)arg1;
@property(copy, nonatomic) NSSet *handles;
- (oneway void)modelDidLoad;
- (oneway void)networkReachabilityUpdated:(_Bool)arg1;
- (oneway void)didUpdateLocations:(id)arg1;
- (oneway void)didUpdateFollowing:(id)arg1;
- (oneway void)didUpdateFollowers:(id)arg1;
- (oneway void)didReceiveServerError:(id)arg1;
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;
- (void)didReceiveFriendshipRequest:(id)arg1;
- (oneway void)didUpdateActiveDeviceList:(id)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(_Bool)arg1;
- (oneway void)didStopFollowingHandle:(id)arg1;
- (oneway void)didStartFollowingHandle:(id)arg1;
- (oneway void)didRemoveFollowerHandle:(id)arg1;
- (oneway void)didAddFollowerHandle:(id)arg1;
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;
- (oneway void)setLocations:(id)arg1;
- (void)sessionWasCreatedRefresh;
- (void)forceRefresh;
- (_Bool)hasModelInitialized;
- (void)invalidate;
- (void)dispatchOnDelegateQueue:(CDUnknownBlockType)arg1;
- (id)serverProxy;
- (void)invalidateWithError:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)locatingInProgressChanged:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)init;
- (_Bool)shouldHandleErrorInFWK:(id)arg1;
- (_Bool)is5XXError:(id)arg1;
- (void)setExpiredInitTimestamp;
- (id)verifyRestrictionsAndShowDialogIfRequired;
- (void)getAbRecordIdForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPrettyNameForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllDevices:(CDUnknownBlockType)arg1;
- (id)getAllDevices;
- (id)getActiveLocationSharingDevice;
- (oneway void)_iCloudAccountNameWithCompletion:(CDUnknownBlockType)arg1;
- (void)locationForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getHandlesWithPendingOffers:(CDUnknownBlockType)arg1;
- (void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)isMyLocationEnabled:(CDUnknownBlockType)arg1;
- (void)setHideMyLocationEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHandlesFollowingMyLocation:(CDUnknownBlockType)arg1;
- (void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHandlesSharingLocationsWithMe:(CDUnknownBlockType)arg1;
- (void)setActiveDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getActiveLocationSharingDevice:(CDUnknownBlockType)arg1;
- (void)getAllLocations:(CDUnknownBlockType)arg1;
- (void)getPendingFriendshipRequestsWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)declineFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)approveFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_checkAndDisplayMeDeviceSwitchAlert;
- (void)_sendAutoSwitchMeDevice;
- (void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)stopSharingMyLocationToFamilyMemberWithDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startSharingMyLocationToFamilyMemberWithDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadDataIfNotLoaded;
- (id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (id)cachedLocationForHandle:(id)arg1;
- (_Bool)isMyLocationEnabled;
- (id)getHandlesWithPendingOffers;
- (_Bool)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (_Bool)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (id)getHandlesFollowingMyLocation;
- (id)getHandlesSharingLocationsWithMe;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

__attribute__((visibility("hidden")))
@interface FMFSessionDataManager : NSObject
{
    NSSet *_followers;
    NSSet *_following;
    NSSet *_locations;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSSet *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSSet *following; // @synthesize following=_following;
@property(retain, nonatomic) NSSet *followers; // @synthesize followers=_followers;
- (void).cxx_destruct;
- (void *)_loadAddressBook;
- (void)_registerABCallbacks;
- (void)abChanged:(id)arg1;
- (id)offerExpirationForHandle:(id)arg1 groupId:(id)arg2;
- (id)locationForHandle:(id)arg1;
- (id)followingForHandle:(id)arg1;
- (id)followerForHandle:(id)arg1;

@end

@interface FMFSynchronizer : NSObject
{
    _Bool _timeoutOccurred;
    double _timeout;
    NSObject<OS_dispatch_semaphore> *_sem;
    NSString *_info;
}

@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool timeoutOccurred; // @synthesize timeoutOccurred=_timeoutOccurred;
- (void).cxx_destruct;
- (id)loggingID;
- (void)wait;
- (void)signal;
- (id)initWithDescription:(id)arg1 andTimeout:(double)arg2;

@end

@interface FMFSystemLog : NSObject
{
}

+ (id)sharedInstance;
- (void)writeLevel:(unsigned int)arg1 facility:(id)arg2 path:(const char *)arg3 line:(unsigned int)arg4 function:(const char *)arg5 format:(id)arg6;
- (void)stopLoggingToFile;
- (void)startLoggingToFile:(id)arg1;
- (_Bool)isLoggingToFile;

@end

@interface FMFUserNotification : NSObject
{
}

+ (void)showGenericErrorAlert;
+ (void)show5XXDuringStopOfferAlert;
+ (void)show5XXDuringStartOfferAlert;
+ (void)showNetworkOfflineDuringStopOfferAlert;
+ (void)showNetworkOfflineDuringOfferAlert;
+ (void)upselliCloudAlert;
+ (void)notLoggedIntoiCloudAlert;
+ (void)showForbiddenRegionAlert;
+ (void)showShareMyLocationiCloudSettingsOffAlert;
+ (void)showShareMyLocationSystemServiceOffAlert;
+ (void)showLocationServicesSwitchOffAlert;
+ (void)showMaxFollowersLimitReachedAlert;
+ (void)showRestrictedAlert;
+ (void)showActiveDeviceChangedAlert;
+ (_Bool)displayiCloudUserNotificationWithTitleLocKey:(id)arg1 messageLocKey:(id)arg2 switchString:(id)arg3 doNotSwitch:(id)arg4;
+ (void)displayUserNotificationWithTitleLocKey:(id)arg1 messageLocKey:(id)arg2;
+ (_Bool)showSwitchMeDeviceAlertUsingCurrentMeDeviceName:(id)arg1;
+ (_Bool)shouldDisplayAlerts;

@end

__attribute__((visibility("hidden")))
@interface FMF_iphoneos_SystemLog : FMFSystemLog
{
}

- (void)writeLevel:(unsigned int)arg1 facility:(id)arg2 path:(const char *)arg3 line:(unsigned int)arg4 function:(const char *)arg5 format:(id)arg6;
- (void)stopLoggingToFile;
- (void)startLoggingToFile:(id)arg1;
- (_Bool)isLoggingToFile;
- (id)init;

@end

