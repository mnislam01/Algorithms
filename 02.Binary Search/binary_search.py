def binary_search(aList, sizeOfList, aVar):
    found = False
    upper = sizeOfList - 1
    lower = 0
    while(not found):
        middle = (upper+lower) // 2
        if aList[middle] == aVar:
            print("{0} at {1} Matched".format(aVar, middle))
            found = True
        elif aList[middle] > aVar:
            upper = middle - 1
        else:
            lower = middle + 1
    
    return found



if __name__ == "__main__":
    integers = [10,20,30,40,50,60,70,80,90,100]
    find = 70

    if binary_search(integers, len(integers), find):
        print("Found")
    else:
        print("Not Found")
