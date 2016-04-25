def algoSix(num):
	sum = 0
	for i in xrange(1,num):
		for j in xrange(1, i*i):
			if(j % i == 0):
				for k in xrange(0, j):
					sum+=1
	print sum

algoSix(200)
