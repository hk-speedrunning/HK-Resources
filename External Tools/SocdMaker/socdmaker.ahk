#SingleInstance,  Force

Loop {
    ToolTip % GetPressedKeys()
    Sleep 100
}

GetPressedKeys() {
    delimiter := "`n"
    Loop 256
        if (keyname := GetKeyName(Format("vk{:x}", A_Index-1))) != "" && GetKeyState(keyname) {
            pressed_keys .= keyname "   0x" Format("{:X}", A_Index-1)delimiter
        }
    return SubStr(pressed_keys, 1, -StrLen(delimiter))
}