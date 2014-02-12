/* 
 * File:   main.cpp
 * Author: Sona
 *
 * Created on February 6, 2014, 3:10 PM
 */

#include <cstdlib>
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string>

using namespace std;

/*
 * 
 */
class Help{
public:
    int pow2(int n){
        if(n & !(n &(n-1)))
            return n;
        else{
            int num=0;
            while(n!=0){
                n=n>>1;
                num=num+1;
            }
            return pow(2,num);
        }
 
    }
    int mult3(int n){
        int evc,ovc;
        evc=ovc=0;
        if(n<0)
            n=-n;
        if(n==0)
            return 1;
        if(n==1)
            return 0;
        while(n){
            if (n&1)
                ovc++;
            n=n>>1;
            if (n&1)
                evc++;
             n=n>>1;
        }
        return (mult3(ovc-evc));
    }
    int parity_checker(int n){
        int p;
        p=0;
        while(n){
            p=!p;
            n=n&(n-1);
            
        }
        return p;
    }
};
int main() {
    Help h;
    int func,num;
    func=1;
    while (true)
    {
    cout<<"Enter the function to be performed \n1: Enter number to be checked for nearest power of 2\n"
            "2: Check if entered number is a multiple of 3\n"
            "3. Find parity of entered number\n0. exit"<<endl;
    cin>>func;
    if (func==0)
        break;
    switch(func){
        case 1: {
            cout<<"Enter number to be checked"<<endl;
            cin>>num;
            int ans;
            
            ans=h.pow2(num);
            cout<<"The power of 2 closest to entered number is"<<ans<<endl;
            break;
        }
        case 2: {
            cout<<"Enter number to be checked"<<endl;
            cin>>num;
            int ans;
            ans=h.mult3(num);
            cout<<"The entered number is ";
            if(ans==1)
                    cout<<"is a multiple of 3"<<endl;
            else
                cout<<"is not a multiple of 3"<<endl;
            break;
        }
        case 3: {
            cout<<"Enter number to be checked"<<endl;
            cin>>num;
            int ans;
            ans=h.mult3(num);
            cout<<"The entered number is ";
            if(ans==1)
                    cout<<"has odd parity"<<endl;
            else
                cout<<"has even parity"<<endl;
            break;
        }
    }
    }
    
        

    return 0;
}

