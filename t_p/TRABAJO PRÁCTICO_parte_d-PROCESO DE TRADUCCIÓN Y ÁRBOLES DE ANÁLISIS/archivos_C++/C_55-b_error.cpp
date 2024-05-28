#include <iostream>
using namespace std;
void foo(){
    int i;
    cout<< i++<<endl;
}
int main() {
    int j;
    for (j = 0; j < 10; j++) foo();
}