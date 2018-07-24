/*
	Name: Subham and Binary Strings
	Author: Lalit Kumar Meena
	Enroll. No.: 0187CS161050
	Date: 18-01-18 
*/
#include<iostream>
#include<string>
 
using namespace std;
 
class binString {   char S[100005];
                    int N;
                public:
                    void getData();
                    int rotation();
                    void outData();
};
 
void binString::getData() {
 
    cin>>N>>S;
}
 
int binString::rotation() {
 
    int count=0;
    for (int i=0; i<N; i++)
        if(S[i] == '0')
            count++;
    return count;
}
 
void binString::outData() {
 
    cout<<rotation()<<'\n';
}
 
int main() {
 
    int T;
    cin>>T;
    while(T--) {
        binString ob;
        ob.getData();
        ob.outData();
    }
}
