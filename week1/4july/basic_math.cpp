int gcd(int a,int b)
{
	while (a>0 && b>0)
    {
        if (a>b)
        {
            a = a%b;
        }
        else 
        {
            b = b%a;
        }

    }
    if (a==0)
    {
        return b;
    }
    else 
    {
        return a;
    }
}//uses euclidean algo 

/*
euclidean algo states that 
gcd (a,b) = gcd (a-b , b)                              where a>b



imporved version of this is 
gcd (a,b) == gcd  (a%b,b)                              where a>b

*/
