/*
	Name: Mark the Answer 
	Author: Lalit Kumar Meena
	Enroll. No.: 0187CS161050
	Date: 16/01/18
*/

#include<iostream>

using namespace std;

class test {	int ar[1000000], skip, count, N, X;
	public:
		test() : ar() {
			count=0;
			skip=0;
		}
		void getData();
		void counter();
		void showCount();
};

void test::getData() {

	cin>>N>>X;
	for(int i=0; i<N; i++)
		cin>>ar[i];
}

void test::counter() {

	for(int i=0; i<N; i++) {
		if(ar[i]>X) {
			if(skip>=1) return;
			skip++;
		}
		else count++;
	}
}

void test::showCount() {

	cout<<count;

}

int main() {

	test ob;
	ob.getData();
	ob.counter();
	ob.showCount();
}	

