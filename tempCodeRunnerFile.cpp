#include<iostream>;
using namespace std;

int main(){
    int r=0;
    int c=0;
    int b=0;

    int u_input;
    int amount=0, count=0;

    //menu

    while(true)
    {
    cout<<"********** Welcome to Parking ***********\n"<<endl;
    cout<<"Press 1 for rickshaw"<<endl;
    cout<<"Press 2 for car"<<endl;
    cout<<"Press 3 for bus"<<endl;
    cout<<"Press 4 for show the record"<<endl;
    cout<<"Press 5 for delete"<<endl;
    cin>>u_input;

    
    
    if(u_input==1)
    {
        if (count<=50)
        {
            r=r+1;//r ++ both are same
        amount = amount + 100;
        count = count + 1;
    }
    else
    cout<<"No more cars, Parking ! Parking is full sorry!! "<<endl;
    }
    else if(u_input==2)
    {
        if (count<=50)
        {
            c++;
        amount = amount + 200;
        count = count + 1;
    }
    else
    cout<<"Parking is Full"<<endl;
    }
    else if(u_input==3)
    {
        if (count<=50)
        {
            b++;
        amount = amount + 300;
        count = count + 1;
    }
    else
    cout<<"Parking is Full"<<endl;
    }
    else if(u_input==4)
    {
            cout<<"**************************************"<<endl;
        cout<<"The total amount ="<<amount<<endl;
        cout<<"The total number of vehicles parked ="<<count<<endl;
        cout<<"The total number of rickshaw parked ="<<r<<endl;
        cout<<"The total number of car parked ="<<c<<endl;
        cout<<"The total number of bus parked ="<<b<<endl;
            cout<<"**************************************"<<endl<<endl;
    }
    else if (u_input==5)
    {
        amount = 0;
        count = 0;
        r=0;
        c=0;
        b=0;
        cout<<"**************************"<<endl;
        cout<<"RECORD DELETED"<<endl;
        cout<<"**************************"<<endl<<endl;
    }
    else{
        cout<<"Invalid number"<<endl;
    }
    }




    return 0;
}