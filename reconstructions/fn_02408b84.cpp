#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048aa24;
extern "C" RuntimeTag data_1048aa20;
extern "C" const RuntimeVTable data_100abaa0;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100aba90;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100aba80;

typedef Token<&data_1048aa24, &data_1048aa20, &data_100abaa0> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100aba90> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100aba80> Type2;

extern "C" bool fn_02408b84(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
