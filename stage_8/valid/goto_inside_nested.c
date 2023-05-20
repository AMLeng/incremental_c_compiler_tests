int main(){
    int a = 4;
    goto bob;
    while(a<20){
        a++;
        if(a > 20){
            bob:
            return 240;
        }
    }
    return a;
}
