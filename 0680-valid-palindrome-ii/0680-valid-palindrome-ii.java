class Solution {
    public boolean ispalindrome(String s,int i,int j) {
          while(i<j)
          {
                  Character leftc=s.charAt(i);
              Character rytc=s.charAt(j);
              if(leftc!=rytc)
                  return false;
              else{
                  i++;
                  j--;
              }
          }
        return true;
    }
    public boolean validPalindrome(String s) {
        int i=0;
        int j=s.length()-1;
         while(i<j)
          {
             Character leftc=s.charAt(i);
            Character  rytc=s.charAt(j);
              if(leftc!=rytc)
                  return ispalindrome(s,i+1,j) || ispalindrome(s,i,j-1);
              else{
                  i++;
                  j--;
              }
          }
        return true;
    }
}