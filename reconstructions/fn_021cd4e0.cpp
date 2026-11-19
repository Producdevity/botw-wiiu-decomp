#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104880c0;
extern "C" RuntimeTag data_104880c4;
extern "C" const RuntimeVTable data_10045450;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10045440;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10045430;

typedef Token<&data_104880c0, &data_104880c4, &data_10045450> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10045440> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10045430> Type2;

extern "C" bool fn_021cd4e0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
