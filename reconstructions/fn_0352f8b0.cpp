#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048f110;
extern "C" RuntimeTag data_104941d8;
extern "C" const RuntimeVTable data_102d8e34;
extern "C" unsigned data_10486c80;
extern "C" RuntimeTag data_104912b4;
extern "C" const RuntimeVTable data_102d8e24;
extern "C" unsigned data_10486c7c;
extern "C" RuntimeTag data_104912b0;
extern "C" const RuntimeVTable data_102d8e04;

typedef Token<&data_1048f110, &data_104941d8, &data_102d8e34> Type0;
typedef Token<&data_10486c80, &data_104912b4, &data_102d8e24> Type1;
typedef Token<&data_10486c7c, &data_104912b0, &data_102d8e04> Type2;

extern "C" bool fn_0352f8b0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
