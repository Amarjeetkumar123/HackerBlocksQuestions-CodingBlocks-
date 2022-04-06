#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//5



// upper half
	int row=1;

	// 3rd row-->3
	// loop
	while(row<=n){
		// ?===========================================
	// spaces
	int sc=1;
	while(sc<=(n-row)){//5-3-->2
		cout<<" "<<'\t';
	sc=sc+1;//3

	}
	// inc
	int ic=1;
	int sp=row;//3
	while(ic<=row){//4<=3
		cout<<sp<<'\t';
		sp=sp+1;//6
		ic=ic+1;//4
	}
	// dec
	int dc=1;
	int stp=(2*row)-2;//4
	while(dc<=row-1){//3<=2

		cout<<stp<<'\t';
		stp=stp-1;//2

		dc=dc+1;//3

	}

	// ?===========================================


	cout<<endl;
	row=row+1;

	}


	// lowe half

	int rn=1;

	while(rn<=n-1){

		// spaces

	int counter=1;
	while(counter<=rn){
		cout<<" "<<'\t';
		counter=counter+1;
	}


	// incresing numbers

	int inccounter=1;
	int stpri=(n-rn);//3-1-->2
	while(inccounter<=(n-rn)){//2<=2
		// print
		cout<<stpri<<'\t';//2
		stpri=stpri+1;//4

		inccounter=inccounter+1; //3

	}

	// dec numbers
	int deccounter=1;
	int decnums=2*(n-rn-1);//2
	while(deccounter<=(n-rn-1)){//3<=2
		cout<<decnums<<'\t';
		decnums=decnums-1;//2
		deccounter=deccounter+1;//3

	}

	cout<<endl;
	rn=rn+1;

	}

	cout<<endl;

	return 0;
}