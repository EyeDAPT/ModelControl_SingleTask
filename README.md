# Unity VR Experiment: Model-Controlled Sustained Attention

An advanced experimental framework for investigating sustained attention and cognitive load using an active closed-loop system. In this version, the task difficulty is dynamically adjusted by an external machine learning model, utilizing real-time physiological and eye-tracking data synchronized via **Lab Streaming Layer (LSL)**.

## 🚀 Overview

The experiment utilizes a single-task sustained attention paradigm. Unlike self-regulated versions, the difficulty (cube spawn rate) is controlled by the system's response to the participant's current cognitive state. An external model analyzes LSL data streams and sends difficulty predictions back to Unity to optimize the challenge level in real-time.



## 🛠 Features

* **AI-Driven Difficulty:** Task challenge scales automatically based on model predictions rather than manual participant input.
* **Sustained Attention Task:** High-frequency interaction loop with Yellow and Blue stimuli designed to elicit measurable cognitive load.
* **LSL Bi-Directional Sync:** Streams performance and physiological markers out while simultaneously receiving model-generated difficulty adjustments.
* **Automated Data Buffering:** Clears eye-tracking and behavioral buffers between levels to ensure clean data segments for model training and inference.

---

## 📊 Data Streaming (LSL)

The experiment relies on synchronized high-resolution data outlets for real-time inference:

| Stream Name | Channels | Content |
| :--- | :---: | :--- |
| `CubeSpawnData` | 4 | $[X, Y, Z, \text{ID}]$ for every object instantiated. |
| `SpawnRate` | 1 | **Model-Adjusted** task frequency in Hz. |
| `CubeDestroyScore` | 1 | Real-time cumulative performance score. |
| `ModelPredictions` | 4 | $[\text{Predicted Difficulty, Conf}_A, \text{Conf}_B, \text{Conf}_C]$. |

---

## ⚙️ Configuration & Setup

### 1. Requirements
* **Unity:** 2020.3+ recommended.
* **Dependencies:** LSL4Unity, TextMeshPro, and a compatible VR SDK.
* **External Model:** A Python-based (or similar) inference engine capable of consuming LSL streams and sending predictions to the `ReceiveServerPrediction` hook.

### 2. Inspector Assignment
Ensure the following references are assigned to the `core_audio` (or `core_model_control`) component:
* **Prefabs:** `Cube Yellow Prefab` and `Cube Blue Prefab`.
* **Data Handling:** Reference to `DataSender` script for pushing aggregated level data to the inference server.
* **UI:** `Game Time Text` (TextMeshPro) for participant feedback on remaining trial time.

---

## 🕹 Experimental Protocol

1.  **Level Initialization:** Eye-tracking buffers are cleared. The system awaits the first difficulty prediction or starts at a default `baseDifficulty`.
2.  **Sustained Attention Task (60s):**
    * Yellow and Blue cubes spawn at the frequency dictated by the model.
    * Target coordinates and interaction scores are streamed out to the inference engine.
3.  **Inference Phase:**
    * At the end of a trial, the system calls `SendLevelData()` to transmit summarized performance and physiological features.
4.  **Model-Controlled Adjustment:**
    * The system listens for the `ReceiveServerPrediction` callback.
    * The `baseDifficulty` is automatically updated based on the `predictedDifficulty` value and its associated confidence scores.
5.  **Rest (10s):** A mandatory break period allows the participant to recover while the system stabilizes the next difficulty level.

---

## 📝 Key Variables

* `maxLevels`: Set to `8` by default to match experimental session lengths.
* `baseDifficulty`: Controlled by the `ReceiveServerPrediction` function (Clamped $1.0$ – $5.0$).
* `inBreakTime`: Boolean flag used to pause spawning while the model processes trial data.

---

## 💾 Citation & License
This project is intended for research purposes. Please cite the following publication when referring to the real-time model-controlled experiments:

> D. Szczepaniak, M. Harvey, and F. Deligianni, "Your Eyes Controlled the Game: Real-Time Cognitive Training Adaptation based on Eye-Tracking and Physiological Data in Virtual Reality," *arXiv preprint arXiv:2512.17882*, 2026. [https://arxiv.org/abs/2512.17882](https://arxiv.org/abs/2512.17882)
