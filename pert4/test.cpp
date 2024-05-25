#include <iostream>

using namespace std;


int main(){
    for(int i = 1; i <=10;++i){
        cout << i << endl;

        for(char z = 'A'; z <='J'; ++z){
            if(z == 'A' +i -1){
                cout << z << endl;
            }
        }

    }
}