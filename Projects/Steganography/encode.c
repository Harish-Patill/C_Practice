#include <stdio.h>
#include "encode.h"
#include "types.h"

/* Function Definitions */

/* Get image size
 * Input: Image file ptr
 * Output: width * height * bytes per pixel (3 in our case)
 * Description: In BMP Image, width is stored in offset 18,
 * and height after that. size is 4 bytes
 */
uint get_image_size_for_bmp(FILE *fptr_image){
    uint width, height;
    // Seek to 18th byte
    fseek(fptr_image, 18, SEEK_SET);

    // Read the width (an int)
    fread(&width, sizeof(int), 1, fptr_image);
    printf("width = %u\n", width);

    // Read the height (an int)
    fread(&height, sizeof(int), 1, fptr_image);
    printf("height = %u\n", height);

    // Return image capacity
    return width * height * 3;
}

uint get_file_size(FILE *fptr){
    // Find the size of secret file data
}

/*
 * Get File pointers for i/p and o/p files
 * Inputs: Src Image file, Secret file and
 * Stego Image file
 * Output: FILE pointer for above files
 * Return Value: e_success or e_failure, on file errors
 */

Status read_and_validate_encode_args(char *argv[], EncodeInfo *encInfo){
    char *ptr;

    ptr=strstr(argv[2],".bmp");
    if((ptr != NULL) && strcmp(ptr,".bmp") == 0){                                     // source image validation
        encInfo->src_image_fname=argv[2];
    }
    else{
        return e_failure;
    }

    ptr=strstr(argv[3],".txt");
    if((ptr != NULL) && strcmp(ptr,".txt") == 0){                                     // secret file validation
        encInfo->secret_fname=argv[3];
    }
    else{
        return e_failure;
    }

    if(argv[4]==NULL){
        encInfo->dest_image_fname="destination.bmp";
    }
    else{
        ptr=strstr(argv[4],".bmp");
        if((ptr != NULL) && (strcmp(ptr,".bmp")) == 0){
            encInfo->dest_image_fname=argv[4];
        }
        else{
            return e_failure;
        }
    }

    return e_success;
}

Status open_files(EncodeInfo *encInfo){
    // Src Image file
    encInfo->fptr_src_image = fopen(encInfo->src_image_fname, "r");
    // Do Error handling
    if (encInfo->fptr_src_image == NULL)
    {
        perror("fopen");
        fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->src_image_fname);

        return e_failure;
    }

    // Secret file
    encInfo->fptr_secret = fopen(encInfo->secret_fname, "r");
    // Do Error handling
    if (encInfo->fptr_secret == NULL)
    {
        perror("fopen");
        fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->secret_fname);

        return e_failure;
    }

    // Stego Image file
    encInfo->fptr_dest_image = fopen(encInfo->dest_image_fname, "w");
    // Do Error handling
    if (encInfo->fptr_dest_image == NULL)
    {
        perror("fopen");
        fprintf(stderr, "ERROR: Unable to open file %s\n", encInfo->dest_image_fname);

        return e_failure;
    }

    // No failure return e_success
    return e_success;
}

Status check_capacity(EncodeInfo *encInfo){
    
}

Status copy_bmp_header(FILE *fptr_src_image, FILE *fptr_dest_image){
    
}
Status encode_magic_string(const char *magic_string, EncodeInfo *encInfo){
    
}
Status encode_secret_file_extn_size(int size, EncodeInfo *encInfo){
  
}

Status encode_secret_file_extn(const char *file_extn, EncodeInfo *encInfo){
   
}

Status encode_secret_file_size(long file_size, EncodeInfo *encInfo){
    
}

Status encode_secret_file_data(EncodeInfo *encInfo){

}

Status encode_byte_to_lsb(char data, char *image_buffer){
   
}

Status encode_size_to_lsb(int size, char *imageBuffer){
  
}

Status do_encoding(EncodeInfo *encInfo){
  
}
