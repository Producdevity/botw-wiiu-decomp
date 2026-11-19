#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487988;
extern "C" RuntimeTag data_1048798c;
extern "C" const RuntimeVTable data_100249b8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100249a8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10024998;

typedef Token<&data_10487988, &data_1048798c, &data_100249b8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100249a8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10024998> Type2;

extern "C" bool fn_021135e0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
