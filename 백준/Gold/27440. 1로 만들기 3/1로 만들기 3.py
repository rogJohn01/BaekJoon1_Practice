n = int(input())
q = {}
q['first'], q['last'] = 1, 1
q[1] = [n, 0]
tbl = {}

def popFirst():
    value = q.get(q['first'], None)
    if value is None: 
        return "False"
    del q[q['first']]
    q['first'] += 1
    return value

def push(value):
    q['last'] += 1
    while q.get(q['last'], None) is not None:
        q['last'] += 1
    q[q['last']] = value

while q['first'] <= q['last']:
    list = popFirst()
    k = list[0]
    if k == 3 or k == 2:
        cnt = list[1] + 1
        break
    if k == 1:
        cnt = list[1]
        break
    if k == "False":
        break
    if k % 3 == 0:
        t = k // 3
        if tbl.get(t, None) is None:
            tbl[t] = list[1] + 1
            push([t, list[1] + 1])
    if k % 2 == 0:
        t = k // 2
        if tbl.get(t, None) is None:
            tbl[t] = list[1] + 1
            push([t, list[1] + 1])
    if k >= 4:
        if tbl.get(k - 1, None) is None:
            tbl[k - 1] = list[1] + 1
            push([k - 1, list[1] + 1])

print(cnt)
