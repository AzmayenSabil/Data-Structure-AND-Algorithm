def insertionSort(list,n):
    for i in range(1,n):
        value = list[i]
        j = i - 1
        while j >= 0 and value < list[j]:
            list[j+1] = list[j]
            j = j - 1

        list[j+1] = value

    print(list)


list = []
n = int(input("The number of elements ? : "))
for i in range(0, n):
    element = int(input())
    list.append(element)

insertionSort(list,n)