struct a {
    int i;
};
struct a f(struct a x){
    struct a r = x;
    return r;
}
int main(void){
    struct a x = {12};
    struct a y = f(x);
    return y.i;
}
