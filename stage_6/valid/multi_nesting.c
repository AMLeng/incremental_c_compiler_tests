int main(){
    int a = 2;
    if (a) {
        {
            int a = 3;
            return a;
        }
        return a;
    }
}
