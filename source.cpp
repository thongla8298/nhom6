int USCLN(int a, int b)
{
	while(a!=b)
		if(a>b)
			a=a-b;
		else
			b=b-a;
	return a;
}
void Thong ()
{
	cout << "Xin Chào T";
}
