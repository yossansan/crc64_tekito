#include <stdio.h>
#include "crc64_tekito.h"
using namespace crc64_tekito;

main() {
    
    while(1) {
        char str[256];
        scanf("%s", str);

        switch(crc64(str))
        {
            case crc64("gohan"):
                printf("this is a gohan.\n");
                break;
            case crc64("okayu"):
                printf("this is a okayu.\n");
                break;
            case crc64("udon"):
                printf("this is a udon.\n");
                break;
            case crc64("mochi"):
                printf("this is a mochi.\n");
                break;
            default:
                printf("this is a other\n");
                break;
        }
    }
}