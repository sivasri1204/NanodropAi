# System Architecture

## Proposed modules
- **Input:** flex/gesture sensors, proximity sensor, liquid-level sensor, and optional texture-sensing element.
- **Controller:** ESP32 reads sensors, filters measurements, and runs basic control logic.
- **Inference:** gesture classifier runs on a supported host or embedded target depending on model size and hardware.
- **Output:** speech through a connected phone/speaker and vibration/audio alerts.
- **Power:** protected battery and suitable voltage regulation.

## Data flow
```text
Sensors -> ESP32 -> Filtering / feature extraction
                     |-> proximity / liquid / texture rules -> alert
                     |-> gesture features -> ML classifier -> gesture label -> speech
```

## Design notes
- Confirm the exact sensor models and voltage levels before wiring.
- Keep sensor readings and user recordings local where practical.
- Provide a way to silence or pause alerts.
- Separate experimental features so one failing sensor does not disable all functions.
- Do not market proximity alerts as a replacement for a cane, guide dog, or established mobility aid.
