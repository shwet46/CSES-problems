mat = [[1,2,9,10,25],[4,3,8,11,24],[5,6,7,12,23],[16,15,14,13,22],[17,18,19,20,21]]

t = int(input())

for _ in range(t):
    y, x = map(int, input().split())
    print(mat[y-1][x-1])