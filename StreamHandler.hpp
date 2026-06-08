#pragma once
#include <string>

class StreamHandler {
public:
    static bool CheckClientVersion() { return true; }
    static void EnableOfflineMode();
    static void BypassAdServer();
    
private:
    static inline int currentBitrate = 320;
    static inline bool persistentStorage = true;
};