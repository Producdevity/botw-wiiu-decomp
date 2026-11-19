#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487e00;
extern "C" RuntimeTag data_10487e04;
extern "C" const RuntimeVTable data_1002f9d8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1002f9c8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1002f9b8;

typedef Token<&data_10487e00, &data_10487e04, &data_1002f9d8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1002f9c8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1002f9b8> Type2;

extern "C" bool fn_02154fec(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
