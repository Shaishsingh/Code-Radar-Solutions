int sum(int a) {
    int s = 0;
    while (a != 0) {
        int p = a % 10;
        s += p;
        a/10=a;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int p[n];
    for(int i=0;i<n;i++){
        p[i=]sum(arr[i])
        }
        for(int i=o;i<n;i++){
            printf("%d",p[i]);
        }
}