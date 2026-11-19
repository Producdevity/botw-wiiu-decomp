#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d530;
extern "C" RuntimeTag data_1048d534;
extern "C" const RuntimeVTable data_10142fcc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10142fbc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10142fac;

typedef Token<&data_1048d530, &data_1048d534, &data_10142fcc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10142fbc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10142fac> Type2;

extern "C" bool fn_0283ece0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
