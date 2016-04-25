#ceasar cipher

def main():

	message = raw_input("Please enter a message to encrypt: ")
	shift = int(raw_input("Please enter the ceasar shift you'd like to apply: "))
	print message

	encrypt(shift, message)
	#print ' '

	#encrypt(3, 'hello darrow')
	#print ' '
	#decrypt(3, 'khoor gduurz')


def encrypt(shift, message):
	for i in message:
		if i != ' ':
			newLetter = chr(ord(i)+shift)
			print newLetter,


def decrypt(shift, message):
	for i in message:
		if i != ' ':
			oldLetter = chr(ord(i)-shift)
			print oldLetter,

main()