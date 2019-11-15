//  Grading Program


#include <iostream>

using namespace std;

int score;//declares variable called score

int main()
{
    cout << "Enter your score!" << endl;//print out text
    cin >> score;//user input and stores in variable

    if(score==100){//if score is equal to 100 task 1a
        cout << "Well done you score a perfect score!" << endl;//print text
    }

    if(score<=100 && score>=90){//if score is less than or equal to 100 and greater than and equal to 90 ... task 1 b
        cout << "You scored an A" << endl;
    }

    if(score<=89 && score>=80){ //task 1 c...
        cout << "You scored a B" << endl;
    }

    if(score<=79 && score>=70){
        cout << "You scored a C" << endl;
    }

    if(score<=69 && score>=60){
        cout << "You scored a D" << endl;
    }

    if(score<=59){
        cout << "You scored a F" << endl;
    }
    return 0;
}
