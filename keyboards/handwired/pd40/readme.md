# pd40

![pd40](https://github.com/peter-dye/pd40-keyboard)

The pd40 is a handwired low-profile ortholinear 40% keyboard. It uses Kailh choc switches and a custom designed 3D printed case. The pd40 also has bluetooth and a sizeable battery making it very portable.

* Keyboard Maintainer: [Peter Dye](https://github.com/peter-dye)
* Hardware Supported: Adafruit Feather 32u4 Bluefruit LE
* Hardware Availability: <https://www.adafruit.com>

Make example for this keyboard (after setting up your build environment):

    make handwired/pd40:default

Flashing example for this keyboard:

    make handwired/pd40:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (the top left key which is Escape by default) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `RESET` if it is available
