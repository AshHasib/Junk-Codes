#include<iostream>

using namespace std;

void quick(int[],int ,int);

int main(){
    int A[1000];
    int N,i;
    cout<<"Enter size of the array:";
    cin>>N;
    cout<<"Enter elements:";
    for(i=0;i<N;i++){
        cin>>A[i];
    }
    quick(A,0,N-1);

    cout<<"Sorted array:";
    for(i=0;i<N;i++){
        cout<<A[i]<<"\t";
    }
    cout<<endl;

    return 0;
}

void quick(int a[],int lb,int ub){
    int pivot,next,left=lb,right=ub;
    pivot=a[lb];
    while(lb<ub){
        while((a[ub]>=pivot)&&(lb<ub)){
            ub--;
        }
        if(lb!=ub){
            a[lb]=a[ub];
            lb++;
        }
        while((a[lb]<=pivot)&&(lb<ub)){
            lb++;
        }
        if(lb!=ub){
            a[ub]=a[lb];
            ub--;
        }
    }
    a[lb]=pivot;
    next=lb;
    lb=left;
    ub=right;

    if(lb<next){
        quick(a,lb,next-1);
    }
    if(ub>next){
        quick(a,next+1,ub);
    }
}
