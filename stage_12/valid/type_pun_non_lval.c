union a {
    float f;
    int i;
};
union a f(void){
    union a x;
    x.i = 0x40080000;
    return x;
}
int main(){
    return f().f;
}
