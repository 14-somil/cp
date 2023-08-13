T = int(input())

while(T!=0):
    n = int(input())
    a = input()
    size = len(a)
    notes = []
    # print(a[1])

    for i in range(size-1):
        b = a[i]+a[i+1]
        check = False

        for j in notes:
            if (b == j):
                check =True
                break

        if (check == False):
            notes.append(b)
                

    print(len(notes))
    T-=1