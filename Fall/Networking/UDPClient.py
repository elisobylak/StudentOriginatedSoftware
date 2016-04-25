import socket
serverName = 'ada.evergreen.edu'
serverPort = 64000
## constructor takes 2 arguments
s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
message = 'Wheres the HW?'
s.sendto(message, (serverName, serverPort))
## get a response
reply, serverAddr = s.recvfrom(2048)
print(reply)

