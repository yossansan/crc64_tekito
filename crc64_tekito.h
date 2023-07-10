#pragma once

#include <stdint.h>
#include <cstring>

namespace crc64_tekito{
    constexpr uint64_t crc64_memoization(const  char* str, const uint32_t end, const uint64_t x, const uint32_t i) {
        if(i == end) return x;
        if(i % 8 == 0) return crc64_memoization(str, end, x + (uint64_t(str[i/8])), i+1);
        if(x>>62 % 2 == 0) return crc64_memoization(str, end, x<<1, i+1);
        return crc64_memoization(str, end, (x^0x42F0E1EBA9EA3693)<<1, i+1);
    }
    constexpr uint64_t crc64_strlen(const char* str, const uint32_t str_i) {
        if(str[str_i] == '\0') return crc64_memoization(str, (str_i+1)*8, 0, 0);
        else return crc64_strlen(str, str_i+1);
    }
    constexpr uint64_t crc64(const char* str) {
        return crc64_strlen(str, 0);
    }
}