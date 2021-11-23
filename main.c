#include <stdio.h>
#include "my_mat.h"
#define Max 10


int main(){
    int my_mat[Max][Max];
    int (*mat_ptr)[Max];
    mat_ptr = my_mat;
    char user_input;
    scanf("%c", &user_input);
    while (user_input != 'D')
    {
        if(user_input =='A'){
            init_mat(mat_ptr);
            shortest_route(mat_ptr,0,0);
        }
        if(user_input == 'B'){
            int user_input1 , user_input2;
            scanf("%d", &user_input1);
            scanf("%d", &user_input2);
            path_exist(mat_ptr,user_input1,user_input2);
        }
        if(user_input == 'C'){
            int user_input1 , user_input2;
            scanf("%d", &user_input1);
            scanf("%d", &user_input2);
            shortest_route(mat_ptr,user_input1,user_input2);
        }
        scanf("%c",&user_input);
    }
    return 0;
}