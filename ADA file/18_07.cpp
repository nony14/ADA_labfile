#include<iostream>
#include<queue>
using namespace std;
class hogwarts  
{   
	queue<int> P[5], Q;
    int school, roll;
    char ch;
    public:
        void getData();
        void operationE();
        void operationD();
};
 
void hogwarts::getData() {
    
    cin>>ch;
    if(ch=='E')
        operationE();
    else operationD();
}
 
void hogwarts::operationE() {
    
    cin>>school>>roll;
    if (P[school].empty())
        Q.push(school);
    P[school].push(roll);
}
 
void hogwarts::operationD() {
 
    int temp, temp2;
    temp=Q.front();
    temp2=P[temp].front();
    P[temp].pop();
    if (P[temp].empty())
        Q.pop();
    cout<<temp<<' '<<temp2<<'\n';
}
 
int main() {
 
    int Q;
    cin>>Q;
    hogwarts ob;
    while(Q--) {
        ob.getData();
    }
    return 0;
}
