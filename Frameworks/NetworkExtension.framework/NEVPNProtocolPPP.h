/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNProtocolPPP : NEVPNProtocol {
    NEDNSSettings *_DNSSettings;
    NEIPv4Settings *_IPv4Settings;
    NEIPv6Settings *_IPv6Settings;
    int _authenticationMethod;
    BOOL _verboseLoggingEnabled;
}

@property (copy) NEDNSSettings *DNSSettings;
@property (copy) NEIPv4Settings *IPv4Settings;
@property (copy) NEIPv6Settings *IPv6Settings;
@property int authenticationMethod;
@property BOOL verboseLoggingEnabled;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DNSSettings;
- (id)IPv4Settings;
- (id)IPv6Settings;
- (int)authenticationMethod;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1;
- (void)setAuthenticationMethod:(int)arg1;
- (void)setDNSSettings:(id)arg1;
- (void)setIPv4Settings:(id)arg1;
- (void)setIPv6Settings:(id)arg1;
- (BOOL)setServiceProtocolsInService:(struct __SCNetworkService { }*)arg1;
- (void)setVerboseLoggingEnabled:(BOOL)arg1;
- (BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService { }*)arg1;
- (BOOL)verboseLoggingEnabled;

@end