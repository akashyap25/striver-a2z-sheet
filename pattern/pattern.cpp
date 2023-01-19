#include <bits/stdc++.h>
using namespace std;

void pattern1(){
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


void pattern2(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern3(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}

void pattern4(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}


void pattern5(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5-i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}

void pattern7(){

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
        {
            cout<<(" ");
        }
        for(int j=1;j<=i;j++)
        {
            cout<<("*");
        }
        for(int j=1;j<i;j++)
        {
            cout<<("*");
        }
        cout<<("\n");
    }
}

void pattern8(){

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<(" ");
        }
        for(int j=1;j<=6-i;j++)
        {
            cout<<("*");
        }
        for(int j=1;j<=5-i;j++)
        {
            cout<<("*");
        }
        cout<<("\n");
    }
}

void pattern9(){
    //upper half
   for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
        {
            cout<<(" ");
        }
        for(int j=1;j<=i;j++)
        {
            cout<<("*");
        }
        for(int j=1;j<i;j++)
        {
            cout<<("*");
        }
        cout<<("\n");
    }
    //lower half
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<(" ");
        }
        for(int j=1;j<=6-i;j++)
        {
            cout<<("*");
        }
        for(int j=1;j<=5-i;j++)
        {
            cout<<("*");
        }
        cout<<("\n");
    }
}

void pattern10(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern11(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i%2){
            if(j%2) cout<<"1";
            else cout<<"0";

            }
            else {
                if(j%2) cout<<"0";
            else cout<<"1";
            }
        }
        cout<<endl;
    }
}



void pattern12(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=8;j++){
            if(j<=4&&j<=i){
                cout<<j;
                
            }
            else if(j<=4&&j>=i){
                cout<<" ";
            }
            if(j>4&&j>=9-i){
                cout<<9-j;
            }
             else if(j>4&&j<=9-i){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern13(){
    int k=0;
    for (int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
             k++;
             cout<<k<<" ";
        }
        cout<<endl;
    }

}
void pattern14(){
    for(int i=65;i<70;i++){
        for(int j=65;j<=i;j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
}

void pattern15(){
    for(int i=0;i<5;i++){
        for(int j=65;j<=69-(i);j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
}

void pattern16(){
    for(int i=65;i<70;i++){
        for(int j=1;j<=abs(i-64);j++){
            cout<<char(i)<<" ";
        }
        cout<<endl;
    }
}
void pattern17(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
             cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<char(64+j);
        }
        for(int j=1;j<i;j++){
            if(64+(i-j)>=65){
                cout<<char(64+(i-j));
            }
        }
        for(int j=1;j<=5-i;j++){
             cout<<" ";
        }
        cout<<endl;
    }
    
}

void pattern18(){
    for (int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<char(64+((5+j)-i));
        }
        cout<<endl;
    }
}
void pattern19(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=(6)-i;j++){
             cout<<"*";
        }
        for(int j=1;j<i;j++){
            cout<<" ";

        }
        for(int j=1;j<i;j++){
            cout<<" ";

        }
        for(int j=1;j<=6-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
             cout<<"*";
        }
        for(int j=1;j<=5-i;j++){
            cout<<" ";

        }
        for(int j=1;j<=5-i;j++){
            cout<<" ";

        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main( ) 
{
   pattern19();
   
return 0;
}