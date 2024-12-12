#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*Pattern 1:-
    ****
    ****
    ****
    ****
    */
    /*
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "*";
        }
        cout << endl;
    }
    */




    /*Pattern 2:-
     *
     **
     ***
     ****
     *****
     */
    /*
    for(int i = 0; i < 5; i++){
      for(int j = 0; j <= i; j++){
          cout << "*";
      }
      cout << endl;
    }
    */




    /*Pattern 3:-
    1
    1 2
    1 2 3
    1 2 3 4
    */
    /*
    for(int i  = 1; i < 5; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    */




    /*Pattern 4:-hint(in each line it is printing row number)
    1
    22
    333
    4444
    */
    /*
    for(int i = 1; i < 5; i++){
        for(int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
    */




    /*
    Pattern 5:-Hint(total row - row number + 1)
    *****
    ****
    ***
    **
    *
    */
    /*
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5-i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    */




    /*Pattern 6:-Hint(total row - row number + 1)
    12345
    1234
    123
    12
    1
    */
    /*
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5-i+1; j++){
            cout << j;
        }
        cout << endl;
    }
    */




    /*Pattern 7:-(Hint - space,star,space)
     *
     ***
     *****
     *******
     *********
     */
    /*
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5-i-1; j++){
            cout << " ";
        }
        for(int k = 0; k < 2*i+1; k++){
            cout << "*";
        }
        for(int j = 0; j < 5-i-1; j++){
            cout << " ";
        }
        cout << endl;
        }
    */




    /*Pattern 8:-
     ***********
     *********
     *******
     *****
     ***
     *
     */
    /*
    for(int  i = 0; i <= 5; i++){
        //total row + i - total row = spaces
        for(int j = 0; j <= 5+i-5; j++){
            cout << " ";
        }
        //(total row - i)*2 + 1 = stars
        for(int k = 0; k < (5-i)*2+1; k++){
            cout << "*";
        }
        for(int j = 0; j < 5+i-5; j++){
            cout << " ";
        }
        cout << endl;
    }
    */



    /*Pattern 9:-Hint(Combine pattern 7 and 8)
     *
     ***
     *****
     *******
     *********
     *********
     *******
     *****
     ***
     *
     */
    /*
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5-i-1; j++){
            cout << " ";
        }
        for(int k = 0; k < 2*i+1; k++){
            cout << "*";
        }
        for(int j = 0; j < 5-i-1; j++){
            cout << " ";
        }
        cout << endl;
        }
    for(int  i = 1; i <= 5; i++){
        //total row + i - total row = spaces
        for(int j = 1; j < 5+i-5; j++){
            cout << " ";
        }
        //(total row - i)*2 + 1 = stars
        for(int k = 0; k < (5-i)*2+1; k++){
            cout << "*";
        }
        for(int j = 1; j < 5+i-5; j++){
            cout << " ";
        }
        cout << endl;
    }
    */



   /*Pattern 10:-
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
   */
  /*
  for(int i = 0; i < 5; i++){
    for(int j = 0; j <= i; j++){
        cout << "*";
    }
    cout << endl;
  }
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5-i-1; j++){
        cout << "*";
    }
    cout << endl;
  }
  */




    /*Pattern 11:-
    1
    01
    101
    0101
    10101
    */
   /*
   int start = 1;
   for(int i = 1; i <= 5; i++){
    if(i % 2 == 0) start=0;
    else start=1;
    for(int j = 1; j <= i; j++){
        cout << start;
        start = 1-start;
    }
    cout << endl;
   }
   */


  /*Pattern 12:-
  1      1
  12    21
  123  321
  12344321
  */
  /*
  for(int i = 1; i < 5; i++){
    for(int j = 1; j <= i; j++){
        cout << j;
    }
    //(total row*2) - (row number*2) = spaces
    for(int k = 1; k <= (4*2)-(i*2); k++){
        cout << " ";
    }
    for(int j = i; j >= 1; j--){
        cout << j;
    }
    cout << endl;
  }
  */

    /*Pattern 13:-
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    11 12 13 14 15 
    */
    /*
    int num = 1;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout << num++ << " ";
        }
        cout << endl;
    }
    */

}
