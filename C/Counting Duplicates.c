
#include<stdio.h>
int main(){
    //initialize
    int n,total;
    int i,j, count=0;
    //input of array size
    scanf("%d",&n);
    //declaration of array
    int arr[n],fre[n];
    //checking whether it is a number
    for(i=0;i<n;i++){
        if(scanf("%d",&arr[i])!=1){
            printf("Invalid input");
            return 0;
            }
    }
    
    //counting the duplicates
    for(i=0;i<n;i++){
        count=0;
        for(j=i+1;j<n;j++){
            if(arr[i]== arr[j]){
                count++;
                fre[j]=1;
            }
        }
        printf("%d\n",count);
        if(fre[i]!=1){
            total=total+count;
        }
    }
    printf("%d",total);
}