#include <bits/stdc++.h> 
bool canNinjaWin(string& str) {
    int length_of_string = str.length();
    if (length_of_string < 2)
    {
        return false;
    }
    for (int i=0;i<length_of_string-1;i++)
    {
        if (str[i] == '$' && str[i+1] == '$')
        {
            string changed_str = str.substr(0,i) + "**" + str.substr(i+2);
            if (!canNinjaWin(changed_str))
            {
                return true;
            }
        }
    }
    return false;
}
