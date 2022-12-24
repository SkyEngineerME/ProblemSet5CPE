#include <iostream>
using namespace std;

int cheetah(int bath){
    int botl,labe,botll;
    botll =0;
    botl = bath/10;
    labe = bath/10;
    while(labe > 0){
        if((labe-3) >= 0){
            botll += 1;
            labe += 1;
        }
        else;
        labe -= 3;
    }
    botl += botll; 
    return botl;

}


int main(){
    
    cout << cheetah(204);
    return 0;
}