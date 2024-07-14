# Project Eular Problem 7
# https://projecteuler.net/problem=7

lim = 1000000
prime = []
is_prime = [True for i in range(0, lim)]

for i in range(2, lim):
	if is_prime[i]:
		prime.append(i);
		if i * i < lim:
			for j in range(i * i, lim, i):
				is_prime[j] = False
print(prime[10000])