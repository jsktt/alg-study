import sys
input = sys.stdin.readline

n = int(input())
A = list(map(int, input().split()))

m = int(input())
numbers = list(map(int, input().split()))

A.sort()

for number in numbers:
    answer = 0
    lt, rt = 0, len(A) - 1

    while lt <= rt:
        mid = (lt + rt) // 2
        
        if number == A[mid]:
            answer = 1
            break
        elif number < A[mid]:
            rt = mid - 1
        else:
            lt = mid + 1

    print(answer)
