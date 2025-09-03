#include <windows.h>
#include <iostream>

int main() {
    // Open the default camera (index 0)
    HWND hwnd = capCreateCaptureWindow("Camera", WS_POPUP, 0, 0, 640, 480, nullptr, 0);
    if (!hwnd) {
        std::cerr << "Failed to create capture window!" << std::endl;
        return 1;
    }

    // Connect to the camera
    if (!capDriverConnect(hwnd, 0)) {
        std::cerr << "Failed to connect to camera!" << std::endl;
        return 1;
    }

    // Start capturing video
    if (!capPreviewRate(hwnd, 66)) {
        std::cerr << "Failed to set preview rate!" << std::endl;
        return 1;
    }
    capPreview(hwnd, TRUE);

    std::cout << "Camera is now streaming. Press Enter to exit..." << std::endl;
    std::cin.get();

    // Clean up
    capDriverDisconnect(hwnd);
    DestroyWindow(hwnd);

    return 0;
}