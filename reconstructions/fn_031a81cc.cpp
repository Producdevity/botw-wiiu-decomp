#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486418;
extern "C" RuntimeTag data_1048b628;
extern "C" const RuntimeVTable data_1028d4a0;
extern "C" unsigned data_10486218;
extern "C" RuntimeTag data_1048b624;
extern "C" const RuntimeVTable data_1028d490;
extern "C" unsigned data_10486204;
extern "C" RuntimeTag data_1048b620;
extern "C" const RuntimeVTable data_1028d480;

typedef Token<&data_10486418, &data_1048b628, &data_1028d4a0> Type0;
typedef Token<&data_10486218, &data_1048b624, &data_1028d490> Type1;
typedef Token<&data_10486204, &data_1048b620, &data_1028d480> Type2;

extern "C" bool fn_031a81cc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
