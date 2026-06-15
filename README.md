This GitHub Repo contains the PCB, Schematics, 3D Models, Case, and etc. needed to build a "Pandapad",
a Macropad or Hackpad that is personalized to my (Im panda !) workflow, with 6 keys, an OLED, and a Rotary encoder
(in normie language thats a dial - the knob thing in old car radios)

To imitate this project you will need :

- my 3D printed case and plate
- A XIAO RP2040 Microcontroller, and a way to power it (usb-c cable)
- 6 switches (hopefully also keycaps lol), a rotary encoder and a 0.91" OLED (the schematics, pcb and 3d models for all of these are in the repo !)
- my PCB (again, this is in the repo !)
- a soldering iron

This project was done using the Hackpad tutorial and resources for the Hack Club event Stardance

I will be using the 6 Keys for :

- My mac hyperkey (Capslock becomes Cmd + Shift + Ctrl + Alt/Options) as an extra key
- Full screenshot
- Section Screenshot
- Copy
- Paste
- Undo

Rotary encoder for volume up/down and press for mute

For now the OLED will show only static text as i dont have a good idea what to display yet.

# CAD model : 

Everything fits together with M3x16mm Screws 

<img width="1122" height="768" alt="image" src="https://github.com/user-attachments/assets/4328a28f-c7e6-4bbe-820c-9606039a7a0a" />

It has 2 seperate 3D printed pieces : The Top plate, and the case body in which the components sit

<img width="1138" height="806" alt="image" src="https://github.com/user-attachments/assets/4112b6d2-f614-4b10-b79a-2f7561d8c00d" />

<img width="806" height="438" alt="image" src="https://github.com/user-attachments/assets/4805262f-b4fa-4ec0-96d2-b5bbd2384e55" />

Made with OnShape

# PCB

This is my PCB : 

<img width="1930" height="1350" alt="image" src="https://github.com/user-attachments/assets/b8ce69d8-60a8-440a-bed0-8143e6ae6d07" />

My schematic : 

<img width="1950" height="1076" alt="image" src="https://github.com/user-attachments/assets/0afd58f1-4faf-486d-a8b3-ce7dde77eac6" />

Both were designed in KiCad

# Firmware :

## Rotary encoder : 
  Volume up/down, mute
## Keys 1 - 6 (in order) : 
  1 : Sends ⌃⌥⇧⌘ (Ctrl+Option+Shift+Cmd) – my Mac’s hyperkey
  2 : Sends hyperkey + 2 → myShottr full screenshot keybind
  3 : Sends hyperkey + 3 → Shottr region screenshot
  4 : ⌘C (Copy)
  5 : ⌘V (Paste)
  6 : ⌘Z (Undo)

# BOM :
  Here should be everything you need to make this macropad :
    - 6 x Cherry MX Switches
    - 6 x DSA Keycaps
    - 1 x 0.91" 128x32 OLED Display
    - 1 x EC11 Rotary Encoder
    - 1 x XIAO RP2040
    - 1 x Case (2 3D printed parts)

