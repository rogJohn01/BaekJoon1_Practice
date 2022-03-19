ex = input().split('-')
ret = 0 
for i in ex[0].split('+'):
	ret +=int(i)
for i in ex[1:]:
	for j in i.split('+'):
		ret -= int(j)

print(ret)