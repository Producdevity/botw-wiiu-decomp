#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489668;
extern "C" RuntimeTag data_1048966c;
extern "C" const RuntimeVTable data_10071a84;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10071a74;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10071a64;

typedef Token<&data_10489668, &data_1048966c, &data_10071a84> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10071a74> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10071a64> Type2;

extern "C" bool fn_022a7de4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
