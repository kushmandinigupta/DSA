#include<iostream>
using namespace std;

/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/

int main()
{
    int num_class, num_attend;
    int pert;

    cout<<"Enter the number of classes held\n";
    cin>>num_class;

    cout<<"Enter the number of classes attended\n";
    cin>>num_attend;

    pert=(num_attend*100)/num_class;

    if(pert>75){
        cout <<"the percentage attendance"<<endl;
        cout<<pert<<endl;
        cout<<"Allowed to sit in exam\n";
    }
    else
    {
        cout <<"the percentage attendance"<<endl;
        cout<<pert<<endl;
        cout<<"NOT Allowed to sit in exam\n";
    }
    
   return 0;
}