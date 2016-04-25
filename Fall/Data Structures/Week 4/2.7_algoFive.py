def algoFive(num):
	sum = 0
	for i in xrange(0,num):
		for j in xrange(0, i*i):
			for k in xrange(0, j):
				sum+=1
	print sum

algoFive(60)
