n,k = map(int,input().split())
ans = []
if n == 1:
    ans = [i for i in range(10)]
else:
    def DFS(N, num):
        # base case
        if N == 0:
            return ans.append(num)

        tail_digit = num % 10
        # using set() to avoid duplicates when K == 0
        next_digits = set([tail_digit + k, tail_digit - k])

        for next_digit in next_digits:
            if 0 <= next_digit < 10:
                new_num = num * 10 + next_digit
                DFS(N-1, new_num)

    for num in range(1, 10):
        DFS(n-1, num)
#ans = sorted(list(ans))
print(*sorted(list(ans)), sep = ",")
    


