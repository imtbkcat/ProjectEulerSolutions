# Project Eular Problem 4
# https://projecteuler.net/problem=4

def isPalindrome(s):
	for i in range((len(s) + 1) // 2):
		if s[i] != s[len(s) - 1 - i]:
			return False
	return True

res = 0
for i in range(100, 1000):
	for j in range(100, 1000):
		prd = i * j
		if isPalindrome(str(prd)):
			res = max(res, prd)
print(res)