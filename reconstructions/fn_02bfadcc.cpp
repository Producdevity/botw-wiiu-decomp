#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490160;
extern "C" RuntimeTag data_10490638;
extern "C" const RuntimeVTable data_101bd310;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101bd300;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101bd2f0;

typedef Token<&data_10490160, &data_10490638, &data_101bd310> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101bd300> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101bd2f0> Type2;

extern "C" bool fn_02bfadcc(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
