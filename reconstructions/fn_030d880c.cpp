#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104863f8;
extern "C" RuntimeTag data_1049250c;
extern "C" const RuntimeVTable data_1027c768;
extern "C" unsigned data_10486218;
extern "C" RuntimeTag data_1048b624;
extern "C" const RuntimeVTable data_1027c758;
extern "C" unsigned data_10486204;
extern "C" RuntimeTag data_1048b620;
extern "C" const RuntimeVTable data_1027c748;

typedef Token<&data_104863f8, &data_1049250c, &data_1027c768> Type0;
typedef Token<&data_10486218, &data_1048b624, &data_1027c758> Type1;
typedef Token<&data_10486204, &data_1048b620, &data_1027c748> Type2;

extern "C" bool fn_030d880c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
