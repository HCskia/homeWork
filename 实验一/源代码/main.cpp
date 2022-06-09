#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    FILE *fp;
    char buff[255];
    int row,arr;
    int temp[255];
    srand((unsigned)time(NULL));
    if((fp=fopen("input.txt","r"))== NULL){
        printf("ÎÄ¼þ¶ÁÈ¡´íÎó£¡");
        return 0;
    }
    fgets(buff,255,fp);
    row = atoi(buff);
    fgets(buff,255,fp);
    arr = atoi(buff);
    fgets(buff,255,fp);
    int j = 0;
    for(int i=0;i<255;i++){
        if(buff[i]==','){
            continue;
        }
        else if (buff[i]=='\0')
        {
            break;
        }
        temp[j]=int(buff[i]);
        j++;
    }
    printf("%d,\n%d,\n",row,arr);
    printf("%s\n",buff);
    for(int i=0;i<row;i++){
        for(int k=0;k<arr;k++){
            printf("%d,",rand()%10);
        }
        printf("\n");
    }
    return 0;
}