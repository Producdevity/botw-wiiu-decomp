#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c894;
extern "C" RuntimeTag data_1048c898;
extern "C" const RuntimeVTable data_1011bfd8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1011bfc8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1011bfb8;

typedef Token<&data_1048c894, &data_1048c898, &data_1011bfd8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1011bfc8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1011bfb8> Type2;

extern "C" bool fn_02716c4c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
