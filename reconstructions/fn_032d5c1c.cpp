#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fe00;
extern "C" RuntimeTag data_10492d14;
extern "C" const RuntimeVTable data_102a9950;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_102a9940;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102a9930;

typedef Token<&data_1048fe00, &data_10492d14, &data_102a9950> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_102a9940> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102a9930> Type2;

extern "C" bool fn_032d5c1c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
