#include <iostream>
#include "Matrice.h"
#include "TestExtins.h"
#include "TestScurt.h"
#include "assert.h"

using namespace std;

void test_iterator(){
    Matrice m{2,2};
    int val = 1;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            m.modifica(i, j, val);
            val++;
        }

    val = 1;
    auto it = m.iterator();
    while(it.valid()){
        assert(it.elem() == val);
        it.urmator();
        val ++;
    }
}

int main() {

	testAll();
	testAllExtins();
    test_iterator();
    cout<<"End"<<endl;

    /*
    Matrice mat{3,3};
    mat.modifica(0,0,1);
    mat.modifica(0,1,2);
    mat.modifica(0,2,3);
    mat.modifica(1,0,4);
    mat.modifica(1,1,5);
    mat.modifica(1,2,6);
    mat.modifica(2,0,7);
    mat.modifica(2,1,8);
    mat.modifica(2,2,9);

    auto iterator = mat.iterator();
    while(iterator.valid()){
        cout << iterator.elem() << " ";
        iterator.urmator();
    }*/
    return 0;
}
