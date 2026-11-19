#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fd90;
extern "C" RuntimeTag data_10492c98;
extern "C" const RuntimeVTable data_102a5b8c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a5b6c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a5b5c;

typedef Token<&data_1048fd90, &data_10492c98, &data_102a5b8c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102a5b6c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102a5b5c> Type2;

extern "C" bool fn_032b699c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
