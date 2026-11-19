#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488550;
extern "C" RuntimeTag data_10488554;
extern "C" const RuntimeVTable data_1004313c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1004312c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1004311c;

typedef Token<&data_10488550, &data_10488554, &data_1004313c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1004312c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1004311c> Type2;

extern "C" bool fn_021c1364(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
