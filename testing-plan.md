# Testing Plan

## Phase 1 — Bench tests
- Verify controller startup and serial logging.
- Read each sensor separately.
- Check power draw and component temperatures.
- Test vibration/audio outputs without wearing the glove.

## Phase 2 — Feature tests
- Define a small, documented gesture vocabulary.
- Collect consented examples across multiple sessions and users.
- Separate training and test data by session/person where possible to reduce leakage.
- Report per-gesture precision/recall and confusion matrix, not accuracy alone.
- Test proximity and liquid detection at documented distances/conditions.
- Evaluate false alarms, missed detections, latency, and battery runtime.

## Phase 3 — Usability and accessibility
- Involve intended users and relevant accessibility specialists.
- Test comfort, fit, ease of putting on/off, alert clarity, and fatigue.
- Provide a manual fallback and clear indication when the system is unavailable.
- Obtain informed consent for any recordings; minimise and protect collected data.

## Safety boundary
This is an experimental prototype. Do not use it as the sole means of detecting hazards, navigating, or communicating in emergencies. Document limitations and stop testing if the device causes discomfort or unsafe behaviour.
