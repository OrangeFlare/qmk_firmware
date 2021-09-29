# BINEPAD BNR1

![BINEPAD BNR1](https://imgur.com/gjLADOK.jpg)

A 3% macropad.

* Keyboard Maintainer: [BINEPAD]
* Hardware Supported: BNR1 PCB (ATmega32U4)
* Hardware Availability: [Interest Check](https://www.binepad.com/bnR1)

Make example for this keyboard (after setting up your build environment):

    make binepad/bnr1:default

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## OrangeFlare's Modifications

This repo was cloned from [ashishdhimanad/qmk_firmware](https://github.com/ashishdhimanad/qmk_firmware)

My modifications turn the dial into a fully featured media control dial
* Clockwise: Next Track
* Counter-Clockwise: Prev Track
* Press: Play/Pause
* Press & Hold + Clockwise: F20
* Press & Hold + Counter-Clockwise: F19

The F20 and F19 keys can be bound as macros. For example, in foobar2000 I bound these 2 keys to seek forwards and backwards by 5 seconds

Most of my code is copied and modified from [this page](https://beta.docs.qmk.fm/using-qmk/software-features/feature_tap_dance) in case anyone else wants to learn
Another [great resource](https://thomasbaart.nl/2018/12/13/qmk-basics-tap-dance/) for learning tap dances
