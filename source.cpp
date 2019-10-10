int BSC(int so1, int so2,int max)
{
	cout << "Nhap so thu nhat: ";
    	cin >> so1;
    	cout << "Nhap so thu hai: ";
    	cin >> so2;
    	if(so1 == 0 || so2 == 0) {
        	cout << so1 << " va " << so2 << " khong co boi chung nho nhat" << endl;
    	} else {
        	if(so1 > so2) {
            		max = so1;
        	} else {
           		 max = so2;
        	}
 
        int i = max;
         
        while(1)
        {
            if(i % so1 == 0 && i % so2 == 0)
            {
                bcnn = i;
                break;
            }
            i += max;
        }
        cout << "Boi chung nho nhat cua " << so1 << " va " << so2 << " la " << bcnn << endl;
    }
    return 0;
}

void Thong ()
{
	cout << "Xin Chào T";
void thu()
{
	cout<<"helooooooo";

}
void thuy()
{
	cout << " hello ";
}
void thien()
{
	cout<<"thien";
}

