int main(){
    int a = 42;
    long b = 5;
    b |= -2;
    b >>= 1;
    return a /= b &= 7;
}
