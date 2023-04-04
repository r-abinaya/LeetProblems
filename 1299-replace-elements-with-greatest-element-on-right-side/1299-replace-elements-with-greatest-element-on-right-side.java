class Solution {
    public int[] replaceElements(int[] arr) {
        for(int i= arr.length-2; i >= 0; i--)
            arr[i] = Math.max(arr[i],arr[i+1]);

        for(int i= 0; i < arr.length-1; i++)
           arr[i]=arr[i+1];
       
        arr[arr.length-1]= -1;
        return arr;   
    }
}