/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main(){
int leng,i;
int ac,bc,cc,dc,ec,fc,gc,hc,ic,jc,kc,lc,mc,nc,oc,pc,qc,rc,sc,tc,uc,vc,wc,xc,yc,zc;
char ch[350];
char a,b,c;
cout<<"Enter length of string"<<endl;
cin>>leng;

if(leng>350)
cout<<"string not in series";
else
cout<<"Enter string characters"<<endl;
for(i=0;i<leng;i++)
{
cin>>ch[i];
}
for(i=0;i<leng;i++)
{
   if(ch[i]=='a')
   {if(ac>1)
   cout<<"invalid string";
   break;}
   else
   ac++;
   

   if(ch[i]=='b')
   {if(bc>2)
   cout<<"invalid string";
   break;}
   else
   bc++;


   if(ch[i]=='c')
   {if(cc>3)
   cout<<"invalid string";
   break;}
   else
   cc++;
   
   if(ch[i]=='d')
   {if(dc>4)
   cout<<"invalid string";
   break;}
   else
   dc++;
   
   if(ch[i]=='e')
   {if(ec>5)
   cout<<"invalid string";
   break;}
   else
   ec++;
   
   if(ch[i]=='f')
   {if(fc>6)
   cout<<"invalid string";
   break;}
   else
   fc++;
   
   if(ch[i]=='g')
   {if(gc>7)
   cout<<"invalid string";
   break;}
   else
   gc++;
   
   if(ch[i]=='h')
   {if(hc>8)
   cout<<"invalid string";
   break;}
   else
   hc++;
   
   if(ch[i]=='i')
   {if(ic>9)
   cout<<"invalid string";
   break;}
   else
   ic++;
   
   if(ch[i]=='j')
   {if(jc>10)
   cout<<"invalid string";
   break;}
   else
   jc++;

   if(ch[i]=='k')
   {if(kc>11)
   cout<<"invalid string";
   break;}
   else
   kc++;
   
   if(ch[i]=='l')
   {if(lc>12)
   cout<<"invalid string";
   break;}
   else
   lc++;
   
   if(ch[i]=='m')
   {if(mc>13)
   cout<<"invalid string";
   break;}
   else
   mc++;
   
   if(ch[i]=='n')
   {if(nc>14)
   cout<<"invalid string";
   break;}
   else
   nc++;
   
   if(ch[i]=='o')
   {if(oc>15)
   cout<<"invalid string";
   break;}
   else
   oc++;
   
   if(ch[i]=='p')
   {if(pc>16)
   cout<<"invalid string";
   break;}
   else
   pc++;
   
   if(ch[i]=='q')
   {if(qc>17)
   cout<<"invalid string";
   break;}
   else
   qc++;
   
   if(ch[i]=='r')
   {if(rc>18)
   cout<<"invalid string";
   break;}
   else
   rc++;
   
   if(ch[i]=='s')
   {if(sc>19)
   cout<<"invalid string";
   break;}
   else
   sc++;
   
   if(ch[i]=='t')
   {if(tc>20)
   cout<<"invalid string";
   break;}
   else
   tc++;
   
   if(ch[i]=='u')
   {if(uc>21)
   cout<<"invalid string";
   break;}
   else
   uc++;
   
   if(ch[i]=='v')
   {if(vc>22)
   cout<<"invalid string";
   break;}
   else
   vc++;
   
   if(ch[i]=='w')
   {if(wc>23)
   cout<<"invalid string";
   break;}
   else
   wc++;
   
   if(ch[i]=='x')
   {if(xc>24)
   cout<<"invalid string";
   break;}
   else
   ic++;
   
   if(ch[i]=='y')
   {if(yc>25)
   cout<<"invalid string";
   break;}
   else
   yc++;
   
   if(ch[i]=='z')
   {if(zc>26)
   cout<<"invalid string";
   break;}
   else
   zc++;

}
return 0;
}
