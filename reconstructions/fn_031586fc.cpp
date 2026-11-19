#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490194;
extern "C" RuntimeTag data_1049266c;
extern "C" const RuntimeVTable data_102873ec;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_102873dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_102873cc;

typedef Token<&data_10490194, &data_1049266c, &data_102873ec> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_102873dc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_102873cc> Type2;

extern "C" bool fn_031586fc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
