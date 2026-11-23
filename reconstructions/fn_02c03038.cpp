#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1049054c;
extern "C" RuntimeTag data_10490550;
extern "C" const RuntimeVTable data_101bef34;
extern "C" unsigned data_10485cd8;
extern "C" RuntimeTag data_10485cdc;
extern "C" const RuntimeVTable data_101bef24;
extern "C" unsigned data_10485cd0;
extern "C" RuntimeTag data_10485cd4;
extern "C" const RuntimeVTable data_101bef14;

typedef Token<&data_1049054c, &data_10490550, &data_101bef34> Type0;
typedef Token<&data_10485cd8, &data_10485cdc, &data_101bef24> Type1;
typedef Token<&data_10485cd0, &data_10485cd4, &data_101bef14> Type2;

extern "C" bool fn_02c03038(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
