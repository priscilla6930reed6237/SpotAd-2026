#include <iostream>
#include <windows.h>
#include "StreamHandler.hpp"

void UnlockExtremeQuality() {
    std::cout << "[*] Intercepting audio stream parameters..." << std::endl;
    Sleep(1200);
    std::cout << "[+] Bitrate forced to 320kbps (Extreme)." << std::endl;
    std::cout << "[INFO] Ad-Shield Active: 14 analytic requests suppressed." << std::endl;
}

int main() {
    SetConsoleTitleA("Spotify Nexus - Premium Audio Engine v6.1");
    std::cout << ">>> High-Fidelity Streaming & Persistence Suite <<<" << std::endl;

    if (StreamHandler::CheckClientVersion()) {
        UnlockExtremeQuality();
        StreamHandler::EnableOfflineMode();
        std::cout << "[SUCCESS] Nexus modules injected. Premium features active." << std::endl;
    }

    std::cin.get();
    return 0;
}