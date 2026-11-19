#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048fdac;
extern "C" RuntimeTag data_10492814;
extern "C" const RuntimeVTable data_1028e228;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1028e218;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1028e208;

typedef Token<&data_1048fdac, &data_10492814, &data_1028e228> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1028e218> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1028e208> Type2;

extern "C" bool fn_031affac(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
