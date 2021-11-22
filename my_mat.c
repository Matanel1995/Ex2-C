#include <stdio.h>
#define Max 10
#define True 1
#define Flase -1

int find_min(int x,int y){
    if(x<y){
        return x;
    }
    else{
        return y;
    }
}

void init_mat(int(*arr_ptr)[Max]){
    for(int i=0;i<Max;i++){
        for(int j=0;j<Max;j++){
            scanf("%d", &(*(*(arr_ptr+i)+j)));
        }
    }
}

int shortest_route(int(*arr_ptr)[Max],int i,int j){
    for (int k=0 ; k<Max ; k++){
        for (int ii=0; ii<Max; ii++){
            for (int jj = 0; jj < Max; jj++){
                if ((*(*(arr_ptr+ii)+jj)) == 0 && ii != jj){
                    if((*(*(arr_ptr+ii)+k) != 0 && *(*(arr_ptr+k)+jj) != 0)){
                        *(*(arr_ptr+ii)+jj) = *(*(arr_ptr+ii)+k) + *(*(arr_ptr+k)+jj);
                    }
                    else{
                        continue;
                    }
                }
                if(*(*(arr_ptr+ii)+jj) != 0){
                    if((*(*(arr_ptr+ii)+k) != 0 && *(*(arr_ptr+k)+jj) != 0)){
                         *(*(arr_ptr+ii)+jj) = find_min( *(*(arr_ptr+ii)+jj) ,*(*(arr_ptr+ii)+k) + *(*(arr_ptr+k)+jj) );
                    }
                }
            }
        }
    }
    if (*(*(arr_ptr + i)+j) ==0)
        return -1;
    return *(*(arr_ptr + i)+j);
}

void path_exist(int(*arr_ptr)[Max], int i,int j){
    if( *(*(arr_ptr +i)+j) !=0 ){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}


