/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBrowser : NSObject {
    <HAPKeyStore> *_keyStore;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, retain) <HAPKeyStore> *keyStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)keyStore;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setKeyStore:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;
- (id)workQueue;

@end