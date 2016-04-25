import os
import subprocess
import time

def main():
	cmd = "/System/Library/PrivateFrameworks/Apple80211.framework/Versions/Current/Resources/airport -I | grep CtlRSSI"
	while True:
		time.sleep(.5)
		proc = subprocess.check_output(cmd, shell = True)
		string = str(proc).split(":")
		#print string
		print string[1]

		if(string[1] > -50):
			print 'good'
		else:
			print 'bad'
		#elif(string[1] < -55):
		#	print 'bad'

main()