#8*8 체스 판 만들어야 함
#(m-7) * (n-7)

import sys

N, M = map(int, sys.stdin.readline().split())

board = []
white_first = []
black_first = []

for _ in range(N):
    row = sys.stdin.readline().replace("\n", "")
    board.append([i for i in row])

initial_color = board[0][0]

# 흰색으로 시작하는 체스판을 만들 경우
for index, row in enumerate(board):
    painting = []
    if index % 2 == 0:
        current_color = "W"
    else:
        current_color = "B"

    for value in row:
        if value == current_color:
            painting.append(0)
        else:
            painting.append(1)

        if current_color == "W":
            current_color = "B"
        else:
            current_color = "W"
    white_first.append(painting)

# 검은색으로 시작하는 체스판을 만들 경우
for index, row in enumerate(board):
    painting = []
    if index % 2 == 0:
        current_color = "B"
    else:
        current_color = "W"

    for value in row:
        if value == current_color:
            painting.append(0)
        else:
            painting.append(1)

        if current_color == "W":
            current_color = "B"
        else:
            current_color = "W"
    black_first.append(painting)

# 최솟값을 초기화 할 때, 보드의 최대 크기인 50*50 = 2500으로 한다.
min_count = 2500
for i in range(N - 7):
    rows = white_first[i:i + 8]
    for j in range(M - 7):
        paint = 0
        for row in rows:
            paint += sum(row[j:j + 8])
        if paint < min_count: min_count = paint

for i in range(N - 7):
    rows = black_first[i:i + 8]
    for j in range(M - 7):
        paint = 0
        for row in rows:
            paint += sum(row[j:j + 8])
        if paint < min_count: min_count = paint

print(min_count)