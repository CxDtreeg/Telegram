#import <UIKit/UIKit.h>

#import "TGBotContextResult.h"

@class TGConversationAssociatedInputPanelPallete;

@interface TGGenericContextResultCellContent : UIView

@property (nonatomic, strong, readonly) TGBotContextResult *result;

@end

@interface TGGenericContextResultCell : UITableViewCell

@property (nonatomic, copy) void (^preview)(TGBotContextResult *result);

@property (nonatomic, strong) TGConversationAssociatedInputPanelPallete *pallete;
@property (nonatomic, strong) TGBotContextResult *result;

- (TGGenericContextResultCellContent *)_takeContent;
- (void)_putContent:(TGGenericContextResultCellContent *)content;
- (bool)hasContent;

@end
