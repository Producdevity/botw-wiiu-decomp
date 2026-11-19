#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104884e8;
extern "C" RuntimeTag data_104884ec;
extern "C" const RuntimeVTable data_10042034;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10042024;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10042014;

typedef Token<&data_104884e8, &data_104884ec, &data_10042034> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10042024> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10042014> Type2;

extern "C" bool fn_021bb79c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
