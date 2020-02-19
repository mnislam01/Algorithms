class insertion_sort{
    public static void main(String args[]){
        int array[] = {23,7,2,8,43,6,78,2,7890,7,235346,23};

        System.out.println("Before sorting...");
        ShowArray(array);
        array = InsersionSort(array);
        System.out.println("After sorting...");
        ShowArray(array);
    }

    public static int[] InsersionSort(int list_of_numbers[]){
        int i, j, key;
        for (i=1; i < list_of_numbers.length; i++){
            key = list_of_numbers[i];
            j = i - 1;
            while(j >= 0 && list_of_numbers[j] > key){
                list_of_numbers[j+1] = list_of_numbers[j];
                j--;
            }
            list_of_numbers[j+1] = key;
        }
        return list_of_numbers;
    }

    public static void ShowArray(int arr[]){
        for (int i=0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}