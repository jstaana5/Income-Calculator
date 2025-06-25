// THIS IS A ROUGH ESTIMATE AND THE % WAS BASED ON $16 PER HOUR FOR 40 HOURS
// PERSONAL PROJECT - JIANA STA ANA

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

string toUpper(const string& str) {
    string result = str;
    transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}


int main(){
    string states[] = {
    "Alabama", "Alaska", "Arizona", "Arkansas", "California",
    "Colorado", "Connecticut", "Delaware", "Florida", "Georgia",
    "Hawaii", "Idaho", "Illinois", "Indiana", "Iowa", "Kansas",
    "Kentucky", "Louisiana", "Maine", "Maryland", "Massachusetts",
    "Michigan", "Minnesota", "Mississippi", "Missouri", "Montana",
    "Nebraska", "Nevada", "New Hampshire", "New Jersey", "New Mexico",
    "New York", "North Carolina", "North Dakota", "Ohio", "Oklahoma",
    "Oregon", "Pennsylvania", "Rhode Island", "South Carolina",
    "South Dakota", "Tennessee", "Texas", "Utah", "Vermont",
    "Virginia", "Washington", "West Virginia", "Wisconsin", "Wyoming"
    };
    for(int i = 0; i<50; i++){      // lists out each state in a new line
        cout << states[i] << endl;
    }

    enum State {
    ALABAMA, ALASKA, ARIZONA, ARKANSAS, CALIFORNIA,
    COLORADO, CONNECTICUT, DELAWARE, FLORIDA, GEORGIA,
    HAWAII, IDAHO, ILLINOIS, INDIANA, IOWA, KANSAS,
    KENTUCKY, LOUISIANA, MAINE, MARYLAND, MASSACHUSETTS,
    MICHIGAN, MINNESOTA, MISSISSIPPI, MISSOURI, MONTANA,
    NEBRASKA, NEVADA, NEW_HAMPSHIRE, NEW_JERSEY, NEW_MEXICO,
    NEW_YORK, NORTH_CAROLINA, NORTH_DAKOTA, OHIO, OKLAHOMA,
    OREGON, PENNSYLVANIA, RHODE_ISLAND, SOUTH_CAROLINA,
    SOUTH_DAKOTA, TENNESSEE, TEXAS, UTAH, VERMONT,
    VIRGINIA, WASHINGTON, WEST_VIRGINIA, WISCONSIN, WYOMING
    };
    
    
    cout << "Enter state: \n";
    cin.clear();
    string state;
    //getline(cin, state);
    //cout << "You entered: " << state;
    
    bool valid = false;
    int index;
    while(!valid){
        getline(cin, state);
        
        for(int i = 0; i < 50; i++){
            if(toUpper(state) == toUpper(states[i])){       // compares user input to all states in the list
                valid = true;
                index = i;       // sets the user input to this state (for tax multiplication purposes)
                break;      // if true, it exits out of the while loop
            }
        }
        if(!valid){
            cout << "Invalid state. Please try again: ";
        }
    }

    double hourly_wage;
    cout << "Enter hourly_wage: $";
    bool enterWage = false;
    while (!enterWage){
        cin >> hourly_wage;
        if(hourly_wage>0)  {         // checks that the input is a valid number (aka positive)
            enterWage = true;
        }  
    }

    // round hourly wage to 2 decimal spaces
    double rounded = round(hourly_wage*100.0)/100.0;

    int hours;
    cout << "Enter the number of hours per week: ";
    cin >> hours;

    // -------------------------------- //
    // switch case to calculate the taxed hourly wage

    double taxed_wage;     

    switch (static_cast<State>(index)){
        case ALABAMA:
            taxed_wage = rounded * .8567;
            break;
        case ALASKA:
            taxed_wage = rounded * .9112;
            break;
        case ARIZONA:
            taxed_wage = rounded * .9079;
            break;
        case ARKANSAS:
            taxed_wage = rounded * .8996;
            break;
        case CALIFORNIA:
            taxed_wage = rounded * .9012;
            break;
        case COLORADO:
            taxed_wage = rounded * .9059;
            break;
        case CONNECTICUT:
            taxed_wage = rounded * .9107;
            break;
        case DELAWARE:
            taxed_wage = rounded * .8995;
            break;
        case FLORIDA:
            taxed_wage = rounded * .9112;
            break;
        case GEORGIA:
            taxed_wage = rounded * .8962;
            break;
        case HAWAII:
            taxed_wage = rounded * .8953;
            break;
        case IDAHO:
            taxed_wage = rounded * .9112;
            break;
        case ILLINOIS:
            taxed_wage = rounded * .8700;
            break;
        case INDIANA:
            taxed_wage = rounded * .8615;
            break;
        case IOWA:
            taxed_wage = rounded * .8820;
            break;
        case KANSAS:
            taxed_wage = rounded * .8887;
            break;
        case KENTUCKY:
            taxed_wage = rounded * .8708;
            break;
        case LOUISIANA:
            taxed_wage = rounded * .8943;
            break;
        case MAINE:
            taxed_wage = rounded * .9112;
            break;
        case MARYLAND:
            taxed_wage = rounded * .8502;
            break;
        case MASSACHUSETTS:
            taxed_wage = rounded * .8773;
            break;
        case MICHIGAN:
            taxed_wage = rounded * .8831;
            break;
        case MINNESOTA:
            taxed_wage = rounded * .9046;
            break;
        case MISSISSIPPI:
            taxed_wage = rounded * .9112;
            break;
        case MISSOURI:
            taxed_wage = rounded * .9106;
            break;
        case MONTANA:
            taxed_wage = rounded * .9055;
            break;
        case NEBRASKA:
            taxed_wage = rounded * .8956;
            break;
        case NEVADA:
            taxed_wage = rounded * .9112;
            break;
        case NEW_HAMPSHIRE:
            taxed_wage = rounded * .9112;
            break;
        case NEW_JERSEY:
            taxed_wage = rounded * .8922;
            break;
        case NEW_MEXICO:
            taxed_wage = rounded * .9087;
            break;
        case NEW_YORK:
            taxed_wage = rounded * .8873;
            break;
        case NORTH_CAROLINA:
            taxed_wage = rounded * .9008;
            break;
        case NORTH_DAKOTA:
            taxed_wage = rounded * .9112;
            break;
        case OHIO:
            taxed_wage = rounded * .9027;
            break;
        case OKLAHOMA:
            taxed_wage = rounded * .8819;
            break;
        case OREGON:
            taxed_wage = rounded * .7948;
            break;
        case PENNSYLVANIA:
            taxed_wage = rounded * .8685;
            break;
        case RHODE_ISLAND:
            taxed_wage = rounded * .8977;
            break;
        case SOUTH_CAROLINA:
            taxed_wage = rounded * .8988;
            break;
        case SOUTH_DAKOTA:
            taxed_wage = rounded * .9112;
            break;
        case TENNESSEE:
            taxed_wage = rounded * .9112;
            break;
        case TEXAS:
            taxed_wage = rounded * .9112;
            break;
        case UTAH:
            taxed_wage = rounded * .8657;
            break;
        case VERMONT:
            taxed_wage = rounded * .9096;
            break;
        case VIRGINIA:
            taxed_wage = rounded * .8959;
            break;
        case WASHINGTON:
            taxed_wage = rounded * .9112;
            break; 
        case WEST_VIRGINIA:
            taxed_wage = rounded * .8892;
            break;
        case WISCONSIN:
            taxed_wage = rounded * .9069;
            break;
        case WYOMING: 
            taxed_wage = rounded * .9112;
            break;
    }

    int final_taxed_wage = round(taxed_wage*100.0)/100.0;

    cout << "Your hourly rate after tax is: $" << round(taxed_wage*100.0)/100.0 << endl;
    cout << "Your weekly earnings are: $" << final_taxed_wage*hours << endl;
    cout << "Your monthly earnings are: $" << final_taxed_wage*hours*4 << endl;
    

    return 0; 
}