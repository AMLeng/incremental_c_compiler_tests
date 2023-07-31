union a {
    int i;
    float f;
};
int main(){
    union a x = {3.0};
    return x.i;
}
