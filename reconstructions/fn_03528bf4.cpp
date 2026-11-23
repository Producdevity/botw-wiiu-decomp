#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c364;
extern "C" RuntimeTag data_104912ac;
extern "C" const RuntimeVTable data_102d7adc;
extern "C" unsigned data_1048b760;
extern "C" RuntimeTag data_104912bc;
extern "C" const RuntimeVTable data_102d7acc;
extern "C" unsigned data_1048b75c;
extern "C" RuntimeTag data_104912b8;
extern "C" const RuntimeVTable data_102d7aac;

typedef Token<&data_1048c364, &data_104912ac, &data_102d7adc> Type0;
typedef Token<&data_1048b760, &data_104912bc, &data_102d7acc> Type1;
typedef Token<&data_1048b75c, &data_104912b8, &data_102d7aac> Type2;

extern "C" bool fn_03528bf4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
