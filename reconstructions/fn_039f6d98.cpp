#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490bc0;
extern "C" RuntimeTag data_104974e0;
extern "C" const RuntimeVTable data_10354474;
extern "C" unsigned data_10490bb0;
extern "C" RuntimeTag data_104974dc;
extern "C" const RuntimeVTable data_10354464;
extern "C" unsigned data_10490ba8;
extern "C" RuntimeTag data_10493bd0;
extern "C" const RuntimeVTable data_10354434;

typedef Token<&data_10490bc0, &data_104974e0, &data_10354474> Type0;
typedef Token<&data_10490bb0, &data_104974dc, &data_10354464> Type1;
typedef Token<&data_10490ba8, &data_10493bd0, &data_10354434> Type2;

extern "C" bool fn_039f6d98(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
