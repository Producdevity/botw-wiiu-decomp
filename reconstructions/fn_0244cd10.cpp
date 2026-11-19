#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ae84;
extern "C" RuntimeTag data_1048ae88;
extern "C" const RuntimeVTable data_100b8930;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b8920;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b8910;

typedef Token<&data_1048ae84, &data_1048ae88, &data_100b8930> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100b8920> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100b8910> Type2;

extern "C" bool fn_0244cd10(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
