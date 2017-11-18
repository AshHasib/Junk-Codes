#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    scanf("%d",&T);
    int g,l,a,b;
    while(T--) {
        scanf("%d %d",&g,&l);

        a=g;

        if(l%g!=0) {
            printf("%d\n",-1);
            continue;
        }
        b=l;
        printf("%d %d\n",a,b);
    }

    return 0;
}
