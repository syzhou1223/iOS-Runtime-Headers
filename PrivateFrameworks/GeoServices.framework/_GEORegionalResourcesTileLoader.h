/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEORegionalResourcesTileLoader : NSObject {
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOResourceLoader *_resourceLoader;
    GEORegionalResourceTileData *_tile;
}

- (void)cancel;
- (void)dealloc;
- (void)loadResourcesForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 manifestConfiguration:(id)arg2 auditToken:(id)arg3 finished:(id /* block */)arg4 error:(id /* block */)arg5;

@end