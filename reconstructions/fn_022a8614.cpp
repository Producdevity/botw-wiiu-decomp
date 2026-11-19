#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10487fac;
extern "C" RuntimeTag data_10487fb0;
extern "C" const RuntimeVTable data_10071bcc;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10071bbc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10071bac;

typedef Token<&data_10487fac, &data_10487fb0, &data_10071bcc> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10071bbc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10071bac> Type2;

extern "C" bool fn_022a8614(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
