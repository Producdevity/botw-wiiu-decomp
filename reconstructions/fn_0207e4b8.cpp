#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486fc0;
extern "C" RuntimeTag data_10486fc4;
extern "C" const RuntimeVTable data_1000e650;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000e640;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000e630;

typedef Token<&data_10486fc0, &data_10486fc4, &data_1000e650> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1000e640> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1000e630> Type2;

extern "C" bool fn_0207e4b8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
