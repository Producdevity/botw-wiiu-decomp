#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048aebc;
extern "C" RuntimeTag data_1048aec0;
extern "C" const RuntimeVTable data_100b943c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100b942c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100b941c;

typedef Token<&data_1048aebc, &data_1048aec0, &data_100b943c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100b942c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100b941c> Type2;

extern "C" bool fn_02451ffc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
