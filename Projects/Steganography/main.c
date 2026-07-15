#include <stdio.h>
#include "encode.h"
#include "types.h"
OperationType check_operation_type(char *);

int main(int argc, char *argv[]){
    if(argc>=4){
        if(check_operation_type(argv[1] == e_encode)){
            struct _EncodeInfo EncodeInfo;
            read_and_validate_encode_args(argv,&EncodeInfo);
        }
    }
    else{
        printf("Insufficient Command Line Arguments\n");
        return e_failure;
    }






    
}
OperationType check_operation_type(char *symbol){
    if(strcmp(symbol,"-e") == 0){
        return e_encode;
    }
    else if(strcmp(symbol,"-d") == 0){
        return e_decode;
    }
    else{
        return e_unsupported;
    }
}
