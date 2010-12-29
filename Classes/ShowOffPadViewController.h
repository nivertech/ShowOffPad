//
//  ShowOffPadViewController.h
//  ShowOffPad
//
//  Created by Scott Chacon on 5/5/10.
//  Copyright GitHub 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UITouchyView.h"

@class ShowOffPadPresentController;
@class UIPopoverControllerDelegate;

@interface ShowOffPadViewController : UIViewController {
	IBOutlet UIWebView *webDisplayiPad;
	ShowOffPadPresentController *extDisplay;
	UIButton *nextButton;
	UIButton *prevButton;
	UIButton *footerButton;
	UILabel  *notesArea;
	UILabel  *slideProgress;
	UILabel  *timeElapsed;
	UITextField  *totalTime;
	UIProgressView *slideProgressBar;
	UIProgressView *timeProgress;
	UILabel   *padStatus;
	UISwitch  *maddenToggle;
	UIPopoverController *popoverController;
	UITouchyView *touchyView;
	int counter;
	int basetime;
}

@property(nonatomic,retain) UIWebView *webDisplayiPad;
@property(nonatomic,retain) ShowOffPadPresentController *extDisplay;
@property(nonatomic,retain) UIPopoverController *popoverController;

@property (nonatomic, retain) IBOutlet UIButton *nextButton;
@property (nonatomic, retain) IBOutlet UIButton *prevButton;
@property (nonatomic, retain) IBOutlet UIButton *footerButton;
@property (nonatomic, retain) IBOutlet UILabel  *notesArea;
@property (nonatomic, retain) IBOutlet UILabel  *slideProgress;
@property (nonatomic, retain) IBOutlet UILabel  *timeElapsed;
@property (nonatomic, retain) IBOutlet UITextField  *totalTime;
@property (nonatomic, retain) IBOutlet UIProgressView  *slideProgressBar;
@property (nonatomic, retain) IBOutlet UIProgressView  *timeProgress;
@property (nonatomic, retain) IBOutlet UILabel  *padStatus;
@property (nonatomic, retain) IBOutlet UITouchyView  *touchyView;
@property (nonatomic, retain) IBOutlet UISwitch  *maddenToggle;

@property (nonatomic, retain) IBOutlet UIButton *addNewButton;
@property (nonatomic, retain) IBOutlet UIButton *switchPresoButton;
@property (nonatomic, retain) IBOutlet UIButton *sectionMenuButton;


- (IBAction)doNextButton;
- (IBAction)doPrevButton;
- (IBAction)doFooterButton;
- (IBAction)doResetTimer;
- (IBAction)doToggleMadden:(id) sender;
- (IBAction)clearMadden:(id)sender;

- (IBAction)doAddNewButton;
- (IBAction)doSwitchPresoButton;
- (IBAction)doSectionMenuButton;

- (void)setScreenStatus;
- (void)mirrorMadden;

- (NSString *) sendJs:(NSString *)command;

- (void) updateProgress;
- (void)updateCounter:(NSTimer *)theTimer;

@end

