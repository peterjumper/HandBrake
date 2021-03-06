/*  HBPreviewViewController.h

This file is part of the HandBrake source code.
Homepage: <http://handbrake.fr/>.
It may be used under the terms of the GNU General Public License. */

#import <Cocoa/Cocoa.h>

@class HBPreviewGenerator;
@class HBPreviewController;

NS_ASSUME_NONNULL_BEGIN

@interface HBPreviewViewController : NSViewController

@property (nonatomic, readwrite, weak, nullable) HBPreviewGenerator *generator;

- (void)update;

@end

NS_ASSUME_NONNULL_END

