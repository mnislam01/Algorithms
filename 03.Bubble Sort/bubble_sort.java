class bubble_sort{
    public static void main(String args[]){
        int array[] = {23,7,2,8,43,6,78,2,7890,7,235346,23};

        System.out.println("Before sorting...");
        ShowArray(array);
        array = BubbleSort(array);
        System.out.println("After sorting...");
        ShowArray(array);
    }

    public static int[] BubbleSort(int list_of_numbers[]){
        int i, j, temp;
        for (i=0; i < list_of_numbers.length; i++){
            for(j=0; j < list_of_numbers.length - i - 1; j++){
                if (list_of_numbers[j] > list_of_numbers[j+1]) {
                    temp = list_of_numbers[j];
                    list_of_numbers[j] = list_of_numbers[j+1];
                    list_of_numbers[j+1] = temp;
                }
            }
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