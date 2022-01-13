extern SteamNetworkingMessage_t * cppISteamNetworkingUtils_SteamNetworkingUtils004_AllocateMessage(void *, int);
extern ESteamNetworkingAvailability cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRelayNetworkStatus(void *, SteamRelayNetworkStatus_t *);
extern float cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalPingLocation(void *, SteamNetworkPingLocation_t *);
extern int cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeBetweenTwoLocations(void *, const SteamNetworkPingLocation_t *, const SteamNetworkPingLocation_t *);
extern int cppISteamNetworkingUtils_SteamNetworkingUtils004_EstimatePingTimeFromLocalHost(void *, const SteamNetworkPingLocation_t *);
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_ConvertPingLocationToString(void *, const SteamNetworkPingLocation_t *, char *, int);
extern bool cppISteamNetworkingUtils_SteamNetworkingUtils004_ParsePingLocationString(void *, const char *, SteamNetworkPingLocation_t *);
extern bool cppISteamNetworkingUtils_SteamNetworkingUtils004_CheckPingDataUpToDate(void *, float);
extern int cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPingToDataCenter(void *, SteamNetworkingPOPID, SteamNetworkingPOPID *);
extern int cppISteamNetworkingUtils_SteamNetworkingUtils004_GetDirectPingToPOP(void *, SteamNetworkingPOPID);
extern int cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPCount(void *);
extern int cppISteamNetworkingUtils_SteamNetworkingUtils004_GetPOPList(void *, SteamNetworkingPOPID *, int);
extern SteamNetworkingMicroseconds cppISteamNetworkingUtils_SteamNetworkingUtils004_GetLocalTimestamp(void *);
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_SetDebugOutputFunction(void *, ESteamNetworkingSocketsDebugOutputType, FSteamNetworkingSocketsDebugOutput);
extern ESteamNetworkingFakeIPType cppISteamNetworkingUtils_SteamNetworkingUtils004_GetIPv4FakeIPType(void *, uint32);
extern EResult cppISteamNetworkingUtils_SteamNetworkingUtils004_GetRealIdentityForFakeIP(void *, const SteamNetworkingIPAddr *, SteamNetworkingIdentity *);
extern bool cppISteamNetworkingUtils_SteamNetworkingUtils004_SetConfigValue(void *, ESteamNetworkingConfigValue, ESteamNetworkingConfigScope, intptr_t, ESteamNetworkingConfigDataType, const void *);
extern ESteamNetworkingGetConfigValueResult cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValue(void *, ESteamNetworkingConfigValue, ESteamNetworkingConfigScope, intptr_t, ESteamNetworkingConfigDataType *, void *, size_t *);
extern const char * cppISteamNetworkingUtils_SteamNetworkingUtils004_GetConfigValueInfo(void *, ESteamNetworkingConfigValue, ESteamNetworkingConfigDataType *, ESteamNetworkingConfigScope *);
extern ESteamNetworkingConfigValue cppISteamNetworkingUtils_SteamNetworkingUtils004_IterateGenericEditableConfigValues(void *, ESteamNetworkingConfigValue, bool);
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ToString(void *, const SteamNetworkingIPAddr *, char *, size_t, bool);
extern bool cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_ParseString(void *, SteamNetworkingIPAddr *, const char *);
extern ESteamNetworkingFakeIPType cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIPAddr_GetFakeIPType(void *, const SteamNetworkingIPAddr *);
extern void cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ToString(void *, const SteamNetworkingIdentity *, char *, size_t);
extern bool cppISteamNetworkingUtils_SteamNetworkingUtils004_SteamNetworkingIdentity_ParseString(void *, SteamNetworkingIdentity *, const char *);