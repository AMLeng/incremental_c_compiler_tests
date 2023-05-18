int main(){
    int a = 13;
    long b = 5;
    b <<= a %= b;
    b ^= -1;
    return b;
}
