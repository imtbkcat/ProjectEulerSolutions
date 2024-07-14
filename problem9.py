# Project Eular Problem 8
# https://projecteuler.net/problem=8

prd = 0
for a in range(1, 1001):
	for b in range(a, 1001):
		c = 1000 - a - b
		if c < 0 or c < b:
			continue
		if a * a + b * b == c * c:
			prd = a * b * c
print(prd)
