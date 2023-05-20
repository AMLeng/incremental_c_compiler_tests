int main(){
    int a = 3;
    switch(a){
        case 1:
            return 1;
        case 2:
            return 2;
        default:
        switch(a - 2){
            case 2:
                return 11;
            case 1:
                return 12;
            default:
                return 40;
        }
    }
}
