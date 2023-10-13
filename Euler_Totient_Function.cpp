#include<bits/stdc++.h>
#define N 1000006
#define ll long long int
using namespace std;

int p[N+1];
int phi[N+1];

void prime()
{
    p[0] = p[1] = 1;
    for(int i=2; i*i<=N; i++)
    {
        if(p[i] == 0)
        {
            for(int j=2; i*j<=N; j++)
                p[i*j] = 1;
        }
    }
}

void phifunction()
{
    for(int i=1; i<=N; i++)
        phi[i] = i;

    for(int i=2; i<=N; i++)
    {
        if(p[i] == 0)
        {
            for(int j=i; j<=N; j+=i)
                phi[j] = phi[j]/i*(i-1);
        }
    }
}

int main()
{
    prime();
    phifunction();

    long long int i, n;

    cout << "Enter  Number :: ";
    cin >> n ; //>> m;


    cout << "\nphi-function value from " << n << " is :: \n";
    // for(i=n; i<=m; i++)
        cout  << phi[n] << endl;

    return 0;
}
