BadUSB Cable with Hub
===========================

廉价但强大，把CH552e和SL2.1s集成在了数据线非常小的空间中，执行载荷时的同时数据线能够正常使用，包括充电、传数据和ADB。

A cheap but powerful CH55x BadUSB Cable with SL2.1s USBHUB, which makes the cable usable while executing payload.

**声明：本项目仅用于研究目的。一切使用本项目的行为后果自负。**

#### DISCLAIMER: This repository is for research purposes only. I take NO responsibility and/or liability for your actions. 

## 制造 / Produce

**PCB**

![PCB](C:\workshop\BadUSB_Cable\image\PCB.png)

如果嫌麻烦的话可以直接下单 https://oshwhub.com/monkeylord/badusb-cable  厚度选0.8mm

PCB Thickness 0.8mm

如果像我一样实在不擅长手工贴SSOP元件的话，可以SMT只贴正面。

手工贴背面就简单多了，如果不需要重新编程功能的话可以不贴R1和SW1，只贴晶振就行了。

If you are not good at soldering SSOP, you can use SMT for top. All SSOP is on top.

If you don't need reflashing, you can just ignore `R1` and `SW1`, and you only need to solder a crystal oscillator.

**数据线 / Cable**

1. USB长壳 / USB Shell Long
2. 单头四芯USB线 / Single End USB Cable
3. 任意直插式元件（只用引脚） / Pins (Legs for other compenent)

焊接如下 / solder like this：

![Shell_Step1](.\image\Shell_Step1.jpg)

![Shell_Step2](.\image\Shell_Step2.jpg)

## 载荷 / Payload

**要求 / Requirement**

1. CH55xDuino : https://github.com/jobitjoseph/CH55XDuino
2. WCHISPTool : https://www.wch.cn/downloads/WCHISPTool_Setup_exe.html

**编程 / Programming**

参见HIDKeyboardDemo

See HIDKeyboardDemo

**烧录 / Flashing**

1. 使用arduino IDE直接烧录 / Just use arduino IDE

2. 使用WCHISPTool烧录编译得到的hex / Or use WCHISPTool

注意：载荷烧录完成后会立即执行，因此建议载荷中包含足够的延时。

Note: payload will execute right after flashing, so a long delay in payload is advised.

**重新烧录 / Reflashing**

如果在ch552e上电时上拉P3.6，可以重新进入首次烧录的Bootloader，从而重新通过USB烧录。

可以按住SW1的同时插入，然后松开SW1，就可以进入Bootloader了。

If P3.6 is pulled up when boot, ch552e will run into bootloader, which allow USB flashing like first time flashing.

So, press SW1 when plug in, and then release SW1, then you can flashing it like first time flashing.

你可能需要镊子帮忙才能做到，因为SW1确实有点小。

You may need some tools like tweezer, for SW1 is really small.

## 致谢 / Acknowledge

https://github.com/joelsernamoreno/BadUSB-Cable for inspiration

https://github.com/jobitjoseph/CH55XDuino for arduino IDE environment