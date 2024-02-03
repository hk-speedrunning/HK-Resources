[AutoHotKey](https://www.autohotkey.com/) is a scripting language that allows quickly remapping inputs with minimal effort.

After installation, you can run a `.ahk` script. The AHK logo will appear in the bottom right

Documentation can be found [here](https://www.autohotkey.com/docs/v2/), but below is a basic guide for what you'll probably need to understand an AHK script.

- `SendMode Input` drastically improves speed and reliability - put it at the top of any script you create.
- The `#SingleInstance Force` directive can be put at the top of a script to prevent multiple instances of the same script running at once (which is most likely not desired).
- The `::` operator translates the string on the left to the string on the right. Keep in mind that for run legality, you may only use single keycodes on each side (eg: `LButton::h`).
- Surrounding a set of rules with the `#IfWinActive` directive only executes the encapsulated rules if the defined window is in focus. Typically you should use `ahk_exe executable_name.exe` to define the window you want.
    - eg: 
    ```ahk
        #IfWinActive ahk_exe hollow_knight.exe
        LButton::h
        #IfWinActive
    ```
