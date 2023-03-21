#include <iostream>
using namespace std;
int main() {
  // cout << "Hello World!\n";

  /*Type casting
  int a = 'a';
  cout<<a<<endl;
  char b = 98;
  cout<<b<<endl;

  op:- 97
       b  */

  /*char ch1 = 123456;
   cout<<ch1<<endl;
   output will be @ which is equivalent to 64
   due to implicit typecasting...and 123456 is
   much bigger than the size of char*/

  /*unsigned int a = -124;
   cout<<a<<endl; give output very large number since -124 is
   converted into 2's complement in which most significant bits
   became 1*/

  /*Homework1
  char n;
  cin>>n;
  int m = n;
  if(m>96 && m<123)
    cout<<"This is lowercase";
  else if(m>47 && m<58 )
    cout<<"This is numeric";
  else
    cout<<"This is uppercase or special character";*/

  /*Homework2(Sum of Even numbers)


  int n, i = 1, sum = 0;
  cin>>n;
  while(i<=n)
    {
      if(i%2 == 0)
      {
        sum = sum + i;
      }
      i++;
    }
  cout<<"Sum of even numbers upto n is :- "<<sum<<endl;*/

  /*Homework3(Fahrenheit to Celsius table)
  float f,c;
  cout<<"Enter the degree in F to convert into celsius "<<endl;
  cin>>f;
  c = 5*(f-32)/9;
  cout<<"The "<<f<<" degree F equals to "<<c<<" degree in celsius"<<endl;*/

  /*Prime checking
  int i=2,n,prime=2;
  cout<<"Enter the number to check whether it is prime or not"<<endl;
  cin>>n;
  while(i<n)
    {
      if(n%i == 0)
      {
        cout<<"It is not a prime "<<endl;
        prime = 0;
        break;
      }
      i=i+1;
    }
    if(prime!=0)
    {
        cout<<"It is a prime number";
    }*/

  /*Pattern programming1
    ****
    ****
    ****
    ****


  int i=4,j=4;
  for(i=0;i<4;i++) {
    for(j=0;j<4;j++) {
      cout<<"*";
    }
    cout<<endl;
  }
  */

  /*Pattern programming2
       1 1 1
       2 2 2
       3 3 3

 int n,i=1,j=1;
 cout<<"Enter the value upto till you wanna print pattern "<<endl;
 cin>>n;
 while(i<=n)
   {
     j=0;
     while(j<n)
       {
         cout<<i<<" ";
         j=j+1;
       }
     cout<<endl;
     i=i+1;
   }
 */

  /*Pattern programming3
      4 3 2 1
      4 3 2 1
      4 3 2 1


int i,j,n;
cout<<"Enter the value of n till you have to print the pattern "<<endl;
cin>>n;
for(i = 0;i<n;i++)
  {
    for(j=0;j<n;j++)
      {
        cout<<n-j<<" ";
      }
    cout<<endl;
  }
 */

  /*Pattern programming4
    1 2 3
    4 5 6
    7 8 9

  int n,i=1,j=1,m=1;
  cout<<"Enter the value of n upto you wanna print the pattern "<<endl;
  cin>>n;
  while(i<=n)
   {
     j=1;
     while(j<=n)
       {
         cout<<m<<" ";
         m++;
         j=j+1;
       }
     cout<<endl;
     i=i+1;
   }
  */

  /*Pattern programming5
      *
      * *
      * * *
      * * * *


    int i=1,j=1,n;
    cout<<"Enter the value of n till you wanna print the star "<<endl;
    cin>>n;
    while(i<=n)
      {
        j=1;
        while(j<=i)
          {
            cout<<"*"<<" ";
            j++;
          }
        cout<<endl;
        i++;
      }
  */

  /*Pattern programming6
    1
    2 2
    3 3 3
    4 4 4 4

    int i=1,j=1,n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    while(i<=n)
      {
        j=1;
        while(j<=i)
        {
          cout<<i<<" ";
          j++;
        }
        cout<<endl;
        i++;
      }*/

  /*Pattern programming7
    1
    2 3
    4 5 6
    7 8 9 10

    int i=1,j=1,n,count=1;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    while(i<=n)
      {
        j=1;
        while(j<=i)
          {
            cout<<count<<" ";
            count++;
            j++;
          }
        cout<<endl;
        i++;
      } */

  /*Pattern programming8
   1
   2 3
   3 4 5
   4 5 6 7

   int n,i=1,j=1,count = 1;
   cout<<"Enter the value of n "<<endl;
   cin>>n;
   while(i<=n)
     {
       j = 1;
       count = i;
       while(j<=i)
         {
           cout<<count<<" ";
           count++;
           j++;
         }
       cout<<endl;
       i++;
     }


   //Homework to solve the above pattern program without the help of count
     variable

   int n,i = 1,j = 1;
   cout<<"Enter the value of n "<<endl;
   cin>>n;
   while(i<=n)
     {
       j=1;
       while(j<=i)
         {
           cout<<i+j-1<<" ";
           j++;
         }
       cout<<endl;
       i++;

     } */

  /*Pattern programming9
    1
    2 1
    3 2 1
    4 3 2 1

    int n,i = 1,j = 1,count = 1;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    while(i<=n)
      {
        j=1;
        count = i;
        while(j<=i)
          {
            cout<<count<<" ";
            count--;
            j++;
          }
        cout<<endl;
        i++;

      }

    //alternate way of above without the help of count

  int n,i = 1,j = 1;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    while(i<=n)
      {
        j=1;
        while(j<=i)
          {
            cout<<i-j+1<<" ";
            j++;
          }
        cout<<endl;
        i++;

      } */

  /* Pattern programming10
     A A A
     B B B
     C C C



    int n,i=1,j=1;
    char b;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    while(i<=n)
      {
        j = 1;
        while(j<=n)
          {
            char b = 'A'+ i - 1;
            cout<<b<<" ";
            j++;
          }
            cout<<endl;
            i++;
      }    */

  /* Pattern programming11
     A B C
     A B C
     A B C

  int n,i=1,j=1;
    char b;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    while(i<=n)
      {
        j = 1;
        while(j<=n)
          {
            char b = 'A'+ j - 1;
            cout<<b<<" ";
            j++;
          }
            cout<<endl;
            i++;
      } */

  /* Pattern programming12
     A B C
     D E F
     G H I


  int n,i=1,j=1;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    char b = 'A';
    while(i<=n)
      {
        j = 1;
        while(j<=n)
          {
            cout<<b<<" ";
            b++;
            j++;
          }
            cout<<endl;
            i++;
      } */

  /* Pattern programming13
   A B C
   B C D
   C D E


 int n,i=1,j=1;
  char b;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  while(i<=n)
    {
      j = 1;
      while(j<=n)
        {
          char b = 'A'+ i+ j - 2;
          cout<<b<<" ";
          j++;
        }
          cout<<endl;
          i++;
    } */

  /* Pattern programming14
    A
    B B
    C C C

    int n,i=1,j=1;
    char b;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    while(i<=n)
      {
        j = 1;
        while(j<=i)
          {
              b = 'A' + i - 1;
              cout<<b<<" ";
              j++;

          }
        cout<<endl;
        i++;
      }  */

  /* Pattern programming15
  A
  B C
  D E F
  G H I J

  int n,i=1,j=1;
  char c = 'A';
  cout<<"Enter the value of n "<<endl;
  cin>>n;
  while(i<=n)
    {
      j = 1;
      while(j<=i)
        {
          cout<<c<<" ";
          c++;
          j++;
        }
      cout<<endl;
      i++;
    }*/

  /*Pattern programming16

  A
  B C
  C D E
  D E F G

  int n,i=1,j=1;
  char b;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  while(i<=n)
    {
      j = 1;
      while(j<=i)
        {
            b = 'A' + i + j - 2;
            cout<<b<<" ";
            j++;

        }
      cout<<endl;
      i++;
    }*/

  /*Pattern programming17

   D
   C D
   B C D
   A B C D

    int n, i = 1, j = 1;
    char b;
    cout << "Enter the value of n" << endl;
    cin >> n;
    while (i <= n) {
      j = 1;
      char b = 'A' + n - i;
      while (j <= i) {
        cout << b << " ";
        b++;
        j++;
      }
      b--;
      cout << endl;
      i++;
    }
  */

  /*Pattern programming18

  ---*
  --**
  -***
  ****   */
  /*

    int i = 1, j = 1,n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    while(i<=n)
      {
        j = 1;
        while(j<=n)
          {
              if((i+j) > n)
              {
                cout<<"* ";
              }
              else
                cout<<"  ";
            j++;
          }
        cout<<endl;
        i++;
      }
  */

  /*Alternate way

  int n,i=1;
  cout<<"Enter the value of the n "<<endl;
  cin>>n;
  while(i<=n)
    {
      int space = n-i;
      while(space)
        {
          cout<<" ";
          space--;
        }
      int j = 1;
      while(j<=i)
        {
          cout<<"*";
          j++;
        }
      cout<<endl;
      i++;
    }
*/

  /*Pattern programming19
   ****
   ***
   **
   *


    int n;
    cout<<"Enter the value of the n "<<endl;
    cin>>n;
    int i=1,z;
    while(i<=n)
      {
        z=n-i+1;
        while(z)
          {
            cout<<"* ";
            z--;
          }
        cout<<endl;
        i++;

      } */

  /*Pattern programming20
   ****
   ***
   **
   *
   */

  /*
  int n, i = 1;
  cout << "Enter the value of the n " << endl;
  cin >> n;
  while (i <= n) {
    int space = i - 1;
    while (space) {
      cout << " ";
      space--;
    }
    int j = i;
    while (j <= n) {
      cout << "*";
      j++;
    }
    cout << endl;
    i++;
  }
*/

  /*

  ****
   ***
    **
     *

  
  int n;
  cout << "Enter the value of the n " << endl;
  cin >> n;
  int i = 1;
  while(i<=n)
    {
      int space = i-1;
      while(space)
        {
          cout<<" ";
          space--;
        }
      int j = 1;
      while(j<=n-i+1)
      {
        cout<<"*";
        j++;
      }
      cout<<endl;
      i++;
    }

*/

/*
1111
 222
  33
   4


 int n;
 cout<<"Enter the value of n "<<endl;
 cin>>n;

int i = 1, num = 1;
  while(i<=n)
    {
      int space = i-1;
      while(space)
        {
          cout<<" ";
          space--;
        }
      int j = 1;
      while(j<=n-i+1)
        {
          cout<<num;
          j++;
        }
      cout<<endl;
      i++;
      num++;
    }
*/

/*
   1
  22
 333
4444


  int n;
  cout<<"Enter the value of n "<<endl;
  cin>>n;
  int num = 1,i = 1;
  while(i<=n)
    {
      int space = n-i;
      while(space)
        {
          cout<<" ";
          space--;
        }
      int j = i;
      while(j)
        {
          cout<<num;
          j--;
        }
      cout<<endl;
      num++;
      i++;
    }

  */


/* 
1234
 234 
  34
   4

  int n;
  cout<<"Enter the value of n "<<endl;
  cin>>n;
  int i = 1;
  while(i<=n)
    {
      int space = i-1;
      while(space)
        {
          cout<<" ";
          space--;
        }
      int j = n-i+1;
      int num = i;
      while(j)
        {
          cout<<num;
          num++;
          j--;
        }
      i++;
      cout<<endl;
    }
*/

/*
   1
  23
 456
78910 

  int n;
  cout<<"Enter the value of n "<<endl;
  cin>>n;
  int i = 1, num = 1;
  while(i<=n)
    {
      int space = n-i;
      while(space)
        {
          cout<<" ";
          space--;
        }
      int j = i;
      while(j)
        {
          cout<<num;
          num++;
          j--;
        }
      cout<<endl;
      i++;
    }
*/
/*
---1
--121
-12321
1234321


  int n;
  cout<<"Enter the value of n "<<endl;
  cin>>n;
  int i=1;
  while(i<=n)
    {
      int space = n-i;
      while(space)
        {
          cout<<" ";
          space--;
        }
      int j = 1;
      int num = 1;
      while(j<=i)
        {
          cout<<num;
          num++;
          j++;
        }
      int third = i-1;
      int num2=third;
      while(third)
        {
          cout<<num2;
          num2--;
          third--;
        }
      num2++;
      i++;
      cout<<endl;
  }

*/



/*
1234554321
1234**4321
123****321
12******21
1********1


  int n;
  cout<<"Enter the value of n "<<endl;
  cin>>n;
  int i = 1;
  while(i<=n)
    {
      //pattern 1
      int num = 1, j = 1;
      while(j<=n-i+1)
        {
          cout<<num;
          num++;
          j++;
        }
      //pattern 2
      int next = i-1;
      while(next)
        {
          cout<<"**";
          next--;
        }
      //pattern 3
      int m = n-i+1;
      while(m)
        {
          cout<<m;
          m--;
        }
      cout<<endl;
      i++;
    }


*/


  

}
