#include<stdio.h>
int main(){
    int m , n , null = 0 , integer = 0 ;
    printf("Enter Number of Rows : ");
    scanf("%d",&m);
    printf("Enter the Number of Columns : " );
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
           printf("Enter the element [%d][%d] : ",i,j);
           scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    for(int i = 0; i<m ; i++){
        for(int j = 0; j<n; j++){
            if(arr[i][j] == 0){
                null=null+1;
            }
            else{
                integer=integer+1;
            }
        }
    }

    if ( null > integer){
        printf("\n It is a Sprase Matrix");
    }
    else{
        printf("\n It is not a Sprase Matrix");
    }
    
    return 0;
}
