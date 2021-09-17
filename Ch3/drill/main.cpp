#include "../std_lib_facilities.h"




int main(){

    string firstName;
    cout << "Enter the name of the person you want to write to: ";

    cin >> firstName;
    string letter = "";
    letter += "Dear  "+firstName+",\n";
    letter +=  "  How are you? I am fine. I miss you. \n";
    letter +=  "It is about the do the chapter 3 drill. I will amaze my teacher with some cool features included in this program.\n";
    string friendName;

    cout << "Friend name: ";
    cin >> friendName;
    letter += "Have you seen " + friendName + " lately?";
    char friendGender = '0';
    cout << "Is your friend male or female (m/f): ";
    cin >> friendGender;
    //create a string according to the gender
    string hisher = (friendGender == 'f') ? "her" : "him";
    letter += "If you see " + friendName + " please ask " + hisher +" to call me.\n";
    int age;
    while(1){
        cout << "Enter your recepient age: ";
        cin >> age;
        if(age <= 0 || age >= 110){
            cout << "You are kiddin'... :D"<<endl;
        }
        else{
            break;
        }
    }
    if(age < 12){
        //Convert age+1 to a string object to handle the error
        letter += "Next you age will be "+to_string(age+1) + ".\n";
    }
    else if(age == 17){
        letter += "Next year you will able to vote! Vote wisely to change the word for the right way!\n";
    }
    else if(age > 70){
        letter += "You lived such a good life, I hope you enjoying your retirement!\n";
    }
    else{
        letter += "Make sure you won't miss any important step to live a such a good life ;)\n";
    }

    letter += "\nYour sincerely, \n\n\nKristof Molnar\n";


    cout << "Letter: \n\n" << letter;
	return 0;
}
