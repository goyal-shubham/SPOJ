import random

randa = []
randb = []
for i in range(0,20):
    a = random.randint(0,20)
    b = random.randint(0,20)
    randa.append(a)
    randb.append(b)

set_a = set( randa)
set_b = set (randb)
print(set_a)
print(set_b)
result = []
for i in set_a:
    if(i in set_b) == True :
        result.append(i)
print(result)
