// sourceSIOF2.cpp

int square(int n) {
    return n * n;
}

int& staticA() {
    
    static auto staticA  = square(5);   
    return staticA;
    
}