#include <windows.h>
#include <stdio.h>
#include <ctype.h>
#pragma comment(lib,"user32.lib")

LRESULT CALLBACK LowLevelMouseProc(int nCode, WPARAM wParam, LPARAM lParam) {
    MSLLHOOKSTRUCT* mInput = (MSLLHOOKSTRUCT*)lParam;

    // We ignore injected events so we don't mess with the inputs
    // we inject ourselves with SendInput
    if (nCode != HC_ACTION || mInput->flags & LLMHF_INJECTED) {
        return CallNextHookEx(NULL, nCode, wParam, lParam);
    }

    INPUT input;
    input.type = INPUT_KEYBOARD;
	
    if (wParam == WM_LBUTTONDOWN) {
        input.ki = (KEYBDINPUT){0x48, 0, 0, 0, 0};
        SendInput(1, &input, sizeof(INPUT));
    }
    else if (wParam == WM_LBUTTONUP) {
		input.ki = (KEYBDINPUT){0x48, 0, KEYEVENTF_KEYUP, 0, 0};
        SendInput(1, &input, sizeof(INPUT));
    }
    else if (wParam == WM_RBUTTONDOWN) {
        input.ki = (KEYBDINPUT){0x54, 0, 0, 0, 0};
        SendInput(1, &input, sizeof(INPUT));
    }
    else if (wParam == WM_RBUTTONUP) {
		input.ki = (KEYBDINPUT){0x54, 0, KEYEVENTF_KEYUP, 0, 0};
        SendInput(1, &input, sizeof(INPUT));
    }
    return CallNextHookEx(NULL, nCode, wParam, lParam);
}

int main() {
    HINSTANCE hInstance = (HINSTANCE)GetModuleHandle(NULL);
    SetWindowsHookEx(WH_MOUSE_LL, LowLevelMouseProc, hInstance, 0);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {}
    return 0;
}
