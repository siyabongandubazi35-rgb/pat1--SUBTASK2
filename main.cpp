// siyabonga ndubazi
// 112504351
//


#include <iostream>

using namespace std;

// declaring variables

int firstTemp ;
int secondTemp ;
int thirdTemp ;


int main()
{

    // the code for displaying and inputing the temerature


    cout << "enter the first temp" << endl;
    cin>> firstTemp ;
    cout << "enter the second temp" << endl;
    cin >> secondTemp ;
    cout << "enter the third temp" << endl;
    cin>> thirdTemp;



    // entering the the conditioons


    if ( secondTemp > 50 ){// if second temperature under 50 degrees

         cout << "Reduce fryer heat before taking the third reading" << endl; // should be displayed


    } else if ( firstTemp < 10 ) { // is first temperature is less than 10 degrees

    cout << "Increase the fryer heat before taking the third reading " << endl; //


    } else if (  thirdTemp >=150 && thirdTemp<=  190 ){ //  if the temperature is bestween 150 - 190

    cout << "You may start frying the Magwinyas" << endl; // displsay



    }else {

    cout << "Oil is not ready for frying " << endl;


    }






    return 0;
}
