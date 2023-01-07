/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
       int max=n,min=1;
        while(true){
            int m=(max-min)/2+min;
            int res=guess(m);
            if(res==0)
                return m;
            else if(res==1)
                min=m+1;
            else
                max=m-1;
             
        }
    }
       //  return 0;
    //      int maxNumber = n, minNumber = 1;
    //     while (true) {
    //         int meanNumber = (maxNumber - minNumber) / 2 + minNumber;
    //         // Do NOT use (maxNumber+minNumber)/2 in case of over flow
    //         int res = guess(meanNumber);
    //         if (res == 0) { 
    //             return meanNumber;
    //         } else if (res == 1) {
    //             minNumber = meanNumber + 1;
    //         } else {
    //             maxNumber = meanNumber - 1;
    //         }
    //     }
    // }
};