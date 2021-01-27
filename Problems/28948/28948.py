# https://quera.ir/problemset/contest/28948/
# Solved By: Ahmadrezadl
s = input()
ans = ""

for i in s:
    if i == '=':
        if len(ans) > 0:
            ans = ans[:-1]
    else:
        ans += i

print(ans)