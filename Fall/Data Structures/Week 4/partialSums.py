def partialSums(n):
	partialSum = 0
	for i in range(i, n, 1): 
		partialSum += i * i * i
		print partialSum

partialSums(100)