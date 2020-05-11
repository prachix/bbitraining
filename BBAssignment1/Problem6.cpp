#include <iostream>

using namespace std;
void flip(int m,char a[10])
    {
       int j,number;
       for(j=m;j>=0;j--)
    {
      if(a[j]=='-')
      a[j]='+';
      else if(a[j]=='+')
      a[j]='-';
    } 
    number=number+1;
    cout<<"no. of flips="<<" "<<number;
    }

int main()
{
    int i,n,temp;
    char ar[10];
    cout<<"Enter no. of pancakes"<<endl;
    cin>>n;
    cout<<"Enter side of each pancake"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    for(i=n;i>=0;i--)
    {
        if(ar[i]=='-')
        {
            ar[i]='+';
            temp=i-1;
            flip(temp,ar);
        }
    }
    
    return 0;
}
