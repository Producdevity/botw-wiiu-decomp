#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10488ac0;
extern "C" RuntimeTag data_10488abc;
extern "C" const RuntimeVTable data_10052798;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10052788;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10052778;

typedef Token<&data_10488ac0, &data_10488abc, &data_10052798> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10052788> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10052778> Type2;

extern "C" bool fn_02205c3c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
