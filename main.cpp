#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main(){
	int n, insert, move, i, total=0;
	ifstream in("infile",ios::in);
	in>>n;
	vector<int>cow(n);
	for(i=n;i>0;i--){
		in>>cow.at(n-i);
	}
	for(int next=1;next<n;next++){
		insert=cow.at(next);
		move=next;
		while((move>0)&&(cow.at(move-1)>insert)){
			cow.at(move)=cow.at(move-1);
			move--;
		}
		cow.at(move)=insert;
	}
	for(i=5;i>0;i--){
		total=total+cow.at(n-i);
	}
	cout<<total<<endl;
	return 0;
}
