#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_104886fc;
extern "C" RuntimeTag data_10488700;
extern "C" const RuntimeVTable data_10048f50;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_10048f40;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10048f30;

typedef Token<&data_104886fc, &data_10488700, &data_10048f50> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_10048f40> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10048f30> Type2;

extern "C" bool fn_021dc154(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
