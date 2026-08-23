#include<iostream> 
using namespace std;

int main(){
    
    int num1, num2;
    char op;
   
    cout<<"enter fisrt no:";
    cin>> num1 ;
    cout<<"enter operator:";
    cin>> op;
     cout<<"enter second no:";
    cin>> num2;
    int result;
    if(op == '+'){
        result = num1 + num2;
    } else if(op == '-'){
        result = num1 - num2;

    }else if (op == '/'){
        result = num1 / num2;
        }else if (op == '*'){
            result =num1*num2;

        }else{
            cout<< "invalid operature";

        }
        cout<<"result:"<<result<<endl;
        
    return 0;
}
