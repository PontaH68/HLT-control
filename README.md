# HLT-control
Control of HLT tun (Beer brewing equipment).

Part1 - Water level / voltage supply control

Purpose:
To avoid operating the electrical heater when it is not submerged.
To avoid over filling of the tun.

Description:
Using two float switches to enable/disable the supply voltage to the electrical heater.
FloatSwitchMin measures the minimum water level, i.e. when there is enough water covering the electrical heater to safely turn it on.
FloatSwitchMax measures the maximum water level in the tun.
