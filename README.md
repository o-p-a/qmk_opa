# qmk_opa

Open-source keyboard firmware for Atmel AVR and Arm USB families
(Personal userspace)

## Compile

``` bash
docker compose build
docker compose up -d
docker compose exec app /bin/bash
docker compose down
```

``` bash
# Corne Chocolate v4.1
qmk compile -kb opa/crkbd/rev4_1/standard -km vial
# HHKB Alt
qmk compile -kb opa/hhkb/jp -km vial
# Teihai70H
qmk compile -kb opa/teihai70h -km vial

chmod 666 *.{hex,bin,uf2}
mv *.{hex,bin,uf2} keyboards
```

↓

``` bash
/vial-qmk/keyboards/opa/make_all
```

## Flash

### HHKB Alt

``` bash
brew install dfu-programmer
dfu-programmer atmega32u4 erase
dfu-programmer atmega32u4 flash opa_hhkb_jp_vial.hex
dfu-programmer atmega32u4 launch
```

## Reference

### [Corne Chocolate v4.1](https://github.com/foostan/crkbd)

For QMK, VIA, VIAL : https://github.com/foostan/kbd_firmware.git

### [HHKB JP Alt](https://geekhack.org/index.php?topic=71517.0)

For TMK : https://github.com/tmk/tmk_keyboard.git
For QMK : https://github.com/qmk/qmk_firmware.git
For VIA : https://github.com/the-via/qmk_userspace_via.git
VIA layout JSON : https://github.com/the-via/keyboards.git

### [Teihai70H](https://blog.alglab.net/archives/teihai70h-buildguide/)

For QMK, VIA : https://github.com/alg0002/qmk_firmware.git
For VIAL : https://github.com/alg0002/vial-qmk.git
