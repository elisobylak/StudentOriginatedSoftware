def horner(coeffs, x):
	acc = 0
	for c in reversed(coeffs):
		acc = acc * x + c
		print acc
	print acc
 
horner( (4, 4, 4, 4), 2)