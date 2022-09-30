#!/usr/bin/python3
num = range(10, 100)
product = [i * j for i in num for j in num if i < j]
palin = [x for x in product if str(x) == str(x)[::-1]]
print(max(palin), end="")
