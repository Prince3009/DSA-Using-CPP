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




   /*Pattern 14:-
    A 
    A B 
    A B C 
    A B C D 
    A B C D E 
   */
   /*
   for(int i = 0; i < 5; i++){
    for(char ch = 'A'; ch <= 'A'+i; ch++){
        cout << ch << " ";
    }
    cout << endl;
   }
   */




    /*Pattern 15:-
    A B C D E F 
    G H I J K 
    L M N O 
    P Q R 
    S T 
    U 
    */
   /*
   char ch = 'A';
   for(int i = 0; i <= 5; i++){
    for(int j = 0; j < 5-i+1; j++){
        cout << ch++ << " ";
    }
    cout << endl;
   }
   */




    /*Pattern 16:-
    A B C D E 
    A B C D 
    A B C 
    A B 
    A 
    */
    /*
    for(int i = 1; i <= 5; i++){
     for(char ch = 'A'; ch <= 'A'+5-i; ch++){
        cout << ch << " ";
     }
     cout << endl;
    }
    */




   /*Pattern 17:-
    A 
    B B 
    C C C 
    D D D D 
    E E E E E 
   */
   /*
   for(int i = 0; i < 5; i++){
    char ch = 'A' + i;
    for(int j = 0; j <= i; j++){
        cout << ch << " ";
        
    }
    cout << endl;
   }
   */


  /*Pattern 18:-
    ****A****
    ***ABA***
    **ABCBA**
    *ABCDCBA*
    ABCDEDCBA
  */
  /*
  for(int i = 1; i <= 5; i++){
    for(int j = 0; j < 5-i; j++){
        cout << "*";
    }
    for(char ch = 'A'; ch <= 'A'+i-1; ch++){
        cout << ch ;
    }
    for(char ch = 'A'+i-2; ch >='A' ; ch--){
        cout << ch ;
    }
    for(int j = 0; j < 5-i; j++){
        cout << "*";
    }
    cout << endl;
  }
  */
  



   /*Pattern  19:-
    E
    DE
    CDE
    BCDE
    ABCDE
   */
    /*
    for(int i = 0; i < 5; i++){
        for(char ch ='E'-i; ch <= 'E'; ch++){
            cout << ch ;
        }
        cout << endl;
    }
    */




   /*Pattern 20:-
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********
   */
  /*
  for(int i = 0; i < 5; i++){
    for(int j = 0; j <= 5-i-1; j++){
        cout << "*";
    }
    for(int k = 0; k < i*2; k++){
        cout << " ";
    }
    for(int j = 0; j <= 5-i-1; j++){
        cout << "*";
    }
    cout << endl;
  }
  for(int i = 1; i <= 5; i++){
    for(int j = 1; j <= i; j++){
        cout << "*";
    }
    for(int k = 1; k <= (5*2)-(i*2); k++){
        cout << " ";
    }
    for(int j = 1; j <= i; j++){
        cout << "*";
    }
    cout << endl;
  }
  */




    /*Pattern:- 21
        *        *
        **      **
        ***    ***
        ****  ****
        **********
        ****  ****
        ***    ***
        **      **
        *        *
    */
    /*
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        for(int k = 1; k <= (5*2)-(i*2); k++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 1; i < 5; i++){
        for(int j = 1; j < 5-i+1; j++){
            cout << "*";
        }
        for(int k = 0; k < i*2; k++){
            cout << " ";
        }
        for(int j = 1; j < 5-i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    */


    /*Pattern 22:-
        *****
        *   *
        *   *
        *   *
        *****
    */
   /*
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == 0 || j == 0 || i == 5-1 || j == 5-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
   */




   /*Pattern 23:-

    */
    int n;
    cin >> n;
   for(int i = 0; i < 2*n-1; i++){
    for(int j = 0; j < 2*n-1; j++){
        int top = i;
        int left = j;
        int bottom = 2*n-2-i;
        int right = 2*n-2-j;
        cout << (n - min(min(top, bottom),min(left,right)));
    }
    cout << endl;
   }
}