// 		FIND NUMBERS OF NUMBER
#include<iostream>
using namespace std;
int num(int a[],int n,int k);

  int main()
 {
	int a[50],i,n,k;
	//number of test cases
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	//searching element
	cin>>k;

	cout<<	num(a,n,k);
}

// Function for finding numbers of number
int num(int a[], int n, int k)
{
    int count=0,i,num;
       int t;
       for(i=0;i<n;i++)
       {
	       num=a[i];
//if a[i]={10,0,100,50,20} & k=0	       
	       if(num==0 && k==0)
	       count++;
       while(num!=0)
       {
           t=num%10;
           if(t==k)
          { count++;
          }
          num=num/10;
                
}
}    

    return count;
}
