struct s{
    int x;
};
int main() {
    struct s a;
    a.x = 0.5;
    struct s{
        double x;
    };
    struct s b;
    b.x = 0.5;
    return 4.0*b.x + 16.0*a.x;
}
