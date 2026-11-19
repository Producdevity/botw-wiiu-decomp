#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048aa84;
extern "C" RuntimeTag data_1048aa88;
extern "C" const RuntimeVTable data_100acd5c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100acd4c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100acd3c;

typedef Token<&data_1048aa84, &data_1048aa88, &data_100acd5c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100acd4c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100acd3c> Type2;

extern "C" bool fn_0240f1a4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
