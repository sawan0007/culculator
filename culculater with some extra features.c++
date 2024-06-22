#include<iostream>  
using namespace std;
#include<stdio.h>  
#include<conio.h>  
#include<math.h>  
#include<stdlib.h>  
void add();  
void sub();  
void multi();  
void division();  
void sqr();  
void srt();
void trangle();
void circle();
void intrest();  
void exit();  
int main()  
{    
int opr;  
do  
{  
cout << "Select any operation from the C++ Calculator"  
     "\n1 = Addition"  
     "\n2 = Subtraction"  
     "\n3 = Multiplication"  
     "\n4 = Division"  
     "\n5 = Square"  
     "\n6 = Square Root"  
     "\n7 = Area of trangle"
     "\n8 = Area of circle"
       "\n9 = Simple intrest"
     "\n10 = Exit"  
     "\n \n Make a choice: ";  
     cin >> opr;  
  
   switch (opr)  
   
     {  
     case 1:  
    add(); 
    break;  
    case 2:  
    sub();    
    break;  
    case 3:  
    multi();   
    break;  
    case 4:  
    division();   
    break;  
    case 5:  
    sqr();  
    break;  
    case 6:  
    srt();   
    break;
	   case 7:  
     trangle();
    break;
     case 8:  
    circle();   
    break;
     case 9:  
    intrest();   
    break;
    case 10:  
    exit(0);     
    break;  
    default:  
    cout <<"Something is wrong..!!";  
    break;  
    }  
    cout <<" \n------------------------------\n";  
    }while(opr != 7);  
    getch();  
    }  
  
void add()  
{  
int n, sum = 0, i, number;  
cout <<"How many numbers you want to add: ";  
cin >> n;  
cout << "Please enter the number one by one: \n";  
for (i = 1; i <= n; i++)  
{  
cin >> number;  
sum = sum + number;  
}  
cout << "\n Sum of the numbers = "<< sum;  
}  

void sub()  
{  
int num1, num2, z;  
        int a[100];
        
    int i, n, result;
    
    cout << "Enter the number of digits: ";
    cin >> n;
    cout << "Enter " << n << " numbers:" << endl;
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    result = a[0]; 
    for(i = 1; i < n; i++){
        result -= a[i];
    }
    
    cout << "Result of subtraction: " << result << endl;
}  
  
void multi()  
{  
         	int arr[100],size,i,sum=1;
	cout<<"enter number of digits ";
	cin>>size;
	cout<<"enter you digits ";
	for(i=0;i<size;i++)
	cin>>arr[i];
		for(i=0;i<size;i++){
			sum=sum*arr[i];
		}
			cout<<sum; 
}  

void division()  
{  
  float a[100];
    float n, result;
    int i;
    cout << "Enter the number of digits: ";
    cin >> n;
    cout << "Enter " << n << " numbers:" << endl;
    for(i = 0; i < n; i++){
        cin>>a[i];
    }
    result = a[0]; 
    for(i = 1; i < n; i++){
        result /= a[i];
    }
    
    cout << "Result of subtraction: " << result << endl;
}  

void sqr()  
{  
int num1;  
float sq;  
cout <<" \n Enter a number to find the Square: ";  
cin >> num1;  
sq = num1 * num1;  
cout <<" \n Square of " << num1<< " is : "<< sq;  
}  

void srt()  
{  
float q;  
int num1;  
cout << "\n Enter the number to find the Square Root:";  
cin >> num1;  
q = sqrt(num1);  
cout <<" \n Square Root of " << num1<< " is : "<< q;  
}

void trangle(){
  	float a,b,c,area,s;
	cout<<"enter 1st side of trangle = ";
	cin>>a;
		cout<<"enter 2nd side of trangle = ";
	cin>>b;
		cout<<"enter 3rd side of trangle = ";
	cin>>c;
	s=a+b+c/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"the area of trangle is = "<<area;
}

void circle(){

float pie=3.14;
float radius;
cout<<"enter radius of circle";
cin>>radius;
float area=(float)(pie*radius*radius);
cout<<"the area of given circle is= "<<area;
}

void   intrest(){
     int pa,intrest,time,simp;
	cout <<"enter value of principle amount:";
	cin>>pa;
	cout <<"enter value of intrest:";
	cin>>intrest;
	cout<<"enter the time:";
	cin>>time;


simp=pa*intrest*time/100;
cout<<" "<<simp;
}