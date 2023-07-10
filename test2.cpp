#include <stdio.h>
#include <string>
#include <unordered_map>
#include "crc64_tekito.h"
using namespace std;
using namespace crc64_tekito;

#define TEST_SIZE 100000
#define IS_PRINT false

main() {
    unordered_map<uint64_t, bool> table;
    table.reserve(TEST_SIZE*10);

    for (uint64_t i = 0; i < TEST_SIZE; i++) {

        uint64_t key = crc64(to_string(i).c_str());

        if(IS_PRINT) printf("%16llx\n", key);

        if(table[key]) {
            printf("hit!\nindex: %llu, hash: %16llx\n", i, key);
            return 0;
        }
        else {
            table[key] = true;
        }
    }
    
    return 0;
}