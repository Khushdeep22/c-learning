#include<iostream> 
using namespace std;

string getDayofweek(int dayNum){
        string dayname;
       switch(dayNum){
        case 0:
        dayname = "sunday";
        break;
        case 1:
        dayname ="monday";
        break;
        case 2:
        dayname ="tue";
        break;
        case 3:
        dayname ="wen";
        break;
        case 4:
        dayname ="thu";
        break;
        case 5:
        dayname ="fri";
        break;
        case 6:
        dayname ="sat";
        break;
        default: 
        dayname = "invalid dayname";

       }


        return dayname;
}



int main(){
    cout<< getDayofweek(4);
    
    return 0;
}
