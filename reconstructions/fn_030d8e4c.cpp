#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104863f0;
extern "C" RuntimeTag data_1049133c;
extern "C" const RuntimeVTable data_1027c7e0;
extern "C" unsigned data_10486218;
extern "C" RuntimeTag data_1048b624;
extern "C" const RuntimeVTable data_1027c7d0;
extern "C" unsigned data_10486204;
extern "C" RuntimeTag data_1048b620;
extern "C" const RuntimeVTable data_1027c7c0;

typedef Token<&data_104863f0, &data_1049133c, &data_1027c7e0> Type0;
typedef Token<&data_10486218, &data_1048b624, &data_1027c7d0> Type1;
typedef Token<&data_10486204, &data_1048b620, &data_1027c7c0> Type2;

extern "C" bool fn_030d8e4c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
