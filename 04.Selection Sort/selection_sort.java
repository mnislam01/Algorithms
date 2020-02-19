class selection_sort{
    public static void main(String args[]){
        int array[] = {23,7,2,8,43,6,78,2,7890,7,235346,23};

        System.out.println("Before sorting...");
        ShowArray(array);
        array = selectionSort(array);
        System.out.println("After sorting...");
        ShowArray(array);
    }

    public static int[] selectionSort(int list_of_numbers[]){
        int i, j, smallest, temp;
        for (i=0; i < list_of_numbers.length; i++){
            smallest = i;
            for(j=i+1; j < list_of_numbers.length; j++){
                if (list_of_numbers[j] < list_of_numbers[smallest]){
                    smallest = j;
                }
            }
            if (smallest != i) {
                temp = list_of_numbers[i];
                list_of_numbers[i] = list_of_numbers[smallest];
                list_of_numbers[smallest] = temp;
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