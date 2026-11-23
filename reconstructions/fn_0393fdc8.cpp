#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10495c8c;
extern "C" RuntimeTag data_10496c38;
extern "C" const RuntimeVTable data_1033ecac;
extern "C" unsigned data_10486550;
extern "C" RuntimeTag data_104927ec;
extern "C" const RuntimeVTable data_1033ec9c;
extern "C" unsigned data_10486548;
extern "C" RuntimeTag data_104927e4;
extern "C" const RuntimeVTable data_1033ec8c;

typedef Token<&data_10495c8c, &data_10496c38, &data_1033ecac> Type0;
typedef Token<&data_10486550, &data_104927ec, &data_1033ec9c> Type1;
typedef Token<&data_10486548, &data_104927e4, &data_1033ec8c> Type2;

extern "C" bool fn_0393fdc8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
