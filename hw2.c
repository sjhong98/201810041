int main(){
    double km;
    printf("enter km : ");
    scanf("%lf", &km);
    printf("%.2f km is %.2f miles.", km, km*1.609);
    return 0;
}