#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> am = {
    
};

void ask();
void see();
void add();
void take();
void seeac();
void er();


float d;
bool w = false;


int main() {
    cin.tie(0);

    string s;

    cout << "lets make an account\n" << "what is your first name" << endl;
    cin >> s;
    am.push_back(s);

    cout << "what is ypur second name" << endl;
    cin >> s;
    am.push_back(s);

    cout << endl;


    ask();








    
    return 0;
}

void seeac() {
    
    for (int i = 0; i < am.size(); i++) {
        cout << am[i] << " ";
    }

    cout << endl;
    cout << endl;   
    ask();
}

void ask() {
    string an;

    cout << endl << "do you wanna see your account or see your balance or add to it or take from it" << endl;
    cout << "type the action you want to do" << endl;

    if (w) {
        cout << "write exit if you want to" << endl;
    }
    else {
        w = true;
    }
    cin >> an;

    if (an == "see") {
        see();
    }
    else if (an == "add") {
        add();
    }
    else if (an == "take") {
        take();
    }
    else if (an == "exit") {
        return;
    }
    else {
        string yn;
        cout << '\n' << "look like you wrote a wrong action\n" << "try again\n";

        ask();
        

    }

}




void see() {
    string an;

    cout << "do you wanna see your balance or your account?\n";

    cin >> an;

    if (an=="balance") {

        cout << "your balance is " << d << '\n';
        ask();
    }
    else if (an=="account") {
        seeac();
    }
}

void take() {
    float m;

    cout << "how much would you take from your balance\n";
    cin >> m;

    if (m > d){
        string tan;

        cout << "your balance is lesser than " << m << " its " << d << endl;
        cout << "do you wanna try again\n";

        cin >> tan;
        if (tan == "yes") {
            take();
        }
        else {
            ask();
        }
    }
    else if (m < 0){
        cout << "you cant take negative number try again\n";
        take();
    }
    else {
        d -= m;     
    }
    

    cout << "your balance is now " << d << endl;
    ask();
}

void add() {
    float m;

    cout << "how much would you add\n";
    cin >> m;

    d += m;

    cout << "your balance is " << d << endl << endl;


    ask();
}

