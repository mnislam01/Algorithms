public class linear_search {
    public static void main(String args[]){

        int NumberList[] = {10,20,30,40,50,60,70,80,90,100};
        int find = 20;

        if(linear_search(NumberList, NumberList.length, find)){
            System.out.println("Found");
        }
        else{
            System.out.println("Not found");
        }

    }


    public static boolean linear_search(int List[], int Size, int var){

        boolean result = false;
        for(int i = 0; i < Size; i++){
            if(List[i] == var){
                System.out.println(var + " at " + i + " Matched");
                result = true;
            }
            else {
                System.out.println(var + " at " + i + " Not matched");
            }
        }
        return result;

    }
}
