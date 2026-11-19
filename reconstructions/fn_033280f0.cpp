#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fe28;
extern "C" RuntimeTag data_10492e3c;
extern "C" const RuntimeVTable data_102b106c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102b105c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102b104c;

typedef Token<&data_1048fe28, &data_10492e3c, &data_102b106c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102b105c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102b104c> Type2;

extern "C" bool fn_033280f0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
