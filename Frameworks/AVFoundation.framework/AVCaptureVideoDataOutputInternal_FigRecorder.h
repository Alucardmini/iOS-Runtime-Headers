/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReferencingDelegateStorage, NSDictionary;

@interface AVCaptureVideoDataOutputInternal_FigRecorder : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    BOOL alwaysDiscardsLateVideoFrames;
    BOOL delegateRespondsToDidDropSBufCallback;
    BOOL delegateRespondsToDidOutputSBufCallback;
    AVWeakReferencingDelegateStorage *delegateStorage;
    } deprecatedMinFrameDuration;
    NSDictionary *videoSettings;
}

- (void)dealloc;
- (id)init;

@end