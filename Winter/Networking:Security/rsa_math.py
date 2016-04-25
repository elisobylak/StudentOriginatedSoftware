# rsa_math.py
# Zack Startzman
# A program to help calculate RSA stuff
import sys

def composite_test(n):
	
	if n <= 1:
		return True
	elif n <= 3:
		return False
	elif n % 2 == 0 or n % 3 == 0:
		return True
	i = 5
	while i*i <= n:
		if n % i == 0 or n % (i+2) == 0:
			return True
		i = i+6
	return False

def getP():
	print("Input a prime number to use for p. \n")
	p = int(float(input("p: ")))
	if composite_test(p):
		print(p, "is not prime.\n")
		getP()
	return p

def getQ():
	print("Input a prime number to use for q. \n")
	q = int(float(input("q: ")))
	if composite_test(q):
		print("\n", q, "is not prime.\n")
		getQ()
	return q

def getE():
	print("Input a value to use for e. \n")
	e = int(float(input("e: ")))
	return e

def getD():
	d = 0
	while (d*e)%np != 1:
		d += 1
	return d

p = getP()
q = getQ()
e = getE()

n = p * q
np = (p-1)*(q-1)

d = getD()

print("\nThe value for n is: ", n,"\n")
print("\nThe value for n' is: ", np,"\n")
print("\nThe value for d is: ", d,"\n")
print("Format for a public key is: (e, n)\nYour public key is: (", e,",", n,")\n")
print("Format for a private key is: (d, n)\nYour private key is: (", d,",",n,")\n")
cryption = input("Would you like to (e)ncrypt, (d)ecrypt, or (n)either?")

letsEncrypt = "e"
letsDecrypt = "d"


if letsEncrypt == cryption:
	print("\nLet's encrypt stuff!")
	m = int(float(input("Input m: ")))
	c = (p**e)%n
	print("\nYour encrypted message is: ", c)

elif letsDecrypt == cryption:
	print("\nLet's decrypt stuff!")
	m = int(float(input("Input m: ")))
	c = (m**d)%n
	print("\nYour decrypted message is: ", c)


print("\nRSA is so cool! Goodbye!")