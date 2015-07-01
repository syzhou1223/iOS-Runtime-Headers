/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface GCMotion : NSObject {
    struct GCQuaternion { 
        double x; 
        double y; 
        double z; 
        double w; 
    } _attitude;
    GCController *_controller;
    struct { 
        double x; 
        double y; 
        double z; 
    } _gravity;
    CMMotionManager *_motionMgr;
    struct { 
        double x; 
        double y; 
        double z; 
    } _rotationRate;
    struct { 
        double x; 
        double y; 
        double z; 
    } _userAcceleration;
    id /* block */ _valueChangedHandler;
}

@property (readonly) struct GCQuaternion { double x1; double x2; double x3; double x4; } attitude;
@property (readonly) GCController *controller;
@property (readonly) struct { double x1; double x2; double x3; } gravity;
@property (readonly) struct { double x1; double x2; double x3; } rotationRate;
@property (readonly) struct { double x1; double x2; double x3; } userAcceleration;
@property (copy) id /* block */ valueChangedHandler;

- (void).cxx_destruct;
- (BOOL)_isUpdatingDeviceMotion;
- (void)_setAttitude:(struct GCQuaternion { double x1; double x2; double x3; double x4; })arg1;
- (void)_setGravity:(struct { double x1; double x2; double x3; })arg1;
- (void)_setRotationRate:(struct { double x1; double x2; double x3; })arg1;
- (void)_setUserAcceleration:(struct { double x1; double x2; double x3; })arg1;
- (void)_startDeviceMotionUpdates;
- (void)_stopDeviceMotionUpdates;
- (struct GCQuaternion { double x1; double x2; double x3; double x4; })attitude;
- (id)controller;
- (struct { double x1; double x2; double x3; })gravity;
- (id)initWithController:(id)arg1;
- (struct { double x1; double x2; double x3; })rotationRate;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (struct { double x1; double x2; double x3; })userAcceleration;
- (id /* block */)valueChangedHandler;

@end