# Project Eular Problem 2
# https://projecteuler.net/problem=2

lim = 4000000
prev, cur, sum = 1, 2, 2
while True:
	next = prev + cur
	if next > lim:
		break
	if next % 2 == 0:
		sum += next
	prev, cur = cur, next
print(sum)