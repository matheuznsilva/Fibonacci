#include "fibonacci.h"

int fibonacci(int i){
    if(i == 1 || i == 2){
        return 1;
    } else{
        return fibonacci(i-1) + fibonacci(i-2);
    }
}
