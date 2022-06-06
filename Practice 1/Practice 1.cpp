// Факторіал
#include <iostream>

using namespace std;

long int fact_r(int N)
{
    if (N < 0) 
        return 0; 
    if (N == 0) 
        return 1; 
    else 
        return N * fact_r(N - 1);
}

long int fact_c(int N)
{
    long int factorial = 1;
    if (N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
    {
        for (int i = 1; i <= N; ++i) {
            factorial *= i;
        }
        return factorial;
    }
}

int main()
{
    int numb;
    cout << "Enter any number -> ";
    cin >> numb;
    cout << "recursive factorial -> " << fact_r(numb) << endl;
    cout << "cyclic factorial -> " << fact_c(numb) << endl;
}

