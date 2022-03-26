#include <iostream>
using namespace std;

int main() {
  int n1, n2, hcf;
  cin >> n1 >> n2;

  if ( n2 > n1) {   
    int temp = n2;
    n2 = n1;
    n1 = temp;
  }
    
  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      hcf = i;
    }
  }

  cout<< hcf;

  return 0;
}


// Another Methode......

#include<iostream>
using namespace std;
int gdc(int a , int b){
	if(a==0)
	return b;
	if(b==0)
	return a;

	while(a!=b){
		if(a>b)
		a = a-b;
		else
		b = b-a;
	}
	return a;
}
int main() {
	int a , b;
	cin>>a>>b;
	int ans = gdc(a,b);
	cout<<ans;
	return 0;
}

