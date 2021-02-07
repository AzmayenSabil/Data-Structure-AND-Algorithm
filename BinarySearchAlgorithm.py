def binarysearch(arr, low, high, x):
    mid = (low + high)//2

    if high >= low:
        if arr[mid] == x:
            return 1
        elif x < arr[mid]:
            return binarysearch(arr, low, mid-1, x)
        elif x > arr[mid]:
            return binarysearch(arr, mid+1, high, x)
    else:
        return -1


arrayList = []

n = int(input("number of elements ? >> "))

for i in range(0,n):
    element = input()
    arrayList.append(element)

x = input("enter the number you are looking for: ")

arrayList.sort()

result = binarysearch(arrayList, 0, n, x)

if result != -1:
    print("Number found")
else:
    print("number not found")