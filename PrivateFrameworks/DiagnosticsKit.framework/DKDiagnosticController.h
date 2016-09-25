/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKDiagnosticController : NSObject <DKDiagnostic, DKDiagnostic_Internal, NSExtensionRequestHandling> {
    BOOL  _cancelled;
    DKDiagnosticContext * _context;
    BOOL  _finished;
    NSLock * _finishedLock;
    NSDictionary * _parameters;
    NSDictionary * _predicates;
    DKMutableResult * _result;
    NSDictionary * _specifications;
}

@property (getter=isCancelled, nonatomic, readonly) BOOL cancelled;
@property (nonatomic, retain) DKDiagnosticContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic) BOOL finished;
@property (nonatomic, retain) NSLock *finishedLock;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly) NSDictionary *predicates;
@property (nonatomic, retain) DKMutableResult *result;
@property (nonatomic, readonly) NSDictionary *specifications;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)cancel;
- (id)context;
- (id)finishedLock;
- (id)init;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (id)parameters;
- (id)predicates;
- (id)result;
- (void)setCancelled:(BOOL)arg1;
- (void)setContext:(id)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)setFinishedLock:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setupWithContext:(id)arg1;
- (id)specifications;
- (void)start;

@end