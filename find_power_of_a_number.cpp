#include <bits/stdc++.h> 
long long Pow(int X, int N)
{
    if (X == 0)
    {
        return 0;
    }
    else if (N == 0)
    {
        return 1;
    }
    else if (N % 2 != 0)
    {
        return (X*Pow(X, N/2)*Pow(X, N/2));
    }
    else
    {
        return (Pow(X, N/2)*Pow(X, N/2));       
    }

}