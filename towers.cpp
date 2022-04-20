#include <iostream>
using namespace std;

int efficient(int n){
    if (n == 1){
        return 1;
    }
    return 2*efficient(n-1) + 1;
}

void hanoi(int N, char S, char I, char D)
{
    
    if (N==1)//Base case 
    {
        cout << "Move " << N << " from " << S << " ---->"<< D << endl;
    }
    else { //Drive N towards base case
        hanoi(N-1, S, D, I);
        cout << "Move " << N << " from " << S << " ---->"<< D << endl;
        hanoi (N-1, I, S, D);
    }
}

int main()
{
    int N;
    char S = 'S', I ='I', D='D';

    cout << "Give me the # of discs: " << endl;
    cin >> N;
    hanoi ( N, S, I, D);
    return 0;
}
