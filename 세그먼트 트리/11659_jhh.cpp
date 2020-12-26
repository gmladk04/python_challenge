#include<cstdio>
int a[100001];
int s[100001];
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        s[i]=s[i-1]+a[i];
    }
    while(m--){
        int x,y;
        scanf("%d %d",&x,&y);
        printf("%d\n",s[y]-s[x-1]);
    }
    return 0;
}