/*
#include <iostream>
using namespace std;

 int main(){
 int a;
     cout << "Enter value a: ";
    cin >> a;

    if (a>0){
        cout << "A is positive" << endl;
    }
    else {
                if (a==0){
        cout << "A is zero" << endl;
    }
    else {
         cout << "A is negative" << endl;
    }
    }

     cout << "Hello World." << endl;
    int b, c ;

    cout << "Enter value b: ";
    cin >> b;
    cout << "Enter value c: ";
    cin >> c;
   
    if (b>c) {
        cout << "b is bigger" << endl;
    }
    else {
            if (c>b) {
        cout << "c is bigger" << endl;
    }
        else{
            cout << "b is equal to c" << endl;
        }
    }

    int a = 2;
    int b = a+1;
    if((a=3)==b){
        cout <<"one"<< a;
    }
    else{
        cout <<"two"<< a+1;
    }    

    int n;

    cout << "Enter value n: ";
    cin>>n;
    int i = 1;

    int sum = 0;

    while (i <= n)
    {
       // cout << i << " ";
       sum = sum + i; 
        i = i + 1; 
    }
    cout << "Value of sum is:" << sum << endl;

    

    return 0;
 }   
    */

    /*
PRIME not PRIME

#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int i = 2;

    while(i<n){
        if (n%i==0) {
            cout << "Not prime for " << i << endl;
        }
        else{
            cout << "Prime for " << i << endl;
        }
        i = i + 1;
    }
}
   */
  /*  Star patern

 #include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int i = 1;

    while(i<=n){

        int j = 1;
        while (j<=n)
        {
            cout << "* ";
            j = j + 1;
        }
        cout << endl;
         i = i + 1;

    }

}   
    */ 

    /*
#include<iostream>
using namespace std;
int main() {
    
    pattern 1111
              2222
              3333
              4444          
   
    int n;
    cin >> n;
    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << i << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
         */

        /*  pattern
            1 2 3 4 
            1 2 3 4 
            1 2 3 4 
            1 2 3 4        

    int n;
    cout << "Enter value n: ";
    cin >> n;
    int i = 1;

    while(i<=n){
        int j = 1;

        while(j<=n) {
            cout << j << " ";
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }
        */

        /*  pattern -  3 2 1 
                       3 2 1 
                       3 2 1


    int n;
    cout << "Enter value n: ";
    cin >> n;
    int i = 1;

    while(i<=n){
        int j = 1;

        while(j<=n) {
            cout << n - j + 1 << " ";
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    }   
       
    ///////
1 2 3 
4 5 6 
7 8 9 

    int n;
    cout << "Enter value n: ";
    cin >> n;
    int i = 1;
    int count = 1;

    while(i<=n){
        int j = 1;

        while(j<=n) {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }

        cout << endl;
        i = i + 1;
    } 

     */

     /////
    /* pattern - triangle star
    
    int n;
    cout << "Enter value n: ";
    cin >> n;
    int row = 1;

    while(row<=n){
        int col = 1;

        while(col<=row) {
            cout << "*" << " ";
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }
        
             ///////
            number pyramid

#include<iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter value n: ";
    cin >> n;
    int row = 1;

    while(row<=n){
        int col = 1;

        while(col<=row) {
            cout << row << " ";
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }    

}
   

    /////// 
       //progressive number pyramid


#include<iostream>
using namespace std;
int main() {

    int n;
    cout << "Enter value n: ";
    cin >> n;
    int row = 1;
    int count = 1;
  

    while(row<=n){
        int col = 1;

        while(col<=row) {
            cout << count << " ";
            count = count + 1;
            col = col + 1;
        }

        cout << endl;
        row = row + 1;
    }    

}
    //////
    pattern - 1
              2 3
              3 4 5
              4 5 6 7 

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value n: ";
    cin >> n;
    int row = 1;
    while(row<=n){
        int col = 1; int value = row;   //solve without value.
        while(col<=row) {
            cout << value << " ";
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }    
}

///////
pattern -   1
            2 1
            3 2 1
            4 3 2 1

 
       

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value n: ";
    cin >> n;
    int row = 1;
    while(row<=n){
        int col = 1; int value = row;   //solve without value.
        while(col<=row) {
            cout << row - col + 1 << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }    
}


/////
pattern -
    A A A
    B B B
    C C C

    
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value n: ";
    cin >> n;
    int row = 1;
    while(row <= n) { 
        int col = 1;   
        while(col <= n) {
            char ch = 'A' + row - 1;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }    
}


////////
pattern -
    A B C
    A B C
    A B C


#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value n: ";
    cin >> n;
    int row = 1;
    while(row <= n) { 
        int col = 1;   
        while(col <= n) {
            char ch = 'A' + col - 1;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }    
}

/////
pattern
A B C
D E F
G H I


#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value n: ";
    cin >> n;
    int row = 1;        //??? galat aya hai
    while(row <= n) { 
        int col = 1;   
        while(col <= n) {
            char value = 'A';
            cout << value << " ";
            value = value + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }    
}


///////
pattern->
A B C D 
B C D E 
C D E F 
D E F G 
 


#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value n: ";
    cin >> n;
    int row = 1;
    while(row <= n) { 
        int col = 1;   
        while(col <= n) {
            char ch = 'A' +row + col - 2 ;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }    
}
 
////////
pattern- 
A 
B B 
C C C 
D D D D 


#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value n: ";
    cin >> n;
    int row = 1;
    while(row <= n) { 
        int col = 1;   
        while(col <= row) {
            char ch = 'A' + row - 1;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }    
}
  
//////////////
pattern
Enter value n: 5
A 
B C 
C D E 
D E F G 
E F G H I 


#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value n: ";
    cin >> n;
    int row = 1;
    while(row <= n) { 
        int col = 1;    
        while(col <= row) {
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }    
}
  

/////////
pattern- 
Enter value n: 4
D 
C D 
B C D 
A B C D 


#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value n: ";
    cin >> n;
    int row = 1;
    while(row <= n) { 
        int col = 1; 
        char ch = 'A' + n - row;   
        while(col <= row) {
            cout << ch << " ";
            ch = ch + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }    
}

/////////
pattern- 
Enter value n: 4
   *
  **
 ***
****

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value n: ";
    cin >> n;
    int row = 1;
    while(row <= n) { 
        int space = n - row;
        while(space) {
            cout << " ";
            space = space - 1;
        }
        int col = 1;    
        while(col <= row) {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }    
}
  

/////////
pattern-
Enter value n: 4
   1
  121
 12321
1234321

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value n: ";
    cin >> n;
    int row = 1;
    while(row <= n) { 
        
        //print 1st triangle (space)
        int space = n - row;
        while(space) {
            cout << " ";
            space = space - 1;
        } 

        //print 2nd triangle (number)
        int col = 1;    
        while(col <= row) {
            cout << col;
            col = col + 1;
        }
        //print 3rd triangle (number)
        int start = row - 1;
        while(start) {
            cout << start;
            start = start - 1;
        }        
        cout << endl;
        row = row + 1;
    }    
}

/////////////////
Enter value a: 4
Enter value b: 6
 a&b: 4
 a|b: 6
 ~a: -5
 ~b: -5
 a^b: 2

 17>>1 8
 17>>2 4
 19<<1 38
 21<<2 84

#include<iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter value a: ";
    cin >> a;
    int b;
    cout << "Enter value b: ";
    cin >> b;


    cout << " a&b: " << (a&b) << endl;
    cout << " a|b: " << (a|b) << endl;
    cout << " ~a: " << (~a) << endl;
    cout << " ~b: " << (~a) << endl;
    cout << " a^b: " << (a^b) << endl;

     cout << " 17>>1 " << (17>>1) << endl;
     cout << " 17>>2 " << (17>>2) << endl;
     cout << " 19<<1 " << (19<<1) << endl;
     cout << " 21<<2 " << (21<<2) << endl;

    int i;
    cout << "Enter value i: ";
    cin >> i;

     cout << (++i) << endl;
     cout << (i++) << endl;
     cout << (i--) << endl;
     cout << (--i) << endl;          
}
   
*/

#include<iostream>
using namespace std;
int main() {
    for(int i = 3, j = 4, k = 5; i<=5 && j<=6 && k<=7; i++, j++, k++)
    cout<< i << " " << j << " " << k << endl; 
}



