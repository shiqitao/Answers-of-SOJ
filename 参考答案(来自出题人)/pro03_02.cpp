# include<iostream>

using namespace std;

int main()
{
	int year=0, month=0;
	int days=0;

	cin >> year >> month;

    if(year<0 || year>10000 || month<1 || month >12 )
        cout << "Error!";
    else
    {
        switch (month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                days=31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                days=30;
                break;
            case 2:
                if( year%400==0 ||(year%4==0 && year %100!=0) )
                    days=29;
                else days=28;
            default:
                break;
        }
        cout<<days;
    }

	return 0;
}
