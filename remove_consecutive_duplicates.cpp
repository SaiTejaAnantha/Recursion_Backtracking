string removeDuplicate(string &s)
{
    int length_of_string = s.length();
    if (length_of_string < 2)
    {
        return s;
    }
    if (s[length_of_string-1] == s[length_of_string-2])
    {
        s.pop_back();
        return removeDuplicate(s);
    }
    else
    {
        char last_character = s.back();
        s.pop_back();
        return removeDuplicate(s) + last_character;
    }

}
