'''
This uses a TCP client to request a webpage from Google
'''


import socket

target_host = "0.0.0.0"
target_port = 64000

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

client.connect((target_host, target_port))

client.send("WHOOOOOOOOOOOOOOOOO")

response = client.recv(4096)

print(response)
