#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486404;
extern "C" RuntimeTag data_10491340;
extern "C" const RuntimeVTable data_1027c8e8;
extern "C" unsigned data_10486218;
extern "C" RuntimeTag data_1048b624;
extern "C" const RuntimeVTable data_1027c8d8;
extern "C" unsigned data_10486204;
extern "C" RuntimeTag data_1048b620;
extern "C" const RuntimeVTable data_1027c8c8;

typedef Token<&data_10486404, &data_10491340, &data_1027c8e8> Type0;
typedef Token<&data_10486218, &data_1048b624, &data_1027c8d8> Type1;
typedef Token<&data_10486204, &data_1048b620, &data_1027c8c8> Type2;

extern "C" bool fn_030d9c24(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
