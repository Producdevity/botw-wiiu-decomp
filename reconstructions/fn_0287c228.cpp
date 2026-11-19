#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d818;
extern "C" RuntimeTag data_1048d81c;
extern "C" const RuntimeVTable data_1014c3ec;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1014c3dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1014c3cc;

typedef Token<&data_1048d818, &data_1048d81c, &data_1014c3ec> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1014c3dc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1014c3cc> Type2;

extern "C" bool fn_0287c228(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
