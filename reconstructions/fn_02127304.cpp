#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487ab4;
extern "C" RuntimeTag data_10487ab8;
extern "C" const RuntimeVTable data_10027a1c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100279fc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100279ec;

typedef Token<&data_10487ab4, &data_10487ab8, &data_10027a1c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100279fc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100279ec> Type2;

extern "C" bool fn_02127304(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
