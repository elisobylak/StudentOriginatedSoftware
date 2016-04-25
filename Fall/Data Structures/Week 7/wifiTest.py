#!/usr/bin/python

from appkit import CWInterface

IFACE = 'en0'
NAME  = 'TESCWireless'

interface      = CWInterface.interfaceWithName_(IFACE)
results, error = interface.scanForNetworksWithName_error_(NAME, None)

for result in results:
    print 'SSID:', result.ssid()
    print 'RSSI:', result.rssiValue()