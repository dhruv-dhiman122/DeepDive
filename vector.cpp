#include <iostream>
#include <vector>

//============================================== Space for macro ===========================================//

#define TEST_SIZE 10

//=============================================== Space for user defined function ================================//


//=============================================== space for main function =========================================//

int main() {
    std::vector<int> vec = {1,2,3,4,5}; // the vector are also data type similar to classes and struct
    /*
     * The data type are homogenous, meaning of singluar data type only
     * The data type cant be heterogenous which is seen in python*/

    for(int element : vec) {
        std::cout<<element<<" ";
    }
    
	return 0;
}
