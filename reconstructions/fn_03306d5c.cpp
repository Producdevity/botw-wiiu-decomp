#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486ab4;
extern "C" RuntimeTag data_10492e20;
extern "C" const RuntimeVTable data_102ad764;
extern "C" unsigned data_104868d0;
extern "C" RuntimeTag data_104868cc;
extern "C" const RuntimeVTable data_102ad754;
extern "C" unsigned data_104862fc;
extern "C" RuntimeTag data_104868c8;
extern "C" const RuntimeVTable data_102ad744;

typedef Token<&data_10486ab4, &data_10492e20, &data_102ad764> Type0;
typedef Token<&data_104868d0, &data_104868cc, &data_102ad754> Type1;
typedef Token<&data_104862fc, &data_104868c8, &data_102ad744> Type2;

extern "C" bool fn_03306d5c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
