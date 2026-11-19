#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048dfa8;
extern "C" RuntimeTag data_1048dfac;
extern "C" const RuntimeVTable data_101695ec;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101695dc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101695cc;

typedef Token<&data_1048dfa8, &data_1048dfac, &data_101695ec> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101695dc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101695cc> Type2;

extern "C" bool fn_029320cc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
