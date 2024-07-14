# Project Eular Problem 5
# https://projecteuler.net/problem=5
import math

prd = 1
for i in range(2, 21):
	d = math.gcd(prd, i)
	prd = (prd * i) // d
print(prd)
