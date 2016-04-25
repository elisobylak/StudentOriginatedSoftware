

def main():
	userInput = raw_input(" Enter a String of 1s and 0s:")

	recCA(userInput)

	#print chunks[0]

def ternaryXor(x):
	#rslt = a^b^c
	#print x
	rslt = int(x[0]) ^ int(x[1]) ^ int(x[2])
	print rslt
	#if ((not a and (b ^ c)) or (a and not(b or c)) == False):
	#	print 0
	#elif ((not a and (b ^ c)) or (a and not(b or c)) == True):
	#	print 1

def recCA(n):
	chunks=[n[x:x+3] for x in xrange(0, len(n), 3)]
	print chunks
	ternaryXor(chunks)
	print n

main()