#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104891a4;
extern "C" RuntimeTag data_104891a0;
extern "C" const RuntimeVTable data_10065860;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100657d8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100657c8;

typedef Token<&data_104891a4, &data_104891a0, &data_10065860> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100657d8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100657c8> Type2;

extern "C" bool fn_02262b28(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
