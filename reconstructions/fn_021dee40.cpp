#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488764;
extern "C" RuntimeTag data_10488768;
extern "C" const RuntimeVTable data_10049d58;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10049d48;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10049d38;

typedef Token<&data_10488764, &data_10488768, &data_10049d58> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10049d48> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10049d38> Type2;

extern "C" bool fn_021dee40(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
