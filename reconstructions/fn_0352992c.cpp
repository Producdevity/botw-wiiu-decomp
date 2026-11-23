#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10493ffc;
extern "C" RuntimeTag data_10494240;
extern "C" const RuntimeVTable data_102d80a8;
extern "C" unsigned data_1048b760;
extern "C" RuntimeTag data_104912bc;
extern "C" const RuntimeVTable data_102d8098;
extern "C" unsigned data_1048b75c;
extern "C" RuntimeTag data_104912b8;
extern "C" const RuntimeVTable data_102d8078;

typedef Token<&data_10493ffc, &data_10494240, &data_102d80a8> Type0;
typedef Token<&data_1048b760, &data_104912bc, &data_102d8098> Type1;
typedef Token<&data_1048b75c, &data_104912b8, &data_102d8078> Type2;

extern "C" bool fn_0352992c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
