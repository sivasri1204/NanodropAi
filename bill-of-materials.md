# Preliminary Bill of Materials

This is a planning list, not a final purchase specification. Select parts only after confirming availability, compatibility, and budget.

| Item | Purpose | Notes |
|---|---|---|
| ESP32 development board | Main controller and wireless connectivity | Confirm GPIO and voltage requirements |
| Flex sensors or IMU sensors | Capture finger/hand movement | Choice depends on gesture set |
| Proximity/distance sensor | Detect nearby objects | Range and performance vary by sensor |
| Liquid-level/moisture sensor | Detect liquid presence or level in a defined setup | Must be calibrated for the target use |
| Vibration motor | Tactile alerts | Use a suitable driver circuit |
| Small speaker or phone audio link | Voice/audio output | Output path depends on prototype architecture |
| Battery and regulator | Portable power | Include charging and protection appropriate to the battery |
| Glove, wiring, connectors, enclosure | Wearable integration | Avoid sharp edges, hot surfaces, and exposed conductors |

## Before ordering
1. Define the first prototype use case.
2. Check each sensor datasheet and ESP32 pin/voltage compatibility.
3. Prepare a wiring diagram and power budget.
4. Test modules on a breadboard before wearable integration.
