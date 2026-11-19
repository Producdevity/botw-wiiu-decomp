#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104895b0;
extern "C" RuntimeTag data_104895b4;
extern "C" const RuntimeVTable data_1006fbb8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1006fba8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1006fb98;

typedef Token<&data_104895b0, &data_104895b4, &data_1006fbb8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1006fba8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1006fb98> Type2;

extern "C" bool fn_0229e994(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
