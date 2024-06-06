 #include<iostream>
 using namespace std;
 int main ()
 {
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t   Welcome To "<<endl;
    cout<<"\t\t\t\t\t\tSimple Calculator";

    cout<<endl<<endl;


     int choice ;
     cout<<"Enter 1 for addition : \n";
     cout<<"Enter 2 for substraction  : \n";
     cout<<"Enter 3 for multiplication : \n";
     cout<<"Enter 4 for division : \n";
     cout<<"Enter 5 for exit : \n\n";
     
     while (choice!=5)
     {
     cout<<"\nEnter your choice : ";
     cin>>choice;
     
     
     
     switch (choice)
     {
         case 1: 
         {
             float a,b;
             cout<<"Enter the value of a and b : \n";
             cin>>a>>b;
             cout<<"Addition of "<<a << " and "<<b<<" is : "<<a+b;
             cout<<"\n";
             break;
         }
         case 2: 
         {
             float a,b;
             cout<<"Enter the value of a and b : \n";
             cin>>a>>b;
             cout<<"substraction of "<<a << " and "<<b<<" is : "<<a-b;
             cout<<"\n";
             break;
         }
         case 3: 
         {
             float a,b;
             cout<<"Enter the value of a and b : \n";
             cin>>a>>b;
             cout<<"multiplication of "<<a << " and "<<b<<" is : "<<a*b;
             cout<<"\n";
             break;
         }
         case 4: 
         {
             float a,b;
             cout<<"Enter the value of a and b : \n";
             cin>>a>>b;
             cout<<"division of "<<a << " and "<<b<<" is : "<<a/b;
             cout<<"\n";
             break;
         }
         case 5:
         cout<<"\nThank you !\n";
         break;
     }
     
     }
 }
