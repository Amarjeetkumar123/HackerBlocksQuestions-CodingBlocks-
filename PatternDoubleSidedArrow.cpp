#include<iostream>
using namespace std;
    int main() {
        int n;
		cin>>n;
        
        int nst = 1;
        int nsp = 2*n - 2;
        int insp = 2;
        
        int row = 1;
        
        while(row <= n){
            for(int csp = 1; csp <= nsp; csp++){
                cout<<"  ";
            }
            
            for(int cst = nst; cst >= 1; cst--){
                cout<<cst<<" ";
            }
            
            if(row > 1 && row < n){
                for(int csp = 1; csp <= insp; csp++){
                    cout<<"  ";
                }
                
                if(row <= n/2){
                    insp += 4;
                }else{
                    insp -= 4;
                }
            }
            
            int cst = 1;
            
            if(row == 1 || row == n){
                cst = 2;
            }
            
            for(; cst <= nst; cst++){
                cout<<cst<<" ";
            }
            
            cout<<endl;
            
            if(row <= n/2){
                nst += 1;
                nsp -= 4;
            }else{
                nst -= 1;
                nsp += 4;
            }
            
            row++;
        }
		return 0;
    }