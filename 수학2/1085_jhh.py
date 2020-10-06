x_points = []
y_points = []
for _ in range(3):
    x, y = list(map(int, input().split()))
    x_points.append(x)
    y_points.append(y)

point_x = x_points[2] if x_points[0] == x_points[1] else (x_points[1] if x_points[0] == x_points[2] else x_points[0])
point_y = y_points[2] if y_points[0] == y_points[1] else (y_points[1] if y_points[0] == y_points[2] else y_points[0])
print('{} {}'.format(point_x, point_y))