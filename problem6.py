# Project Eular Problem 6
# https://projecteuler.net/problem=6

a = 0
for i in range(1, 101):
	a += (i * i)
b = (1 + 100) * 100 // 2;
b = b * b
print(abs(a - b))