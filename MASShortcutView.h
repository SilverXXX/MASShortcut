@class MASShortcut;

typedef enum {
    MASShortcutViewAppearanceDefault = 0,
    MASShortcutViewAppearanceTexturedRect
} MASShortcutViewAppearance;

@interface MASShortcutView : NSView

@property (nonatomic, strong) MASShortcut *shortcutValue;
@property (nonatomic, getter = isRecording) BOOL recording;
@property (nonatomic, getter = isEnabled) BOOL enabled;
@property (nonatomic, copy) void (^shortcutValueChange)(MASShortcutView *sender);
@property (nonatomic) MASShortcutViewAppearance viewAppearance;

@end
