#include<iostream>
#include<conio.h>
#include<windows.h>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main(){
    int choice;
    string a;
    cout<<setw(38)<<"MENU"<<endl;
    cout<<setw(38)<<"----"<<endl;
    cout<<setw(10)<<""<<setw(25)<<"Option 1: Sum of digit Entered number."<<endl;
    cout<<setw(10)<<""<<setw(25)<<"Option 2: Fibonacci Series."<<endl;
    cout<<setw(10)<<""<<setw(25)<<"Option 3: To check a three-digit number is Armstrong Number or not,"<<endl;
    cout<<setw(10)<<""<<setw(25)<<"Option 4: To check Given Number is EVEN or ODD "<<endl;
    cout<<setw(10)<<""<<setw(25)<<"Option 5: Exit"<<endl;
    do{
        cout<<"\nEnter your option : ";
        cin>>choice;
        switch (choice){
            case 1:{
                int n, sum = 0;
                cout<<"Enter the number = ";
                cin>>n;
                while (n!=0){
                    sum = sum+n%10;
                    n = n/10;
                }   
                cout<<"Sum of digits is = "<<sum<<endl;
                getch();
                
            }
            break;
            case 2:{
                int n0,n1,n2;
                cout<<"Enter the Number of terms of Fibonacci: "
                ;cin>>n0;
                for (int i=0;i<n0;++i){
                    if (i<=1)
                    n1=0;
                    else {
                        n1=n2 + n1;
                        n2=n1 - n2;
                        }
                        cout<<n1<<endl;
                    }
                }
                break;
                case 3:{
                    int num, tempNum, remainder, sum    ;
                    cout << "Enter a three-digit number: ";
                    cin >> num;
                    tempNum = num;
                    while (tempNum != 0)
                    {
                        remainder = tempNum % 10;
                        sum += remainder * remainder * remainder;
                        tempNum /= 10;
                        }
                        if (num == sum)
                        cout << num << " is an armstrong number";
                        else
                        cout << num << " is not an armstrong number";
                        getch ();
                        break;
                        }
                case 4:{
                    int na;
                    cout<<"Enter the number: ";
                    cin>>na;
                    if(na%2==0)
                    cout<<"Even";
                    else
                    cout<<"Odd";
                    break;}
                case 5:{
                    exit(0);
                }
                default :{
                    cout<<"Invalid choice.";
                    }
                }
                cout<<"Do you want to continue? y/n\t";
                cin>>a;
                return 0;
                }
                while((a=="y") || (a=="Y"));{
    
            }
}

