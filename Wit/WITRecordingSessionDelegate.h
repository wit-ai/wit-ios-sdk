//
//  WITRecordingSessionDelegate.h
//  Wit
//
//  Created by patrick on 29/04/16.
//  Copyright (c) Facebook, Inc. and its affiliates. All Rights Reserved.
//

#import <Foundation/Foundation.h>

@protocol WITRecordingSessionDelegate <NSObject>

-(void)recordingSessionActivityDetectorStarted;
-(void)recordingSessionDidStartRecording;
-(void)recordingSessionDidStopRecording;
- (void) recordingSessionReceivedError: (NSError *) error;
-(void)recordingSessionDidRecognizePreviewText: (NSString *) previewText final: (BOOL) isFinal;
-(void)recordingSessionDidDetectSpeech;
-(void)recordingSessionRecorderGotChunk:(NSData *)chunk;
-(void)recordingSessionGotResponse:(NSDictionary *)resp customData:(id)customData error:(NSError *)err sender:(id) sender;

-(void)stop;

@end
