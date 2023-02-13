MaxN = 10
A = [2, 4, 3, 1, 6, 7, 8, 9, 1, 7]
M = [[-1] * MaxN for i in range(MaxN)]

for i in range(MaxN):
    M[i][i] = i

for i in range(MaxN):
    for j in range(i + 1, MaxN):
        if A[M[i][j - 1]] < A[j]:
            M[i][j] = M[i][j - 1]
        else:
            M[i][j] = j

print(M)
