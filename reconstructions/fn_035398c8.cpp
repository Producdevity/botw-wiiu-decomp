#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e1e8;
extern "C" RuntimeTag data_10494234;
extern "C" const RuntimeVTable data_102dada0;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102dad90;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102dad70;

typedef Token<&data_1048e1e8, &data_10494234, &data_102dada0> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102dad90> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102dad70> Type2;

extern "C" bool fn_035398c8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
