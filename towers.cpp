#include <iostream>
using namespace std;

void Start_game();
void Statistics();
void My_Friend_The_End();
int efficient(int n);
void Greeting();

int efficient(int n){
    if (n == 1){
        return 1;
    }
    return 2*efficient(n-1) + 1;
}

void Greeting(){
    char choice;
    cout<<"Welcome to Hanoi Towers here are your options:"<<endl;
    jump_bro:
    cout<<"Play a game, Enter: 1"<<endl;
    cout<<"Check statistics, Enter: 2"<<endl;
    cout<<"Terminate Program, Enter: 3"<<endl;
    cout<<"What do you choose?: ";
    cin>>choice;
    cout<<endl;
    if (choice != '1' && choice != '2' && choice != '3'){
        cout<< "I'm sorry but your input was not valid please enter the number 1, 2, or 3. "<<endl;
        cout<< "Here are what these numbers correspond to:"<<endl;
        goto jump_bro;
    }
    if (choice == '1'){
        Start_game();
    }
    else if (choice == '2'){
        Statistics();
    }
    else{
        My_Friend_The_End();
    }
} //end of Greeting function

void hanoi(int N, char S, char I, char D){  //Base case 
    if (N==1){
        cout << "Move " << N << " from " << S << " ---->"<< D << endl;
    } //Drive N towards base case
    else {
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
