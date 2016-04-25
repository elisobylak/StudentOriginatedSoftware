import random

def testFun():
	print "I'm thinking of a number, 1 to 10"
	answer = random.randint(1,10)
	#print answer
	for x in range(1,11,1):
			guess = input("Guess a number: ")
			if(guess == answer):
				print "you win"
				print "It was: " + str(answer)
				break
			elif(x == 10):
				print "It was: " + str(answer)
				print "game over, try again (or crt-c to quit)"
				testFun()
			elif(guess != answer):
				print "try again"
			print x



testFun()