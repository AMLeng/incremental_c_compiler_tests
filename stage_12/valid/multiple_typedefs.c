typedef const double X, *Y;
int main(){
    X c = 4.0;
    Y d = 0;
    d = &c;
    return c;
}
