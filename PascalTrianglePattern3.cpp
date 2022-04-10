#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 0;
    while (i <= n - 1)
    {
        int j = 0;
        while (j <= i)
        {
            int fact_i = 1, fact_j = 1, fact_i_j = 1; // these represent factorial of i, fact of j, and fact of i-j, respectvely

            int k = 1;
            while (k <= i)
            {
                fact_i = fact_i * k;
                k = k + 1;
            }
            k=1;
            while (k <= j)
            {
                fact_j = fact_j * k;
                k = k + 1;
            }
            k=1;
            while (k <= i - j)
            {
                fact_i_j = fact_i_j * k;
                k = k + 1;
            }
            int iCj = fact_i / (fact_i_j * fact_j);
            cout << iCj << "\t";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }

    return 0;
}
