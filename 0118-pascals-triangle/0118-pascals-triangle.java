class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> result= new ArrayList<List<Integer>>();
        List<Integer> prev=new ArrayList<Integer>();
        prev.add(1);
        result.add(prev);
        for(int i=1;i<numRows;i++)
        {
            List<Integer> next=new ArrayList<Integer>();
            for(int j=0;j<=i;j++)
            {
                if(j==0 ||j==i)
                    next.add(1);
                else
                   next.add(result.get(i-1).get(j-1)+result.get(i-1).get(j));   
            }
            result.add(next);
            prev=next;
        }
        return result;
        
    }
}



 //        if (numRows <=0){
 //            return triangle;
 //        }
 //        for (int i=0; i<numRows; i++){
 //            List<Integer> row =  new ArrayList<Integer>();
 //            for (int j=0; j<i+1; j++){
 //                if (j==0 || j==i){
 //                    row.add(1);
 //                } else {
 //                    row.add(triangle.get(i-1).get(j-1)+triangle.get(i-1).get(j));
 //                }
 //            }
 //            triangle.add(row);
 //        }
 //        return triangle;