#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487f20;
extern "C" RuntimeTag data_10487f24;
extern "C" const RuntimeVTable data_10032bf8;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10032be8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10032bd8;

typedef Token<&data_10487f20, &data_10487f24, &data_10032bf8> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10032be8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10032bd8> Type2;

extern "C" bool fn_021637a4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
