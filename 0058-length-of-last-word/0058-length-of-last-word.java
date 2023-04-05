class Solution {
    public int lengthOfLastWord(String s) {
        int len=0;
        int tail=s.length()-1;
        while(s.charAt(tail)==' ' &&  tail>=0)
            tail--;
        while( tail>=0 && s.charAt(tail)!=' ' ){
            len++;
            tail--;
        }
        return len;
    }
}