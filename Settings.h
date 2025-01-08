#pragma once
#include "Utils.h"

namespace Settings {

namespace Aimbot {
inline bool bEnabled = true;
inline bool bPrediction = false;
inline float FOV = 50.0f;
inline bool bRage = false;
inline bool bSpin = false;
inline bool bVisibleCheck = true;
inline float RageFactor = 8.0f;
inline bool bFocusSquish = false;
inline float yaw = 0.0f; // x
inline float pitch = 0.0f; // y
inline float roll = 0.0f; // z
inline int hotkey = VK_LBUTTON;  // Use int for VK_LBUTTON
};

namespace ESP {
inline bool bName = false;
inline bool bHealth = false;
inline bool bSnapLines = false;
inline bool bHealthBar = false;
inline bool bBox = false;
inline bool bDistance = false;
inline bool bSkeleton = false;
inline bool bChamsEnabled = false;
inline bool bChamsEnemies = false;
inline bool bChamsLocal = false;
};

namespace Exploits {
inline bool bDamage = false;
inline float DamageMultiplier = 0.0f;
inline bool bSpeed = false;
inline float SpeedMultiplier = 0.0f;
inline bool bAmmo = false;
inline float AmmoMultiplier = 0.0f;

};

} // namespace Settings