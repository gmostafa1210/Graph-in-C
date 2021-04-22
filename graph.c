#include<stdio.h>
int main(){
    int i, j, node, test, cn1, cn2;
    int a[100][100];
    printf("Number of Nodes: ");
    scanf("%d",&node);

    printf("If two node is connected, enter 1.\n");
    printf("If two node is not connected, enter 0.\n");
    for(i = 0; i < node; i ++){
        for(j = 0; j < node; j ++){
            while(1){
                scanf("%d", &a[i][j]);
                if(a[i][j] == 1 || a[i][j] == 0){
                    printf("Successful input. \n");
                    break;
                }
                else{
                    printf("unsuccessful input. \n");
                }
            }
        }
    }
    printf("\n\n");
    for(i = 0; i < node; i ++){
        printf("Node no. %d:\t", i+1);
        for(j = 0; j < node; j ++){
            printf("%d\t", a[i][j]);
        }
        printf("\n\n");
    }
    while(1){
        printf("Press 1 for test connection.\n");
        printf("Press 0 for exit.\n");
        scanf("%d", &test);
        printf("\n");
        if(test == 1){
            printf("Connection You want to cheak: ");
            scanf("%d", &cn1);
            printf("With: ");
            scanf("%d", &cn2);
            if(a[cn1-1][cn2-1] == 1){
                printf("\nThay are connected.\n\n");
            }
            else{
                printf("\nThay are not connected.\n\n");
            }
        }
        else if(test == 0){
            printf("Thank you.\n");
            break;
        }
        else{
            printf("Invalid input. Try again.\n");
        }
    }
    return 0;
}