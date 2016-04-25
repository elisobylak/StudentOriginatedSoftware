while x=1; do /System/Library/PrivateFrameworks/Apple80211.framework/Versions/Current/Resources/airport -I | grep CtlRSSI; sleep 0.5; done


wifiCall = os.popen(['/System/Library/PrivateFrameworks/Apple80211.framework/Versions/Current/Resources/airport', '| grep CtlRSSI', '/usr/sbin/airport', '-I'])