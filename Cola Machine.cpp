//Cola Machine


#include <iostream>
#include <string>
using namespace std;

int selection;
string result;

int main()
{

    cout << "What Drink would you like?" << endl;
    cout << "" << endl;
    cout << "1. Coke" << endl;
    cout << "2. Lemonade" << endl;
    cout << "3. Sprite" << endl;
    cout << "4. Water" << endl;
    cout << "5. Relentless" << endl;

    cin >> selection;
    //task 1a /* block commenting*/
    /*if(selection==1){
        result = "Coke";
    }

    if(selection==2){
        result = "Lemonade";
    }

    if(selection==3){
        result = "Sprite";
    }

    if(selection==4){
        result = "Water";
    }

    if(selection==5){
        result = "Relentless";
    }
    cout << "You have selected " << result << endl;
    */

    //task1 b
    switch(selection){//switch statement to check selection variable
        case 1: // if selection is equal to 1
            cout << "You have selected Coke." << result << endl; //Print out result
            break;// if this case is ran then skip to the end
        case 2:
            cout << "You have selected Lemonade." << result << endl;
            break;
        case 3:
            cout << "You have selected Sprite." << result << endl;
            break;
        case 4:
            cout << "You have selected Water." << result << endl;
            break;
        case 5:
            cout << "You have selected Relentless." << endl;
            break;
            //task 1 c
        default://what to do if the selection doesn't meet any of the cases
            cout << "Invalid Selection. Here is your money back." << endl;
    }

    return 0;
}
