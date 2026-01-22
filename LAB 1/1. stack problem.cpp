#include <iostream>
using namespace std;

int main()
{
    int n,choice=0;
    cout<<"Enter number of stock: ";
    cin>>n;
    while(choice!=4)
    {
        cout<<"1.Add\n2.Delete\n3.View\n4.Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            {
                int add;
                cout<<"Enter stock to add: ";
                cin>>add;
                n=n+add;
            };break;
        case 2:
            {
                int sub;
                cout<<"Enter stock to delete: ";
                cin>>sub;
                n=n-sub;
            };break;
        case 3:
            {
                cout<<n<<endl;
            };break;
        case 4:
            {
                cout<<"Exiting...";
            }
        default:
            {
                cout<<"Invalid";
            }
        }
    }
}