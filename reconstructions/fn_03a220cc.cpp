#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1049668c;
extern "C" RuntimeTag data_104973d8;
extern "C" const RuntimeVTable data_1035a010;
extern "C" unsigned data_10496688;
extern "C" RuntimeTag data_104973e0;
extern "C" const RuntimeVTable data_1035a000;
extern "C" unsigned data_10486730;
extern "C" RuntimeTag data_10490b5c;
extern "C" const RuntimeVTable data_10359f88;

typedef Token<&data_1049668c, &data_104973d8, &data_1035a010> Type0;
typedef Token<&data_10496688, &data_104973e0, &data_1035a000> Type1;
typedef Token<&data_10486730, &data_10490b5c, &data_10359f88> Type2;

extern "C" bool fn_03a220cc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
