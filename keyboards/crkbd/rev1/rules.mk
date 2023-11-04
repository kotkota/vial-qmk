# MOUSEKEY_ENABLE     = yes     # Mouse keys
RGBLIGHT_ENABLE			= no      # Enable WS2812 RGB underlight.
VIA_ENABLE					= yes     # Enable VIA
VIAL_ENABLE					= yes     # Enable VIAL
# QMK_SETTINGS				= no
COMBO_ENABLE				= yes
AUTO_SHIFT_ENABLE		= yes
# UNICODE_ENABLE      = yes

OLED_ENABLE = no
# OLED_DRIVER = SSD1306
# WPM_ENABLE = no

#SPACE SAVING
AUDIO_ENABLE				= no
MUSIC_ENABLE				= no
CONSOLE_ENABLE			= no
COMMAND_ENABLE			= no
SPACE_CADET_ENABLE	= no
# EXTRAKEY_ENABLE			= no
MAGIC_ENABLE				= no
GRAVE_ESC_ENABLE		= no 
BLUETOOTH_ENABLE		= no		# Enable Bluetooth
BACKLIGHT_ENABLE		= no		# Enable keyboard backlight functionality
TAP_DANCE_ENABLE		= yes
KEY_OVERRIDE_ENABLE	= yes
EXTRAFLAGS					+= -flto

# VIAL_INSECURE			= yes     # Enable VIAL