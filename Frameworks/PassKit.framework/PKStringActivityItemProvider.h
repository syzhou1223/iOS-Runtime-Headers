/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKStringActivityItemProvider : UIActivityItemProvider {
    NSString *_passOrganizationName;
    NSString *_passSharingString;
    PKPassView *_passView;
}

- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2;
- (void)dealloc;
- (id)initWithPass:(id)arg1 andPassView:(id)arg2;
- (id)item;

@end