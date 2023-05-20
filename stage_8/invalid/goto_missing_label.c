int main(){
    for(int i=0; i<20; i++){
        if(i%10 == 0){
            goto my_label;
        }
    }
    return 3;
}
