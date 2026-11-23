#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486b68;
extern "C" RuntimeTag data_10486bac;
extern "C" const RuntimeVTable data_100079b4;
extern "C" unsigned data_10486b60;
extern "C" RuntimeTag data_10486b9c;
extern "C" const RuntimeVTable data_1000798c;
extern "C" unsigned data_104868a4;
extern "C" RuntimeTag data_10486b30;
extern "C" const RuntimeVTable data_10007954;

typedef Token<&data_10486b68, &data_10486bac, &data_100079b4> Type0;
typedef Token<&data_10486b60, &data_10486b9c, &data_1000798c> Type1;
typedef Token<&data_104868a4, &data_10486b30, &data_10007954> Type2;

extern "C" bool fn_0203be34(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
