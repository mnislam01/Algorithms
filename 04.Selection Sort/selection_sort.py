
def selection_sort(list_of_numbers) -> list():
    """
    :params list_of_numbers: A list type object of integer numbers
    :return []:
    """

    for i in range(len(list_of_numbers)):
        smallest = i
        for j in range(i+1, len(list_of_numbers)):
            if list_of_numbers[j] < list_of_numbers[smallest]:
                smallest = j
        
        if smallest != i:
            temp = list_of_numbers[i]
            list_of_numbers[i] = list_of_numbers[smallest]
            list_of_numbers[smallest] = temp

    return list_of_numbers


if __name__ == "__main__":
    numbers = [23,7,2,8,43,6,78,2,7890,7,235346,23]
    print("Before sorting...")
    print(numbers)
    selection_sort(list_of_numbers=numbers)
    print("After sorting...")
    print(numbers)
