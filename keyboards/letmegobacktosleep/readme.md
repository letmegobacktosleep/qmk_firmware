It compiles, but untested. 

Based off minipad 3k fork by [Jake Stewart](https://github.com/RephlexZero)

* Keyboard Maintainer: [letmegobacktosleep](https://github.com/letmegobacktosleep)
* Hardware Supported: *Hall Effect Keypad running on STM32F072, with 16MHz Crystal*
* Hardware Availability: *https://github.com/RephlexZero/MoonPad* erm no it isn't there that one is rp2040 baseed

Make example for this keyboard (after setting up your build environment):

    make letmegobacktosleep/8k:default

Flashing example for this keyboard:

    make letmegobacktosleep/8k:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and
the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start
with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the top left key and plug in the keyboard.
* **Physical reset button**: Briefly hold the button on the back of the PCB whilst plugging in the keyboard.
* **Keycode in layout**: There is no key mapped to `QK_BOOT` in the pre-created keymaps, but you may assign this key in any keymaps you create.
