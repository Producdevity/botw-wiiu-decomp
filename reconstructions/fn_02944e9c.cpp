#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e0ec;
extern "C" RuntimeTag data_1048e0e8;
extern "C" const RuntimeVTable data_1016c584;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1016c574;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1016c564;

typedef Token<&data_1048e0ec, &data_1048e0e8, &data_1016c584> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1016c574> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1016c564> Type2;

extern "C" bool fn_02944e9c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
