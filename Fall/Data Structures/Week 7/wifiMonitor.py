import os
import subprocess 

def testFun():
	#os.system('sh wifiStrengthTest.sh')
	wifiCall = []
	wifiCall = os.system('while x=1; do /System/Library/PrivateFrameworks/Apple80211.framework/Versions/Current/Resources/airport -I | grep CtlRSSI; sleep 0.5; done')
	print wifiCall

def testPrint(n):
	n = wifiCall
	print n

testFun()
#testPrint()