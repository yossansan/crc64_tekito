#include "crc_tekito.h"


constexpr uint64_t hashstr_dp(const char* str, const uint64_t x, const uint32_t i) {
    if(i == std::strlen(str)*8) return x;
    if(i % 8 == 0) return hashstr_dp(str, x + (uint64_t(str[i/8])), i+1);
    if(x>>62 % 2 == 0) return hashstr_dp(str, x<<1, i+1);
    return hashstr_dp(str, (x^0x42F0E1EBA9EA3693)<<1, i+1);
}

constexpr uint64_t hashstr(const char* str) {
    return hashstr_dp(str, 0, 0);
}


int main() {
    printf("%16llx", hashstr("abcdefghijklmnopqrstu"));
    return 0;
}