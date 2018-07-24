/*
	Name: Maximum Occurance
	Author: Lalit Kumar Meena
	Enroll No.: 0187CS161050
	Date: 15/01/18	
*/

#include<iostream>
#include<string.h>

using namespace std;

class maxOcc    {   char s[1000], ch;
                    int i,pos,max,a[230];
                public:
                    maxOcc() : a(){

                        max=0;
                    }
                    void getData();
                    void maxOccCounter();
                    void outData();
};

void maxOcc::getData() {

    gets(s);
}

void maxOcc::maxOccCounter() {

    for(i=0;i<strlen(s);i++) {
        a[s[i]]]++;
    }
   
    max=a[0];
    pos=0;
    
    for(i=1;i<=127;i++) {
        if(a[i]!=0){ 
            if(max<a[i]) {
                max=a[i];
                pos=i;
            }
            else    if(max==a[i]) {
                        if(pos>i) {
                            max=a[i];
                            pos=i;
                        }
                    }
        }
    }
}

void maxOcc::outData() {

    cout<<(char)pos<<" "<<max;
}

int main() {
    
    maxOcc ob;
    ob.getData();
    ob.maxOccCounter();
    ob.outData();
    
    return 0;
}
