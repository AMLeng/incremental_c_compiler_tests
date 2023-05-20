int main(){
    int bob = 25;
    while(bob%5 == 0){
        bob++;
        goto bob;
    }
    bob:
    return bob;
}
