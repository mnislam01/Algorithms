
def bubble_sort(list_of_numbers) -> list():
    """
    :params list_of_numbers: A list type object of integer numbers
    :return []:
    """
    for i in range(len(list_of_numbers)):
        for j in range(len(list_of_numbers)-i-1):
            if list_of_numbers[j] > list_of_numbers[j+1]:
                temp = list_of_numbers[j]
                list_of_numbers[j] = list_of_numbers[j+1]
                list_of_numbers[j+1] = temp
    return list_of_numbers


if __name__ == "__main__":
    numbers = [23,7,2,8,43,6,78,2,7890,7,235346,23]
    print("Before sorting...")
    print(numbers)
    bubble_sort(list_of_numbers=numbers)
    print("After sorting...")
    print(numbers)
