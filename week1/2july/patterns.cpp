#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void pattern2(int n)
{
    for (int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<= i ; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
// * 
// * * 
// * * * 

}

void pattern3(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j<=i ; j++)
        {
            cout<<j+1;
        }
        cout<<endl;
    }
}

void pattern4(int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j<=i ; j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
}

void pattern5(int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        for(int j = n ; j>i ; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6(int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        for(int j = n ; j>i ; j--)
        {
            cout<<n-j+1;
        }
        cout<<endl;
    }
}

void pattern7 (int n)
{
    for(int i = 0 ; i <n ; i++)     //rows
    {
        for(int j = 0 ; j<(n-i-1) ; j++)        //spaces
        {
            cout<<" ";

        }
        for (int  j = 0; j < 2*i +1 ; j++)      //stars
        {
            cout<< "*";
        }
        for(int j = 0 ; j<(n-i-1) ; j++)        //spaces
        {
            cout<<" ";

        }
        cout<<endl;
        
    }
}

void pattern8 (int n)
{
    for (int i = 0; i < n ; i++)
    {
        for (int j =0 ; j<i ; j++)
        {
            cout<<" ";
        }
        for(int j = 0 ; j< (2*(n-i)-1) ; j++)
        {
            cout<<"*";
        }
        cout<<endl;


    }
}

void pattern10(int n )
{
    
    // Upper half including the middle row
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half excluding the middle row
    for (int i = n- 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}

void pattern11(int n )
{
    int start = 0;
    for(int i = 0 ; i<n ; i++)
    {
        if (i%2 == 0)
        {
            start = 1;
        }
        else
        {
            start = 0;
        }
        for(int j = 0 ; j<=i ; j++)
        {
            cout<<start<<" ";
            start= 1-start;
        }
        cout<<endl;
    }
}

void pattern12(int n )
{
    for (int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j<=i; j++)
        {
            cout<<j+1;
        }
        for (int j = 1; j <= 2*(n-i)-2; j++)
        {
            cout<<" ";
        }
        for(int j = i ; j>=0 ; j--)
        {
            cout<<j+1;
        }


        cout<<endl;
    }
}

void pattern13(int n )
{
    int number = 1;
    for (int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j<= i ; j++)
        {
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
}

void pattern14(int n )
{
    
    for (int i = 0 ; i < n ; i++)
    {   
        char alphabet = 'A';
        for(int j = 0 ; j<= i ; j++)
        {
            cout<<alphabet<<" ";
            alphabet++;
        }
        cout<<endl;
    }
}

void pattern15(int n )
{
    
    for (int i = 0 ; i < n ; i++)
    {   
        char alphabet = 'A';
        for(int j = 0 ; j< n -i ; j++)
        {
            cout<<alphabet<<" ";
            alphabet++;
        }
        cout<<endl;
    }
}


void pattern16(int n )
{
    
    char alphabet = 'A';
    for (int i = 0 ; i < n ; i++)
    {   
        for(int j = 0 ; j<=i ; j++)
        {
            cout<<alphabet<<" ";
        }
        alphabet++;
        cout<<endl;
    }
}

void pattern17(int n )
{
    
    for(int i = 0 ; i < n ; i ++)
    {
        for (int j = 0 ; j < n -i ; j++)
        {
            cout<<" ";
        }
        char ablphabet = 'A';
        for(int j = 0 ; j<=i; j++)
        {
            cout<<ablphabet;
            ablphabet++;
        }
        ablphabet = 'A';
        for(int j = 0 ; j<i; j++)
        {
            cout<<ablphabet;
            ablphabet++;
        }
        cout<<endl;
    }
}

void pattern18(int n )
{
    for(int i = 0 ; i<n ; i++)
    {
        
        char alphabet = 'A'+n-i-1;
        for (int j = 0 ; j<= i ; j++)
        {
            cout<<alphabet<<" ";
            alphabet++;

        }
        cout<<endl;
    }
}


void pattern19 (int n )
{
    for (int i = 0 ; i < n; i ++)
    {
        for (int j = 0 ; j < n -i ; j++)
        {
            cout<<"*";
        
        }
        for (int j = 0 ; j < 2*i ; j++)
        {
            cout<<" ";
        }
        for (int j = 0 ; j < n -i ; j++)
        {
            cout<<"*";
        
        }   
        cout<<endl;
        
    }
    for(int i =0 ; i< n ; i++)
    {
        for(int j = 0 ; j <=i ; j++)
        {
            cout<<"*";
        }
        for (int j = 0 ; j < 2*(n-i-1) ; j++)
        {
            cout<<" ";
        }
        for(int j = 0 ; j <=i ; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }

}


void pattern20 (int n )
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        for (int j = 0 ; j < 2*(n-i-1); j++)
        {
            cout<<"  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i < n ; i++)
    {
        for(int j = 0 ; j < n -i ; j++ )
        {
            cout<<"* ";
        }
        for (int j = 0 ; j < 2*i ; j++)
        {
            cout<<"  ";
        }
        for(int j = 0 ; j < n -i ; j++ )
        {
            cout<<"* ";
        }

        cout<<endl;
        
    }

}

void pattern21(int n )
{
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0  ; j < n ; j++)
        {
            if(i==0 || j==0 || i == n -1 || j == n-1)
            {
                cout<<"* ";

            }
            else
            {
                cout<<"  ";
            }

        }
        cout<<endl;

    }
}

void pattern_22 (int n )
{
    int size = 2*n -1;
    for (int i = 0 ; i < size ; i ++)
    {
        for (int j = 0 ; j < size ; j++)
        {
            int top = i;
            int bottom = j ;
            int right =(2*n-2) - j;
            int left = (2*n-2) - i;
            cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
        }
        cout<<endl;
    }
}

int main ()
{
    int n ;
    cin>>n ;
    pattern_22(n);
    
    return 0;
}
