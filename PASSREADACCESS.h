#pragma once
#include <cstdio>

//memory safety: prevent buffer read overflow 
template <size_t index, typename pass_len, size_t length>
pass_len& get(pass_len (&arr)[length]) {static_assert(index < length, "Access Denied"); return arr[length]; }
 