#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487efc;
extern "C" RuntimeTag data_10487ef8;
extern "C" const RuntimeVTable data_10032218;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10032208;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100321f8;

typedef Token<&data_10487efc, &data_10487ef8, &data_10032218> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10032208> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100321f8> Type2;

extern "C" bool fn_02161aa4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
