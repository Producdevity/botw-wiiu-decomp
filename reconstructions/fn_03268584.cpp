#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486efc;
extern "C" RuntimeTag data_10486f00;
extern "C" const RuntimeVTable data_1029a85c;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1029a83c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1029a82c;

typedef Token<&data_10486efc, &data_10486f00, &data_1029a85c> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1029a83c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1029a82c> Type2;

extern "C" bool fn_03268584(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
