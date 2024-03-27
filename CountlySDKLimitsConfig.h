// CountlySDKLimitsConfig.h
//
// This code is provided under the MIT License.
//
// Please visit www.count.ly for more information.


#import <Foundation/Foundation.h>

extern const NSUInteger kCountlyMaxKeyLength;
extern const NSUInteger kCountlyMaxValueSize;
extern const NSUInteger kCountlyMaxBreadcrumbCount;
extern const NSUInteger kCountlyMaxSegmentationValues;
extern const NSUInteger kCountlyMaxStackTraceLineLength;
extern const NSUInteger kCountlyMaxStackTraceLinesPerThread;


@interface CountlySDKLimitsConfig : NSObject

- (void)setMaxKeyLength:(int)maxKeyLength;
- (void)setMaxValueSize:(int)maxValueSize;
- (void)setMaxBreadcrumbCount:(int)maxBreadcrumbCount;
- (void)setMaxSegmentationValues:(int)maxSegmentationValues;
- (void)setMaxStackTraceLineLength:(int)maxStackTraceLineLength;
- (void)setMaxStackTraceLinesPerThread:(int)maxStackTraceLinesPerThread;

- (int)getMaxKeyLength;
- (int)getMaxValueSize;
- (int)getMaxBreadcrumbCount;
- (int)getMaxSegmentationValues;
- (int)getMaxStackTraceLineLength;
- (int)getMaxStackTraceLinesPerThread;


@end

