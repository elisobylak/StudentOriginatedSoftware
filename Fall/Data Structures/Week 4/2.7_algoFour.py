def algoFour(num):
	sum = 0
	for i in xrange(0,num):
		for j in xrange(0, i):
			sum+=1
	print sum

algoFour(4000)
