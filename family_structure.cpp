string kthChildNthGeneration(int n, long long int k)
{
	if (n==1 | k==1)
	{
		return "Male";
	}
	long long a = (k+1)/2;
	string par_gender = kthChildNthGeneration(n-1, a);
	if(k == 2*a - 1)
	{
		return par_gender;
	}
	else
	{
		if (par_gender == "Female")
		{
			return "Male";
		}
		else
		{
			return "Female";
		}
	}

}