def main():
	n=10

	matrix=[[j+1]*n for j in range(n)]

	x=y=0
	for i in range(n)[::-2]:
	    x+=i*4;y+=1

	    for j in range(i):
	        matrix[j+y-1][y]=x+j

	    matrix[y-1][y:y+i]=range(x,x-i,-1)

	    R=matrix[n-y][y-1]+1
	    matrix[n-y][y:n-y+1]=range(R,R+i)

	    for j in range(y,y+i-1):
	        matrix[j][n-y]=matrix[j-1][n-y]-1

	for row in matrix:
	    print ' '.join(`r`.zfill(len(`n*n`)) for r in row)

main()