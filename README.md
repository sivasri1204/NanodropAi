# NanoDrop AI
### A Multimodal Smart Glove for Assistive Communication and Sensory Awareness

NanoDrop AI is a proposed assistive-technology prototype intended to support people with hearing, speech, and visual impairments. The concept combines a wearable glove, sensors, an ESP32 microcontroller, and machine-learning modules.

## Core goals
- Convert a defined set of Indian Sign Language (ISL) gestures into voice output.
- Provide audio and/or vibration feedback for supported sensory alerts.
- Explore texture classification, liquid-level detection, and nearby-object detection.
- Keep the design affordable, modular, and user-centred.

> **Prototype status:** This repository is a starter scaffold, not a validated medical or safety device. Gesture coverage, sensor accuracy, response time, and accessibility must be tested before making performance claims. Do not rely on it as the sole method for navigation, hazard detection, or emergency communication.

## Proposed system
1. Sensors collect glove and environment measurements.
2. ESP32 reads sensors and handles basic device logic.
3. A gesture-classification module maps supported gestures to labels.
4. Output logic triggers speech, vibration, or other feedback.
5. Testing with intended users guides revisions.

## Repository layout
```text
NanoDrop-AI/
├── README.md
├── LICENSE
├── .gitignore
├── docs/
│   ├── architecture.md
│   ├── bill-of-materials.md
│   ├── testing-plan.md
│   └── sdg-alignment.md
├── firmware/
│   └── NanoDropAI.ino
├── ml/
│   └── README.md
├── app/
│   └── README.md
└── media/
    └── README.md
```

## Getting started
1. Review `docs/bill-of-materials.md` and choose compatible sensors.
2. Install Arduino IDE and the ESP32 board package.
3. Open `firmware/NanoDropAI.ino`, select your ESP32 board and port, then upload.
4. Check serial output before connecting actuators.
5. Implement and evaluate each sensor module independently.
6. Add a gesture dataset and train/evaluate a classifier before enabling gesture-to-speech.

## Suggested initial prototype
Start with one or two gestures, one proximity sensor, and one vibration motor. Add features incrementally. Use a transistor/MOSFET driver for motors where required; do not drive high-current loads directly from GPIO pins.

## Contributions
Use issues to track bugs and feature ideas. Submit pull requests with wiring details, test conditions, and observed results. Never include private user data or identifiable sign-language recordings without informed consent.

## License
This project is released under the MIT License; see `LICENSE`.
