//whilst user is gullible

#include <iostream>

using namespace std;

int number;
int count;

int main()
{/* task 1 a
    cout << "Enter a number not equal to 5." << endl;
    cin >> number;
    if(number==5){
        cout << "Hey you weren't suppose to enter 5!" << endl;
        return 0;
    }
    */
    //task 1b
    do{//do while loop till count is 10 or less
    //cout << "Enter a number not equal to 5." << endl;
    cout << "Enter a number not equal to " <<count <<endl;
    cin >> number;


    if(count==10){
        cout << "Wow your more patient than me!" << endl;
        return 0;//ends program
    }
    /*if(number==5){
        cout << "Hey you weren't suppose to enter 5!" << endl;
        return 0;
    }*/
    //task 1 c
    if(number==count){
        cout << "hey you weren't suppose to enter "<< count << endl;
        return 0;
    }
    count++;//count + 1 = count
    }while(count<=10);

    return 0;
}
