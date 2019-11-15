//Pancake Glutton


#include <iostream>

using namespace std;

int pancake[10][2]; //defines multidimentiable array (table of too columbs 10 rows)

int sorting(); //delcaring function sorting

int main()
{

    int most = 0;
    int least = 0;


    cout << "Please enter the number of pancakes each person ate. (10)" << endl;

    for(int person=0;person<=9;person++){
        pancake[person][0]= person+1;
        cin >> pancake[person][1];
    }
//user inputs information for the array

    for(int person=0; person<=9;person++){
            if(pancake[person][1]>most){
                most=pancake[person][1];
        }
    }
//works out the most pancakes eaten
    least = pancake[0][1];

    for(int person=1;person<=9;person++){
            if(pancake[person][1]<least)
                least=pancake[person][1];
    }
//works out the least pancakes eaten
    for(int person=0;person<=9;person++){
            if(pancake[person][1]==most){
                cout << "Most pancakes eaten was " << most << " by person " << pancake[person][0] << endl;
            }

            if(pancake[person][1]==least){
                cout << "Person " << pancake[person][0] << " ate the least number of pancakes which was " << least << endl;
            }
        }
//prints out the most and least eaten
    sorting();
//runs function
    return 0;
}

int sorting(){
    int a;
    int b;

        for(a=0;a<=8;a++){

                for(b=a+1;b<=9;b++){

                        if(pancake[a][1] < pancake[b][1]){
                            int temp;
                            int temp2;

                            temp=pancake[a][1];
                            pancake[a][1]=pancake[b][1];
                            pancake[b][1]=temp;

                            temp2=pancake[a][0];
                            pancake[a][0]=pancake[b][0];
                            pancake[b][0]=temp2;
                        }
                }
        }
//bubble sorting system to sort the people and how many pancakes they ate into order highest at the top
          for(int row=0;row<=9;row++){

            for(int collumn=0;collumn<2;collumn++){
                cout << pancake[row][collumn] << " ";
            }
            cout << endl;
    }
//prints out sorted list
    return 0;
}

