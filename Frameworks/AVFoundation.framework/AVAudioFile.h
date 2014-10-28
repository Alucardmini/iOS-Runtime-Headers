/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class AVAudioFormat, NSURL;

@interface AVAudioFile : NSObject {
    void *_impl;
}

@property(readonly) AVAudioFormat * fileFormat;
@property long long framePosition;
@property(readonly) long long length;
@property(readonly) AVAudioFormat * processingFormat;
@property(readonly) NSURL * url;

- (void)dealloc;
- (id)fileFormat;
- (long long)framePosition;
- (id)initForReading:(id)arg1 commonFormat:(unsigned int)arg2 interleaved:(BOOL)arg3 error:(id*)arg4;
- (id)initForReading:(id)arg1 error:(id*)arg2;
- (id)initForWriting:(id)arg1 settings:(id)arg2 commonFormat:(unsigned int)arg3 interleaved:(BOOL)arg4 error:(id*)arg5;
- (id)initForWriting:(id)arg1 settings:(id)arg2 error:(id*)arg3;
- (id)initSecondaryReader:(id)arg1 format:(id)arg2 error:(id*)arg3;
- (long long)length;
- (id)processingFormat;
- (BOOL)readIntoBuffer:(id)arg1 error:(id*)arg2;
- (BOOL)readIntoBuffer:(id)arg1 frameCount:(unsigned int)arg2 error:(id*)arg3;
- (void)setFramePosition:(long long)arg1;
- (id)url;
- (BOOL)writeFromBuffer:(id)arg1 error:(id*)arg2;

@end