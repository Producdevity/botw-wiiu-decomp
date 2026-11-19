#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488964;
extern "C" RuntimeTag data_10488960;
extern "C" const RuntimeVTable data_1004e9dc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004e9cc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004e9bc;

typedef Token<&data_10488964, &data_10488960, &data_1004e9dc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004e9cc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004e9bc> Type2;

extern "C" bool fn_021f3fdc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
