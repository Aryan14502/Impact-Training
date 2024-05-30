doors = int(input("Enter a number: "))
ans = 0

for i in range(doors):
    count = 0
    for j in range(i+1):
        if (i+1) % (j+1) == 0:
            count += 1
    if count % 2 != 0:
        ans += 1
print(ans)

