# Gesture ML Module

This folder is reserved for the gesture-recognition pipeline.

## Recommended workflow
1. Define a small initial vocabulary with ISL users/experts.
2. Record sensor features with informed consent and clear labelling.
3. Document sensor placement, sampling rate, and collection conditions.
4. Split data by participant/session where possible.
5. Train a baseline classifier and report per-class precision, recall, F1, and confusion matrix.
6. Test on unseen users and real-world conditions before deployment.
7. Export to a format supported by the selected target (for example, TensorFlow Lite Micro if the model and hardware allow it).

Do not assume that a few hand gestures represent full Indian Sign Language. Sign languages have grammar, regional variation, and context; work with qualified ISL users and experts.
